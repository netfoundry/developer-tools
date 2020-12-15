#!/usr/bin/env python3

# Copyright: (c) 2020, Kenneth Bingham <kenneth.bingham@netfoundry.io>
# GNU General Public License v3.0+ (see COPYING or https://www.gnu.org/licenses/gpl-3.0.txt)
from __future__ import (absolute_import, division, print_function)
from re import match
__metaclass__ = type

DOCUMENTATION = r'''
---
module: netfoundry_appwan

short_description: Create, update, or delete an AppWAN

# If this is part of a collection, you need to use semantic versioning,
# i.e. the version is of the form "2.5.0" and not "2.4".
version_added: "1.4.0"

description: Create and update always have result=changed

options:
    name:
        description: the name of the AppWAN
        required: true
        type: str
    endpoints:
        description: A list of Endpoint IDs or names or Endpoint role attributes prefixed with a \#hash mark.
        required: false
        type: list
    services:
        description: A list of Service IDs or names or Service role attributes prefixed with a \#hash mark.
        required: false
        type: list
    state:
        description: The desired state.
        required: false
        type: str
        choices: ["PROVISIONED","DELETED"]
        default: PROVISIONED
    network:
        description: The dictionary describing the Network on which to operate from network_info.network.
        required: true
        type: dict

author:
    - Kenneth Bingham (@qrkourier)

requirements:
    - netfoundry
'''

EXAMPLES = r'''
  - name: create AppWAN
    netfoundry_appwan:
      name: Telecommuter AppWAN
      network: "{{ netfoundry_info.network }}"
      endpoints:
      - "#workFromAnywhere"
      - "@gunter-laptop1"
      services:
      - "#welcomeWagon"
      - "@internal-portal"

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
from netfoundry import Session
from netfoundry import Network
from uuid import UUID
from re import sub

def run_module():
    # define available arguments/parameters a user can pass to the module
    module_args = dict(
        name=dict(type='str', required=True),
        endpoints=dict(type='list', elements='str', required=False, default=[]),
        services=dict(type='list', elements='str', required=False, default=[]),
        posture_checks=dict(type='list', elements='str', required=False, default=[]),
        state=dict(type='str', required=False, default="PROVISIONED", choices=["PROVISIONED","DELETED"]),
        network=dict(type='dict', required=True),
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

    session = Session(
        token=module.params['network']['token']
    )

    network = Network(session, network_id=module.params['network']['id'])

    endpoint_names = [endpoint['name'] for endpoint in network.endpoints()]
    service_names = [service['name'] for service in network.services()]
    posture_names = [posture['name'] for posture in network.posture_checks()]

    properties = {
        "name": module.params['name'],
        "endpoint_attributes": module.params['endpoints'],
        "service_attributes": module.params['services'],
        "posture_check_attributes": module.params['posture_checks'],
    }

    # if not empty list then verify @mentions resolve to existing entities
    if properties["endpoint_attributes"]:
        for role in properties["endpoint_attributes"]:
            # check if @mention
            if role[0:1] == '@':
                if not role[1:] in endpoint_names:
                    raise AnsibleError('Failed to find an Endpoint named "{}".'.format(role[1:]))
    if properties["service_attributes"]:
        for role in properties["service_attributes"]:
            # check if @mention
            if role[0:1] == '@':
                if not role[1:] in service_names:
                    raise AnsibleError('Failed to find a Service named "{}".'.format(role[1:]))
    if properties["posture_check_attributes"]:
        for role in properties["posture_check_attributes"]:
            # check if @mention
            if role[0:1] == '@':
                if not role[1:] in service_names:
                    raise AnsibleError('Failed to find a Posture Check named "{}".'.format(role[1:]))

    # find AppWAN with the specified name
    found = network.get_resources(type="app-wans",name=properties['name'])
    if len(found) == 0:
        if module.params['state'] == "PROVISIONED":
            result['message'] = network.create_app_wan(**properties)
            result['changed'] = True
        elif module.params['state'] == "DELETED":
            result['changed'] = False
    elif len(found) == 1:
        appwan = found[0]
        if module.params['state'] == "PROVISIONED":
            for key in appwan.keys():
                # if there's an exact match for the existing property in properties then replace it
                if snake(key) in properties.keys():
                    appwan[key] = properties[snake(key)]
            result['message'] = network.patch_resource(appwan)
            result['changed'] = True
        elif module.params['state'] == "DELETED":
            try: network.delete_resource(type="app-wan",id=appwan['id'])
            except Exception as e:
                raise AnsibleError('Failed to delete Service "{}". Caught exception: {}'.format(module.params['name'], to_native(e)))
            result['changed'] = True
    else:
        module.fail_json(msg='ERROR: "{name}" matched more than one Service'.format(name=module.params['name']), **result)

    module.exit_json(**result)

def main():
    run_module()

def camel(snake_str):
    first, *others = snake_str.split('_')
    return ''.join([first.lower(), *map(str.title, others)])

def snake(camel_str):
    return sub(r'(?<!^)(?=[A-Z])', '_', camel_str).lower()

if __name__ == '__main__':
    main()
