#!/usr/bin/env python3

# Copyright: (c) 2020, Kenneth Bingham <kenneth.bingham@netfoundry.io>
# GNU General Public License v3.0+ (see COPYING or https://www.gnu.org/licenses/gpl-3.0.txt)
from __future__ import (absolute_import, division, print_function)
from re import match
__metaclass__ = type

ANSIBLE_METADATA = {
    'metadata_version': '1.1',
    'status': ['preview'],
    'supported_by': 'community'
}

DOCUMENTATION = r'''
---
module: netfoundry_service_advanced

short_description: Create, update, or delete an endpoint-hosted service based on the advanced service model

# If this is part of a collection, you need to use semantic versioning,
# i.e. the version is of the form "2.5.0" and not "2.4".
version_added: "1.10.0"

description: Create and update always have result=changed

options:
    name:
        description: the name of the service
        required: true
        type: str
    attributes:
        description: A list of service role attributes prefixed with a \#hash mark to be matched by an AppWAN
        required: false
        type: list
    state:
        description: The desired state.
        required: false
        type: str
        choices: ["PROVISIONED","DELETED"]
        default: PROVISIONED
    clientHosts:
        description: the domain names and IPv4s to intercept
        required: true
        type: list
    clientPorts:
        description: port ranges to intercept e.g. ["80", "88:99"] as strings
        type: list
        required: true
    clientProtocols:
        description: the transport protocol to intercept. TCP is default.
        type: str
        required: false
        default: tcp
        choices: ["tcp","udp"]
    endpoints:
        description: a list of endpoint names, role attributes, or UUIDs to host this service
        type: list
        required: true
    serverHosts:
        description: optional list of domain names, IPv4, IPv6 of the server(s) reachable by the hosting endpoint. Default is client intercept address.
        type: list
        required: false
    serverPorts:
        description: listening ports of the server(s) reachable by the hosting endpoint. Default is client intercept port(s).
        type: list
        required: false
    serverProtocols:
        description: the transport protocol(s) expected by the server. Default is client intercept protocol(s).
        type: list
        required: false
        default: same as intercept
        choices: ["tcp","udp"]
    transparentHosts:
        description: optional list of IPv4, IPv6 CIDR to allow. If specified, the terminating endpoint will transparently masquerade as
                     the source address and protocol of the intercepted packet and will ignore serverHosts, serverPorts, serverProtocols.
        type: list
        required: false
    encryptionRequired:
        description: require edge-to-edge encryption (E2EE) from intercept or SDK to hosting endpoint
        type: bool
        required: false
        default: true
    network:
        description: The dictionary describing the Network on which to operate from netfoundry_info.network.
        required: true
        type: dict
    edge_router_attributes:
        description: A list of Router role attributes prefixed with a \#hash mark that may be used to access this service. Default is ["#all"].
        required: false
        type: list

author:
    - Kenneth Bingham (@qrkourier)

requirements:
    - netfoundry
'''

EXAMPLES = r'''
  - name: host a service as a range of server ports
    netfoundry_service_advanced:
        name: Spice Terminal Servers
        attributes:
        - "#workFromAnywhere/"
        clientHostNames:
        - spice-console.example.com # this matches the SSL server certificate
        clientPortRanges:
        - 5900:5999
        endpoints:
        - americas-datacenter-centos12
        - americas-datacenter-centos13
        network: "{{ netfoundry_info.network }}"
# notably, argument `serverHostName` is omitted because the endpoints will use the same address from clientHostNames to reach the server.

  - name: host a service with a round-robin of endpoints
    netfoundry_service_advanced:
        name: SSO Portal
        attributes:
        - "#allEmployees"
        clientHostNames:
        - portal.example.com # this matches the SSL server certificate
        clientPortRanges:
        - 443
        endpoints:
        - americas-datacenter-centos12
        - americas-datacenter-centos13
        serverHosts: portal-load-balancer.internal.example.com
        serverPorts: 1443
        network: "{{ netfoundry_info.network }}"

  - name: Delete all services
    netfoundry_service_advanced:
      name: "{{ item }}"
      state: DELETED
      network: "{{ netfoundry_info.network }}"
    loop: "{{ netfoundry_info.services|map(attribute='name')|list }}"
'''

RETURN = r'''
# These are examples of possible return values, and in general should use other names for return values.
message:
    description: The HTTP response from the create, update, or delete operation.
    type: dict
    returned: always
'''

from ansible.module_utils.basic import AnsibleModule
from ansible.module_utils.api import rate_limit_argument_spec, retry_argument_spec
from ansible.errors import AnsibleError
from ansible.module_utils._text import to_native
from netfoundry.organization import Organization
from netfoundry.network_group import NetworkGroup
from netfoundry.network import Network
from netfoundry.utility import Utility
from uuid import UUID
from time import sleep

def run_module():
    # define available arguments/parameters a user can pass to the module
    module_args = dict(
        name=dict(type='str', required=True),
        attributes=dict(type='list', elements='str', required=False),
        state=dict(type='str', required=False, default="PROVISIONED", choices=["PROVISIONED","DELETED"]),
        network=dict(type='dict', required=True),
        clientHosts=dict(type='list', elements='str', required=True),
        clientPorts=dict(type='list', elements='str', required=True),
        clientProtocols=dict(type='list', elements='str', required=False, choices=["TCP","UDP","tcp","udp"]),
        endpoints=dict(type='list', elements='str', required=True),
        serverHosts=dict(type='list', elements='str', required=False),
        transparentHosts=dict(type='list', elements='str', required=False),
        serverPorts=dict(type='list', elements='str', required=False),
        serverProtocols=dict(type='list', elements='str', required=False, choices=["TCP","UDP","tcp","udp"]),
        encryptionRequired=dict(type='bool', required=False),
        wait=dict(type='int', required=False, default=11),
        edgeRouterAttributes=dict(type='list', elements='str', required=False),
    )

    # seed the result dict in the object
    # we primarily care about changed and state
    # changed is if this module effectively modified the target
    # state will include any data that you want your module to pass back
    # for consumption, for example, in a subsequent task
    result = dict(
        changed=False,
        message=dict()
    )

    # the AnsibleModule object will be our abstraction working with Ansible
    # this includes instantiation, a couple of common attr would be the
    # args/params passed to the execution, as well as if the module
    # supports check mode
    module = AnsibleModule(
        argument_spec=module_args,
        supports_check_mode=True
    )

    # if the user is working with this module in only check mode we do not
    # want to make any changes to the environment, just return the current
    # state with no modifications
    if module.check_mode:
        module.exit_json(**result)

    # manipulate or modify the state as needed (this is going to be the
    # part where your module will do what it needs to do)

    organization = Organization(
        **module.params['network']['session']
    )

    result['session'] = {
        "token": organization.token,
        "credentials": organization.credentials,
        "proxy": organization.proxy,
        "organization_id": organization.id
    }

    # instantiate some utility methods like snake(), camel() for translating styles
    utility = Utility()

    network_group = NetworkGroup(
        organization,
        network_group_id=module.params['network']['networkGroupId']
    )

    network = Network(network_group, network_id=module.params['network']['id'])



    # if transparent, else advanced
    if module.params['transparentHosts']:
        expected_service_params = [
            "name",
            "attributes",
            "client_hosts",
            "client_ports",
            "client_protocols",
            "transparent_hosts",
            "encryption_required",
            "endpoints",
            "edge_router_attributes",
        ]

        # compose a dictionary of validated parameters for Network.create_service_advanced() from the
        #  intersection of module params and expected properties method: normalize the camel-case module
        #  args for comparison with snake-case expected properties
        validated_service_params = dict()
        for expected in expected_service_params:
            expected_camel = utility.camel(snake_str=expected)
            # if present and true
            if expected_camel in module.params.keys() and module.params[expected_camel]:
                validated_service_params[expected] = module.params[expected_camel]

        # check if UUIDv4
        try: UUID(module.params['name'], version=4)
        except ValueError:
            # else assume is a service name
            found = network.get_resources(type="services",name=module.params['name'])
        # it's a UUID and so we assign the property directly
        else: 
            # discover any existing services with the specified name
            found = [network.get_resource(type="service",id=module.params['name'])]

        if len(found) == 0:
            if module.params['state'] == "PROVISIONED":
                result['message'] = network.create_service_transparent(**validated_service_params)
            elif module.params['state'] == "DELETED":
                result['changed'] = False
        elif len(found) == 1:
            found_service = found[0]
            if module.params['state'] == "PROVISIONED":
                try:
                    # transform validated service params to the entity model for comparison with found service
                    result['message'] = network.delete_service_transparent(module.params['name'])
                    sleep(3)
                    result['message'] = network.create_service_transparent(**validated_service_params)
                except Exception as e:
                    raise AnsibleError('Failed to recreate transparent service "{}". Caught exception: {}'.format(module.params['name'], to_native(e)))
                else: result['changed'] = True
            elif module.params['state'] == "DELETED":
                try: 
                    result['message'] = network.delete_service_transparent(module.params['name'])
                except Exception as e:
                    raise AnsibleError('Failed to delete service "{}". Caught exception: {}'.format(module.params['name'], to_native(e)))
                else: result['changed'] = True
        else:
            module.fail_json(msg='ERROR: "{name}" matched more than one service'.format(name=module.params['name']), **result)

    # if transparent, else advanced
    else:
        expected_service_params = [
            "name",
            "attributes",
            "client_hosts",
            "client_ports",
            "client_protocols",
            "server_hosts",
            "server_ports",
            "server_protocols",
            "encryption_required",
            "endpoints",
            "edge_router_attributes",
            "wait",
        ]

        # compose a dictionary of validated parameters for Network.create_service_advanced() from the
        #  intersection of module params and expected properties method: normalize the camel-case module
        #  args for comparison with snake-case expected properties
        validated_service_params = dict()
        for expected in expected_service_params:
            expected_camel = utility.camel(snake_str=expected)
            # if present and true
            if expected_camel in module.params.keys() and module.params[expected_camel]:
                validated_service_params[expected] = module.params[expected_camel]

        # check if UUIDv4
        try: UUID(module.params['name'], version=4)
        except ValueError:
            # else assume is a service name
            found = network.get_resources(type="services",name=module.params['name'])
        # it's a UUID and so we assign the property directly
        else: 
            # discover any existing services with the specified name
            found = [network.get_resource(type="service",id=module.params['name'])]

        if len(found) == 0:
            if module.params['state'] == "PROVISIONED":
                if module.params['transparentHosts']:
                    result['message'] = network.create_service_with_configs(**validated_service_params)
                    result['changed'] = True
                else:
                    result['message'] = network.create_service_advanced(**validated_service_params)
                    result['changed'] = True
            elif module.params['state'] == "DELETED":
                result['changed'] = False
        elif len(found) == 1:
            found_service = found[0]
            if module.params['state'] == "PROVISIONED":
                try:
                    # transform validated service params to the entity model for comparison with found service
                    create_service_model = network.create_service_advanced(**validated_service_params, dry_run=True)
                    for create_key in create_service_model.keys():
                        # clobber exactly-matching existing properties with desired property values
                        if utility.snake(create_key) in found_service.keys():
                            found_service[create_key] = create_service_model[utility.snake(create_key)]
                    result['message'] = network.patch_resource(found_service)
                except Exception as e:
                    raise AnsibleError('Failed to patch service "{}". Caught exception: {}'.format(module.params['name'], to_native(e)))
                else: result['changed'] = True
            elif module.params['state'] == "DELETED":
                try: network.delete_resource(type="service",id=found_service['id'])
                except Exception as e:
                    raise AnsibleError('Failed to delete service "{}". Caught exception: {}'.format(module.params['name'], to_native(e)))
                else: result['changed'] = True
        else:
            module.fail_json(msg='ERROR: "{name}" matched more than one service'.format(name=module.params['name']), **result)

    module.exit_json(**result)

def main():
    run_module()

if __name__ == '__main__':
    main()
