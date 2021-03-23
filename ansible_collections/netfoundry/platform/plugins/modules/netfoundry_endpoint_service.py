#!/usr/bin/env python3

# Copyright: (c) 2020, Kenneth Bingham <kenneth.bingham@netfoundry.io>
# GNU General Public License v3.0+ (see COPYING or https://www.gnu.org/licenses/gpl-3.0.txt)
from __future__ import (absolute_import, division, print_function)
from re import match
__metaclass__ = type

DOCUMENTATION = r'''
---
module: netfoundry_endpoint_service

short_description: Create, update, or delete an Endpoint-hosted Service

# If this is part of a collection, you need to use semantic versioning,
# i.e. the version is of the form "2.5.0" and not "2.4".
version_added: "1.10.0"

description: Create and update always have result=changed

options:
    name:
        description: the name of the Service
        required: true
        type: str
    attributes:
        description: A list of Service role attributes prefixed with a \#hash mark to be matched by an AppWAN
        required: false
        type: list
    state:
        description: The desired state.
        required: false
        type: str
        choices: ["PROVISIONED","DELETED"]
        default: PROVISIONED
    clientHostNames:
        description: the domain names (DNS) and IPv4s to intercept
        required: true
        type: list
    clientPortRanges:
        description: the port ranges to intercept e.g. [80, "88:99"]
        type: list
        required: true
    clientProtocols:
        description: the transport protocol to intercept. TCP is default.
        type: str
        required: false
        default: TCP
        choices: ["TCP","UDP", "SCTP]
    endpoints:
        description: a list of Endpoint names, role attributes, or UUIDs to host this Service
        type: list
        required: true
    serverHostName:
        description: optional domain name (DNS) or IPv4 of the server that is reachable by the hosting Endpoint. Client intercept address is default.
        type: str
        required: false
    serverPortRange:
        description: the listening port of the server that is reachable by the hosting Endpoint. Client intercept port is default.
        type: int
        required: false
    serverProtocol:
        description: the transport protocol expected by the server. Client intercept protocol is default.
        type: str
        required: false
        default: TCP
        choices: ["TCP","UDP", "SCTP]
    encryptionRequired:
        description: require edge-to-edge encryption (E2EE) from intercept or SDK to hosting Endpoint
        type: bool
        required: false
        default: true
    network:
        description: The dictionary describing the Network on which to operate from netfoundry_info.network.
        required: true
        type: dict
    edge_router_attributes:
        description: A list of Router role attributes prefixed with a \#hash mark that may be used to access this Service. Default is ["#all"].
        required: false
        type: list

author:
    - Kenneth Bingham (@qrkourier)

requirements:
    - netfoundry
'''

EXAMPLES = r'''
  - name: host a Service as a range of server ports
    netfoundry_endpoint_service:
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
# notably, argument `serverHostName` is omitted because the Endpoints will use the same address from clientHostNames to reach the server.

  - name: host a Service with a round-robin of Endpoints
    netfoundry_endpoint_service:
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
        serverHostName: portal-load-balancer.internal.example.com
        serverPortRange: 1443
        network: "{{ netfoundry_info.network }}"

  - name: Delete all Services
    netfoundry_endpoint_service:
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
from netfoundry import Organization
from netfoundry import NetworkGroup
from netfoundry import Network
#from netfoundry import Utility
from uuid import UUID

def run_module():
    # define available arguments/parameters a user can pass to the module
    module_args = dict(
        name=dict(type='str', required=True),
        attributes=dict(type='list', elements='str', required=False, default=[]),
        state=dict(type='str', required=False, default="PROVISIONED", choices=["PROVISIONED","DELETED"]),
        network=dict(type='dict', required=True),
        clientHostName=dict(type='str', required=False),
        clientPortRange=dict(type='int', required=False),
        clientProtocols=dict(type='str', required=False, default="TCP", choices=["TCP","UDP","SCTP","tcp","udp","sctp"]),
        endpoints=dict(type='list', elements='str', required=False),
        serverHostName=dict(type='str', required=False),
        serverPortRange=dict(type='int', required=False),
        serverProtocol=dict(type='str', required=False, default="TCP", choices=["TCP","UDP","SCTP","tcp","udp","sctp"]),
        encryptionRequired=dict(type='bool', required=False, default=True),
        edgeRouterAttributes=dict(type='list', elements='str', required=False, default=["#all"]),
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
#    utility = Utility()

    network_group = NetworkGroup(
        organization,
        network_group_id=module.params['network']['networkGroupId']
    )

    network = Network(network_group, network_id=module.params['network']['id'])

    service_properties = {
        "name": module.params['name'],
        "attributes": module.params['attributes'],
        "edge_router_attributes": module.params['edgeRouterAttributes'],
        "client_host_names": module.params['clientHostName'],
        "client_port_ranges": module.params['clientPortRange'],
        "server_host_name": module.params['serverHostName'],
        "server_port_range": module.params['serverPortRange'],
        "server_protocol": module.params['serverProtocol'],
        "encryption_required": module.params['encryptionRequired'],
        "endpoints": module.params['endpoints']
    }

    # check if UUIDv4
    try: UUID(module.params['name'], version=4)
    except ValueError:
        # else assume is a Service name
        found = network.get_resources(type="services",name=module.params['name'])
    # it's a UUID and so we assign the property directly
    else: 
        found = [network.get_resource(type="service",id=module.params['name'])]
    # discover any existing Services with the specified name
#    import epdb; epdb.serve()

    if len(found) == 0:
        if module.params['state'] == "PROVISIONED":
            result['message'] = network.create_endpoint_service(**service_properties)
            result['changed'] = True
        elif module.params['state'] == "DELETED":
            result['changed'] = False
    elif len(found) == 1:
        service = found[0]
        if module.params['state'] == "PROVISIONED":
            try:
                network.delete_resource(type="service",id=service['id'])
                result['message'] = network.create_endpoint_service(**service_properties)
            except Exception as e:
                raise AnsibleError('Failed to recreate Service "{}". Caught exception: {}'.format(module.params['name'], to_native(e)))
            else: result['changed'] = True
        elif module.params['state'] == "DELETED":
            try: network.delete_resource(type="service",id=service['id'])
            except Exception as e:
                raise AnsibleError('Failed to delete Service "{}". Caught exception: {}'.format(module.params['name'], to_native(e)))
            result['changed'] = True
    else:
        module.fail_json(msg='ERROR: "{name}" matched more than one Service'.format(name=module.params['name']), **result)

    module.exit_json(**result)

def main():
    run_module()

if __name__ == '__main__':
    main()
