#!/usr/bin/env python3

# Copyright: (c) 2020, Kenneth Bingham <kenneth.bingham@netfoundry.io>
# GNU General Public License v3.0+ (see COPYING or https://www.gnu.org/licenses/gpl-3.0.txt)
from __future__ import (absolute_import, division, print_function)
from re import match
__metaclass__ = type

DOCUMENTATION = r'''
---
module: netfoundry_endpoint

short_description: Create, update, or delete an Endpoint

# If this is part of a collection, you need to use semantic versioning,
# i.e. the version is of the form "2.5.0" and not "2.4".
version_added: "1.1.0"

description: Create and update always have result=changed

options:
    name:
        description: The name of the Endpoint.
        required: true
        type: str
    attributes:
        description: A list of Endpoint role attributes prefixed with a \#hash mark.
        required: false
        type: list
    dest:
        description: Path to directory or file named like *.jwt in which to save the enrollment one-time-token JWT. If a directory is specified then it will be created if necessary and the filename will be that of the Endpoint, including whitespace, and must have filename suffix *.jwt.
        required: false
        type: path
    sessionIdentity:
        description: UUID of an identity that must maintain a concurrent web console session in order for this Endpoint to remain active
        required: false
        type: str
    state:
        description: The desired state.
        required: false
        type: str
        choices: ["PROVISIONED","DELETED"]
        default: PROVISIONED
    network:
        description: The dictionary describing the Network on which to operate from netfoundry_info.network.
        required: true
        type: dict

author:
    - Kenneth Bingham (@qrkourier)

requirements:
    - netfoundry
'''

EXAMPLES = r'''
  - name: create Endpoint
    netfoundry_endpoint:
      name: "{{ item }}"
      state: PROVISIONED
      network: "{{ netfoundry_info.network }}"
      attributes:
      - "#workFromAnywhere"
      dest: /tmp/ott  # directory in which to save {{ item }}.jwt
    loop: "{{ endpointNames }}"
    when: item not in netfoundry_info.endpoints|map(attribute='name')|list

  - name: Delete all Endpoints
    netfoundry_endpoint:
      name: "{{ item }}"
      state: DELETED
      network: "{{ netfoundry_info.network }}"
    loop: "{{ netfoundry_info.endpoints|map(attribute='name')|list }}"
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
from os import path as Path
from os import mkdir as mkdir
from pathlib import Path as PathLib
from uuid import UUID

def run_module():
    # define available arguments/parameters a user can pass to the module
    module_args = dict(
        name=dict(type='str', required=True),
        attributes=dict(type='list', elements='str', required=False, default=[]),
        state=dict(type='str', required=False, default="PROVISIONED", choices=["PROVISIONED","DELETED"]),
        dest=dict(type='path', required=False, default=None),
        sessionIdentity=dict(type='str', required=False, default=None),
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

    # check if UUIDv4
    try: UUID(module.params['name'], version=4)
    except ValueError:
        # else assume is an Endpoint
        found = network.get_resources(type="endpoints",name=module.params['name'])
    # it's a UUID and so we assign the property directly
    else: 
        found = [network.get_resource(type="endpoint",id=module.params['name'])]

    if len(found) == 0:
        if module.params['state'] == "PROVISIONED":
            result['message'] = network.create_endpoint(name=module.params['name'], attributes=module.params['attributes'], session_identity=module.params['sessionIdentity'], wait=33, sleep=10)
            result['changed'] = True
            if 'jwt' in result['message'].keys() and result['message']['jwt'] and module.params['dest']:
                save_one_time_token(name=result['message']['name'], jwt=result['message']['jwt'], dest=module.params['dest'])
            elif module.params['dest']:
                raise AnsibleError('ERROR: missing enrollment token in response to create endpoint {:s}, got response: {}'.format(module.params['name'], result['message']))
        elif module.params['state'] == "DELETED":
            result['changed'] = False
    elif len(found) == 1:
        endpoint = found[0]
        if module.params['state'] == "PROVISIONED":
            endpoint['attributes'] = module.params['attributes']
            result['message'] = network.patch_resource(endpoint)
            result['changed'] = True
            if result['message']['jwt'] and module.params['dest']:
                save_one_time_token(name=result['message']['name'], jwt=result['message']['jwt'], dest=module.params['dest'])
        elif module.params['state'] == "DELETED":
            try: network.delete_resource(type="endpoint",id=endpoint['id'])
            except Exception as e:
                raise AnsibleError('Failed to delete Endpoint "{}". Caught exception: {}'.format(module.params['name'], to_native(e)))
            result['changed'] = True
    else:
        module.fail_json(msg='ERROR: "{name}" matched more than one Endpoint'.format(name=module.params['name']), **result)

    module.exit_json(**result)

def save_one_time_token(name, jwt, dest):
    # is a filename if *.jwt
    if dest[-4:] == ".jwt":
        # use current directory if only a filename is specified
        if not Path.dirname(dest):
            dest_dir = str(PathLib.cwd())
        else:
            dest_dir = Path.dirname(dest)
        dest_file = Path.basename(dest)
    # is a directory
    else:
        dest_file = name+'.jwt'
        dest_dir = dest
    if not Path.exists(dest_dir):
        try: mkdir(dest_dir)
        except Exception as e:
            raise AnsibleError('Failed to create the directory "{}". Caught exception: {}'.format(dest_dir, to_native(e)))
    handle = open(dest_dir+'/'+dest_file, "wt")
    handle.write(jwt)
    handle.close()

def main():
    run_module()


if __name__ == '__main__':
    main()
