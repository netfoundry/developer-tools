#!/usr/bin/python

# Copyright: (c) 2020, Kenneth Bingham <kenneth.bingham@netfoundry.io>
# GNU General Public License v3.0+ (see COPYING or https://www.gnu.org/licenses/gpl-3.0.txt)
from __future__ import (absolute_import, division, print_function)
__metaclass__ = type

DOCUMENTATION = r'''
---
module: netfoundry_info

short_description: Use or describe a NetFoundry Network

version_added: "1.0.0"

description: Discover NetFoundry Network resources with an API account

options:
    network:
        description: The name or UUID of the Network to use or describe.
        required: true
        type: str
    credentials:
        description: Path to API account credentials JSON file relative to playbook directory. Overrides default environment variables and file paths described in https://developer.netfoundry.io/guides/authentication/
        required: false
        type: path
    token:
        description: providing a session token i.e. bearer token (JWT) is time efficient and will be renewed if expiry is imminent and credentials are supplied
        required: false
        type: str
    inventory:
        description: optionally, perform expensive operations to describe all resources
        required: false
        default: false
        type: bool

author:
    - Kenneth Bingham (@qrkourier)

requirements:
    - netfoundry
'''

EXAMPLES = r'''
- name: start a one-hour session for a Network
  netfoundry.platform.netfoundry_info:
    network: BibbidiBobbidiBoo
    credentials: credentials.json
  register: netfoundry_session

- name: re-use the session token, but take the time to discover resources in a Network with "inventory"
  netfoundry.platform.netfoundry_info:
    network: "{{ netfoundry_session.network.id }}"
    inventory: True
    token: "{{ network_session.token }}"
  register: network_inventory

- name: renew a session if expiring soon
  netfoundry.platform.netfoundry_info:
    network: BibbidiBobbidiBoo
    token: "{{ netfoundry_session.token }}"
    credentials: credentials.json
  register: netfoundry_session

'''

RETURN = r'''
# These are examples of possible return values, and in general should use other names for return values.
original_message:
    description: The original name param that was passed in.
    type: str
    returned: always
    sample: 'BibbidiBobbidiBoo'
message:
    description: The output message that the test module generates.
    type: str
    returned: always
    sample: 'goodbye'
netfoundry_info:
    description: The dictionary containing information about your Network.
    type: dict
    returned: always
    sample: {
        'foo': 'bar',
        'answer': 42,
    }
'''

from ansible.module_utils.basic import AnsibleModule
from ansible.module_utils.api import rate_limit_argument_spec, retry_argument_spec
from ansible.errors import AnsibleError
#from ansible.module_utils._text import to_native
from netfoundry import Session
from netfoundry import Organization
from netfoundry import NetworkGroup
from netfoundry import Network
from uuid import UUID

def run_module():
    # define available arguments/parameters a user can pass to the module
    module_args = dict(
        network=dict(type='str', required=True),
        credentials=dict(type='path', required=False),
        token=dict(type='str', required=False),
        inventory=dict(type='bool', required=False, default=False),
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
        credentials=module.params['credentials'] if module.params['credentials'] is not None else None,
        token=module.params['token'] if module.params['token'] is not None else None,
        proxy=module.params['proxy']
    )

    network_id = None
    network_name = None
    # assign network_id if UUIDv4 else network_name
    try: UUID(module.params['network'], version=4)
    except ValueError: network_name = module.params['network']
    else: network_id = module.params['network']

    network = Network(
        session, 
        network_id=network_id if network_id else None,
        network_name=network_name if network_name else None,
    )

    result['network'] = {
        **network.describe, 
        **{
            "token": session.token,
            "proxy": module.params['proxy']
        }
    }

    if module.params['inventory']:
        # optionally perform expensive inventory operations
        result['endpoints'] = network.endpoints()
        result['services'] = network.services()
        result['hosted_edge_routers'] = network.edge_routers(only_hosted=True)
        result['customer_edge_routers'] = network.edge_routers(only_customer=True)
        result['edge_router_policies'] = network.edge_router_policies()
        result['app_wans'] = network.app_wans()
        result['data_centers'] = network.get_edge_router_data_centers()

        # yields a list of Network Groups in Organization.networkGroups[], but there's typically only one group
        organization = Organization(session)
        # use the default Network Group (the first Network Group ID known to the Organization)
        network_group = NetworkGroup(organization, network_group_id=network.network_group_id)
        result['console'] = network_group.nfconsole
        # merge the session object to top-level resources on which we will perform
        #  operations so that only a single parameter is necessary when calling
        #  subsequent modules e.g. netfoundry_endpoint
        result['organization'] = {**organization.describe, **{"token": session.token}}
        result['network_group'] = {**network_group.describe, **{"token": session.token}}
    
    # in the event of a successful module execution, you will want to
    # simple AnsibleModule.exit_json(), passing the key/value results
    module.exit_json(**result)


def main():
    run_module()


if __name__ == '__main__':
    main()
