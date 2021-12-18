#!/usr/bin/env python3

# Copyright: (c) 2021, Kenneth Bingham <kenneth.bingham@netfoundry.io>
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
module: netfoundry_service_raw

short_description: Create or update a service by supplying a data structure with the same schema used by the API.

# If this is part of a collection, you need to use semantic versioning,
# i.e. the version is of the form "2.5.0" and not "2.4".
version_added: "1.15.0"

description: This is a raw, pass-through interface to do POST (create), PUT (full update), or DELETE on a service entity. Summary of logic: if state is "present" (the default) then always update if id is defined, else if name is defined then create the service. If state is "absent" then lookup by id or name.

options:
    state:
        description: The desired state.
        required: false
        type: str
        choices: ["present", "absent"]
        default: present
    object:
        description: the data structure declaring the desired service state
        required: true
        type: dict
    network:
        description: The dictionary describing the Network on which to operate from netfoundry_info.network.
        required: true
        type: dict
    wait:
        description: seconds to wait for async create or update
        required: false
        type: int
        default: 66

author:
    - Kenneth Bingham (@qrkourier)

requirements:
    - netfoundry
'''

EXAMPLES = r'''
  - Create or update a service with the object schema from the API
    netfoundry_service_raw:
        network: "{{ netfoundry_info.network }}"
        state: present
        object:
            name: iperf server 123
            encryptionRequired: true
            attributes:
                - '#cyan_services'
            modelType: AdvancedTunnelerToEndpoint
            model:
                clientIngress:
                protocols:
                    - tcp
                    - udp
                addresses:
                    - iperf-endpoint.acmetest123.netfoundry
                    - 100.128.0.1
                ports:
                    -   low: 5201
                        high: 5202
                serverEgress:
                forwardProtocol: true
                allowedProtocols:
                    - tcp
                    - udp
                host: iperf
                port: 5201
            bindEndpointAttributes:
                - '@Exit123'
            edgeRouterAttributes:
                - '#all'

  # if exists select by id and delete, else success
  - Delete a service with the object schema from the API
    netfoundry_service_raw:
        network: "{{ netfoundry_info.network }}"
        state: absent
        object:
            id: d8aa55c3-e86e-4a25-bb5e-9f1216faf49b

  # if exists select by name and delete, else success
  - Delete a service with the object schema from the API
    netfoundry_service_raw:
        network: "{{ netfoundry_info.network }}"
        state: absent
        object:
            name: iperf server 123
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
#from netfoundry.utility import Utility
from uuid import UUID
#from time import sleep

def run_module():
    # define available arguments/parameters a user can pass to the module
    module_args = dict(
        object=dict(type='dict', required=True),
        state=dict(type='str', required=False, default="present", choices=["present", "absent"]),
        network=dict(type='dict', required=True),
        wait=dict(type='int', required=False, default=66),
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

    service_object = module.params['object']

    if 'id' in service_object.keys():
        # check if UUIDv4
        try: UUID(service_object['id'], version=4)
        except ValueError as e:
            raise AnsibleError('Failed to parse UUIDv4 "{}". Caught exception: {}'.format(service_object['id'], to_native(e)))
        else:
            found = [network.get_resource(type="service",id=service_object['id'])]
    elif 'name' in service_object.keys():
        found = network.get_resources(type="services",name=service_object['name'])
    else: 
        raise AnsibleError('Failed to find required field id or name in supplied service object "{}".'.format(service_object))

    if len(found) == 0:
        if module.params['state'] == "present":
                result['message'] = network.create_resource(type="service", properties=service_object, wait=module.params['wait'])
                result['changed'] = True
        elif module.params['state'] == "absent":
            result['changed'] = False
    elif len(found) == 1:
        found_service = found[0]
        if module.params['state'] == "present":
            try:
                result['message'] = network.put_resource(
                    put=service_object, 
                    type="service", 
                    id=found_service['id'],
                    wait=module.params['wait'])
            except Exception as e:
                raise AnsibleError('Failed to patch service "{}". Caught exception: {}'.format(module.params['name'], to_native(e)))
            else: result['changed'] = True
        elif module.params['state'] == "absent":
            try: network.delete_service(id=found_service['id'])
            except Exception as e:
                raise AnsibleError('Failed to delete service "{}". Caught exception: {}'.format(module.params['name'], to_native(e)))
            else: result['changed'] = True
    else:
        module.fail_json(msg='ERROR: "{name}" matched more than one service'.format(name=service_object['name']), **result)

    module.exit_json(**result)

def main():
    run_module()

if __name__ == '__main__':
    main()
