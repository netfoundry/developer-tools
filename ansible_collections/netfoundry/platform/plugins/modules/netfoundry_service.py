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
  - name: create Service
    netfoundry_service:
      name: "{{ item.name }}"
      state: PROVISIONED
      network: "{{ netfoundry_info.network }}"
      attributes:
      - "#workFromAnywhere"
    loop: "{{ services }}"
    when: item not in netfoundry_info.endpoints|map(attribute='name')|list

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
from os import path as path
from os import mkdir as mkdir
from pathlib import Path as PathLib

def run_module():
    # define available arguments/parameters a user can pass to the module
    module_args = dict(
        name=dict(type='str', required=True),
        attributes=dict(type='list', elements='str', required=False, default=[]),
        state=dict(type='str', required=False, default="PROVISIONED", choices=["PROVISIONED","DELETED"]),
        network=dict(type='dict', required=True)
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

    network = Network(session, networkId=module.params['network']['id'])

    serviceProperties = {
        "name": module.params['name'],
        "attributes": module.params['attributes'],
        "clientHostName": module.params['clientHostName'],
        "clientPortRange": module.params['clientPortRange'],
        "endpoints": module.params['endpoints'],
        "egressRouterId": module.params['egressRouterId'],
        "serverHostName": module.params['serverHostName'],
        "serverPortRange": module.params['serverPortRange'],
        "serverProtocol": module.params['serverProtocol'],
    }

    found = network.getResources(type="services",name=module.params['name'])
    if len(found) == 0:
        if module.params['state'] == "PROVISIONED":
            result['message'] = network.createService(serviceProperties)
            result['changed'] = True
        elif module.params['state'] == "DELETED":
            result['changed'] = False
    elif len(found) == 1:
        service = found[0]
        if module.params['state'] == "PROVISIONED":
            for key in service.keys():
                service[key] = serviceProperties[key] if key in serviceProperties.keys() else service[key]
            result['message'] = network.patchResource(service)
            result['changed'] = True
        elif module.params['state'] == "DELETED":
            try: network.deleteResource(type="service",id=service['id'])
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
