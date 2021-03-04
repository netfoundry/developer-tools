#!/usr/bin/python

# Copyright: (c) 2021, Kenneth Bingham <kenneth.bingham@netfoundry.io>
# GNU General Public License v3.0+ (see COPYING or https://www.gnu.org/licenses/gpl-3.0.txt)
from __future__ import (absolute_import, division, print_function)
__metaclass__ = type

DOCUMENTATION = r'''
---
module: netfoundry_network

short_description: Create or delete a NetFoundry Network

version_added: "1.8.0"

description: Create or delete a NetFoundry Network with an API account. 
 Unlike the read-only module netfoundry_info, this module will not perform expensive inventory of the Network's resources.
 This module will only create, confirm, or delete the Network itself.

options:
    network:
        description: The name of the Network to use.
        required: true
        type: str
    network_group:
        description: The dictionary describing the session on which to operate from netfoundry_info.network_group.
        required: true
        type: dict
    datacenter:
        description: provision the Controller in a NetFoundry datacenter by locationCode or ID from netfoundry_info.data_centers
        required: false
        type: str
    state:
        description: The desired state.
        required: false
        type: str
        choices: ["PROVISIONING", "PROVISIONED","DELETING","DELETED"]
        default: PROVISIONED
    size:
        description: The compute and bandwidth instance size.
        required: false
        type: str
        choices: ["small","medium","large"]
        default: small
    wait:
        description: seconds to wait for specified status (see async example)
        required: false
        type: int
        default: 600
author:
    - Kenneth Bingham (@qrkourier)

requirements:
    - netfoundry
'''

EXAMPLES = r'''
- name: start a one-hour session for the default Organization and default Network Group
  netfoundry.platform.netfoundry_info:
    credentials: credentials.json
  register: netfoundry_organization

- name: Create the Network
  netfoundry.platform.netfoundry_network:
    network: BibbidiBobbidiBoo
    datacenter: eu-west-2 # most AWS regions are valid values
    network_group: "{{ netfoundry_organization.network_group }}
  register: netfoundry_network

- name: Start deleting the Network
  netfoundry.platform.netfoundry_network:
    network: BibbidiBobbidiBoo
    state: DELETING
    wait: 30 # default is 1200s
    network_group: "{{ netfoundry_organization.network_group }}

- name: Wait up to 20 minutes for the Network to be completely deleted
  netfoundry.platform.netfoundry_network:
    network: BibbidiBobbidiBoo
    state: DELETED
    network_group: "{{ netfoundry_organization.network_group }}

'''

RETURN = r'''
# These are examples of possible return values, and in general should use other names for return values.
original_message:
    description: The original name param that was passed in.
    type: str
    returned: always
    sample: 'BibbidiBobbidiBoo'
message:
    description: The output message that the module generates.
    type: str
    returned: always
'''

from ansible.module_utils.basic import AnsibleModule
from ansible.module_utils.api import rate_limit_argument_spec, retry_argument_spec
from ansible.module_utils._text import to_native
from ansible.errors import AnsibleError
from netfoundry import Session
from netfoundry import Utility
from netfoundry import Organization
from netfoundry import NetworkGroup
#from netfoundry import Network
from uuid import UUID

def run_module():
    # define available arguments/parameters a user can pass to the module
    module_args = dict(
        network=dict(type='str', required=True),
        network_group=dict(type='dict', required=True),
        datacenter=dict(type='str', required=False),
        state=dict(type='str', required=False, default="PROVISIONED", choices=["PROVISIONING", "PROVISIONED", "DELETING", "DELETED"]),
        size=dict(type='str', required=False, default="small", choices=["small","medium","large"]),
        wait=dict(type='int', required=False, default=1200),
        proxy=dict(type='str', required=False)
    )

    # seed the result dict in the object
    # we primarily care about changed and state
    # changed is if this module effectively modified the target
    # state will include any data that you want your module to pass back
    # for consumption, for example, in a subsequent task
    result = dict(
        changed=False,
        original_message='',
        message='',
        my_useful_info={},
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
    result['original_message'] = module.params

    session = Session(
        token=module.params['network_group']['token'],
        proxy=module.params['proxy']
    )
    # yields a list of Network Groups in Organization.networkGroups[], but there's typically only one group
    organization = Organization(session)

    network_group = NetworkGroup(
        organization,
        network_group_id=module.params['network_group']['id']
    )

    # instantiate some utility methods like snake(), camel() for translating styles
    utility = Utility()


    # these properties will be style translated from snake to lower camel as API properties when patching an existing resource
    properties = {
        "name": module.params['network'],
        "size": module.params['size']
    }

    # if datacenter arg is given we need to know if the string is a UUID (datacenter ID) or the name of
    # a datacenter (location code e.g. eu-west-2)
    if module.params['datacenter']:
        datacenter = module.params['datacenter']
        # check if UUIDv4
        try: UUID(datacenter, version=4)
        except ValueError:
            # else assume is a location code and validate
            if datacenter in network_group.nc_data_centers_by_location.keys():
                properties['location'] = datacenter
            else:
                raise AnsibleError('Failed to find an exact match for datacenter location code "{}".'.format(datacenter))
        else: 
            # it's a UUID and so we reverse lookup the datacenter name by the UUID
            properties['location'] = next(location for location, uuid in network_group.nc_data_centers_by_location if uuid == module.params['datacenter']) 

    # find any existing Network with the specified name
    networks = network_group.get_networks_by_group(network_group_id=module.params['network_group']['id'])
    found = [net for net in networks if net['name'] == module.params['name']]
    if len(found) == 0:
        if module.params['state'] in ["PROVISIONING", "PROVISIONED"]:
            try: result['message'] = network_group.create_network(**properties)
            except Exception as e:
                raise AnsibleError('Failed to create Network "{}". Caught exception: {}'.format(module.params['name'], to_native(e)))
            result['changed'] = True
        elif module.params['state'] == "DELETED":
            result['changed'] = False
    elif len(found) == 1:
        network = found[0]
        if module.params['state'] in ["PROVISIONING", "PROVISIONED"]:
            # TODO: sanity check datacenter IDs when top-level Network property locationCode is available
            # if module.params['datacenter']:
            #     if not network['dataCenterId'] == properties['data_center_id']:
            #         raise AnsibleError('ERROR: existing Router is hosted in NF datacenter ID {:s}, but new datacenter ID is {:s}. Hosted Routers may not be re-located.'.format(
            #             network['dataCenterId'], 
            #             properties['data_center_id']
            #         ))
            for key in network.keys():
                # if there's an exact match for a declared property in the found Network then it's an error if the values are not identical because they can't be changed
                if utility.snake(key) in properties.keys():
                    if not network[key] == properties[utility.snake(key)]:
                        raise AnsibleError('Declared property "{}: {}" does not match found Network "{}".'.format(
                            utility.snake(key),
                            properties[utility.snake(key)],
                            module.params['name']))
        elif module.params['state'] in ["DELETING", "DELETED"]:
            try: result['message'] = network_group.delete_network(network_id=network['id'])
            except Exception as e:
                raise AnsibleError('Failed to delete Network "{}". Caught exception: {}'.format(module.params['name'], to_native(e)))
            result['changed'] = True
    else:
        module.fail_json(msg='ERROR: "{name}" matched more than one Network'.format(name=module.params['name']), **result)

    if module.params['wait'] > 0:
        network_id = result['message']['id']
        # if waiting for status then wait or timeout
        if module.params['state'] == "DELETED":
                try: network.wait_for_status(module.params['state'], id=network_id, type="network", wait=module.params['wait'], progress=False)
                except Exception as e:
                    raise AnsibleError('Timed out waiting for status "{}"'.format(module.params['state']))
        elif module.params['state'] == "PROVISIONING":
                try: network.wait_for_statuses(["PROVISIONING", "PROVISIONED"], id=network_id, type="network", wait=module.params['wait'], progress=False)
                except Exception as e:
                    raise AnsibleError('Timed out waiting for status "{}"'.format(module.params['state']))
        elif module.params['state'] == "PROVISIONED":
                try: network.wait_for_status(module.params['state'], id=network_id, type="network", wait=module.params['wait'], progress=False)
                except Exception as e:
                    raise AnsibleError('Timed out waiting for status "{}"'.format(module.params['state']))
        # REGISTERED implies PROVISIONED and additionally requires the value of JWT to be null, indicating enrollment
        elif module.params['state'] == "REGISTERED":
            wait_until = time()+module.params['wait']
            try: network.wait_for_status("PROVISIONED", id=network_id, type="network", wait=module.params['wait'], progress=False)
            except Exception as e:
                raise AnsibleError('Timed out waiting for status "{}"'.format(module.params['state']))
            else:
                network = network.get_resource(type="network",id=network_id)
    #            import epdb; epdb.serve()
                while time() < wait_until and network['jwt'] is not None:
                    network = network.get_resource(type="network",id=network_id)
                    sleep(10)
                if network['jwt'] is not None:
                    raise AnsibleError('Timed out waiting for status "{}"'.format(module.params['state']))
    
    # in the event of a successful module execution, you will want to
    # simple AnsibleModule.exit_json(), passing the key/value results
    module.exit_json(**result)


def main():
    run_module()


if __name__ == '__main__':
    main()
