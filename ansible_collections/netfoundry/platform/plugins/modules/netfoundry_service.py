#!/usr/bin/env python3

# Copyright: (c) 2020, Kenneth Bingham <kenneth.bingham@netfoundry.io>
# GNU General Public License v3.0+ (see COPYING or https://www.gnu.org/licenses/gpl-3.0.txt)
from __future__ import (absolute_import, division, print_function)
from re import match
__metaclass__ = type

DOCUMENTATION = r'''
---
module: netfoundry_service

short_description: Create, update, or delete a Service

# If this is part of a collection, you need to use semantic versioning,
# i.e. the version is of the form "2.5.0" and not "2.4".
version_added: "1.3.0"

description: Create and update always have result=changed

options:
    name:
        description: the name of the Service
        required: true
        type: str
    attributes:
        description: A list of Service role attributes prefixed with a \#hash mark.
        required: false
        type: list
    state:
        description: The desired state.
        required: false
        type: str
        choices: ["PROVISIONED","DELETED"]
        default: PROVISIONED
    clientHostName:
        description: the domain name (DNS) to intercept
        required: false
        type: str
    clientPort:
        description: the port number to intercept
        type: int
        required: false
    endpoints:
        description: a list of Endpoint names, role attributes, or UUIDs to host this Service
        type: list
        required: false
    egressRouter:
        description: use the Edge Router hosting strategy; specify a name or UUIDv4
        type: str
        required: false
    serverHostName:
        description: the domain name (DNS) or IPv4 of the server that is reachable by the hosting Endpoint or Edge Router
        type: str
        required: false
    serverPort:
        description: the listening port of the server that is reachable by the hosting Endpoint or Edge Router
        type: int
        required: false
    serverProtocol:
        description: the transport protocol used by the server
        type: str
        required: false
        default: TCP
        choices: ["TCP","UDP"]
    encryptionRequired:
        description: require edge-to-edge encryption (E2EE) from intercept or SDK to hosting Endpoint or Edge Router or SDK
        type: bool
        required: false
        default: true
    network:
        description: The dictionary describing the Network on which to operate from netfoundry_info.network.
        required: true
        type: dict
    edge_router_attributes:
        description: A list of Router role attributes prefixed with a \#hash mark that may be used to access this Service.
        required: false
        type: list

author:
    - Kenneth Bingham (@qrkourier)

requirements:
    - netfoundry
'''

EXAMPLES = r'''
  - name: host a Service with a round-robin of Endpoints running on Linux servers
    netfoundry_service:
        name: SSO Portal
        network: "{{ netfoundry_info.network }}"
        attributes:
        - "#allEmployees"
        clientHostName: portal.example.com # this matches the SSL server certificate
        clientPort: 443
        endpoints:
        - americas-datacenter-centos12
        - americas-datacenter-centos13
        serverHostName: portal-load-balancer.internal.example.com
        serverPort: 1443

  - name: host a Service with an Edge Router running on the NetFoundry VM configured as a "bastion" host
    netfoundry_service:
        name: Finance Portal
        network: "{{ netfoundry_info.network }}"
        attributes:
        - "#accounting"
        clientHostName: finance.example.com # this matches the SSL server certificate
        clientPort: 443
        egressRouter: finance-bastion11
        serverHostName: portal-load-balancer.finance.internal.example.com
        serverPort: 18443

  - name: Delete all Services
    netfoundry_service:
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
from netfoundry import Utility
from uuid import UUID

def run_module():
    # define available arguments/parameters a user can pass to the module
    module_args = dict(
        name=dict(type='str', required=True),
        attributes=dict(type='list', elements='str', required=False, default=[]),
        state=dict(type='str', required=False, default="PROVISIONED", choices=["PROVISIONED","DELETED"]),
        network=dict(type='dict', required=True),
        clientHostName=dict(type='str', required=False),
        clientPort=dict(type='int', required=False, aliases=["clientPortRange"]),
        endpoints=dict(type='list', elements='str', required=False),
        egressRouter=dict(type='str', required=False),
        serverHostName=dict(type='str', required=False),
        serverPort=dict(type='int', required=False, aliases=["serverPortRange"]),
        serverProtocol=dict(type='str', required=False, default="TCP", choices=["TCP","UDP"]),
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
        mutually_exclusive=[
            ('endpoints', 'egressRouter'),
        ],
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

    service_properties = {
        "name": module.params['name'],
        "attributes": module.params['attributes'],
        "edge_router_attributes": module.params['edgeRouterAttributes'],
        "client_host_name": module.params['clientHostName'],
        "client_port": module.params['clientPort'],
        "server_host_name": module.params['serverHostName'],
        "server_port": module.params['serverPort'],
        "server_protocol": module.params['serverProtocol'],
        "encryption_required": module.params['encryptionRequired'],
    }

    if module.params['endpoints'] and module.params['egressRouter']:
        raise AnsibleError('You must specify one of "endpoints" (list) or "egressRouter" (str)')
    elif module.params['endpoints']:
        service_properties['egress_router_id'] = None
        service_properties['endpoints'] = module.params['endpoints']
    elif module.params['egressRouter']:
        service_properties['endpoints'] = []
        service_properties["egress_router_id"] = module.params['egressRouter']
    elif not module.params['state'] == "DELETED":
        raise AnsibleError('You must specify one of "endpoints" (list) or "egressRouter" (str)')

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
            result['message'] = network.create_service(**service_properties)
            result['changed'] = True
        elif module.params['state'] == "DELETED":
            result['changed'] = False
    elif len(found) == 1:
        service = found[0]
        if module.params['state'] == "PROVISIONED":
            try:
#                network.delete_resource(type="service",id=service['id'])
#                result['message'] = network.create_service(**service_properties)
                for key in service.keys():
                    # if there's an exact match for the existing property in service_properties then replace it
                    if utility.snake(key) in service_properties.keys():
                        service[key] = service_properties[utility.snake(key)]
                result['message'] = network.patch_resource(service)
            except Exception as e:
                raise AnsibleError('Failed to patch Service "{}". Caught exception: {}'.format(module.params['name'], to_native(e)))
#                raise AnsibleError('Failed to recreate Service "{}". Caught exception: {}'.format(module.params['name'], to_native(e)))
            else: result['changed'] = True
        elif module.params['state'] == "DELETED":
            try: network.delete_resource(type="service",id=service['id'])
            except Exception as e:
                raise AnsibleError('Failed to delete Service "{}". Caught exception: {}'.format(module.params['name'], to_native(e)))
            result['changed'] = True
    else:
        module.fail_json(msg='ERROR: "{name}" matched more than one Service. Matches: {matches}'.format(
            name=module.params['name'],
            matches=[match['name'] for match in found]
        ), **result)

    module.exit_json(**result)

def main():
    run_module()

if __name__ == '__main__':
    main()
