#!/usr/bin/python

# Copyright: (c) 2020, Kenneth Bingham <kenneth.bingham@netfoundry.io>
# GNU General Public License v3.0+ (see COPYING or https://www.gnu.org/licenses/gpl-3.0.txt)
from __future__ import (absolute_import, division, print_function)
__metaclass__ = type

DOCUMENTATION = r'''
---
module: netfoundry_info

short_description: Describe a NetFoundry Network

version_added: "1.0.0"

description: Discover NetFoundry Network resources with an API account

options:
    networkName:
        description: The name of the Network to describe.
        required: true
        type: str
    credentials:
        description: Path to API account credentials JSON file relative to playbook directory.
        required: true
        type: path
    networkGroupId:
        description: Network Group UUID. Only necessary if there is more than one, which is unusual.
        required: false
        type: str

author:
    - Kenneth Bingham (@qrkourier)

requirements:
    - netfoundry
'''

EXAMPLES = r'''
# Pass in a message
- name: discover resources in the Network
  qrkourier.netfoundry.netfoundry_info:
    networkName: BibbidiBobbidiBoo
    credentials: credentials.json
  register: network_info

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
from ansible.module_utils._text import to_native
from netfoundry import Session
from netfoundry import Organization
from netfoundry import NetworkGroup
from netfoundry import Network


def run_module():
    # define available arguments/parameters a user can pass to the module
    module_args = dict(
        network=dict(type='str', required=True),
        credentials=dict(type='path', required=False),
        networkGroupId=dict(type='str', required=False),
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
        credentials=module.params['credentials'] if module.params['credentials'] is not None else None
    )
    # yields a list of Network Groups in Organization.networkGroups[], but there's typically only one group
    organization = Organization(session)

    # use the default Network Group (the first Network Group ID known to the Organization)
    network_group = NetworkGroup(
        organization,
        networkGroupId=module.params['networkGroupId'] if module.params['networkGroupId'] is not None else None,
    )

    network = Network(session, networkName=module.params['network'])

#    result['token'] = session.token
#    result['network_groups'] = organization.networkGroups
    result['console'] = network_group.nfconsole
    # merge the session object to top-level resources on which we will perform
    #  operations so that only a single parameter is necessary when calling
    #  subsequent modules e.g. netfoundry_endpoint
    result['organization'] = {**organization.describe, **{"token": session.token}}
    result['network_group'] = {**network_group.describe, **{"token": session.token}}
    result['network'] = {**network.describe, **{"token": session.token}}
    result['endpoints'] = network.endpoints()
    result['edge_routers'] = network.edgeRouters()
    result['services'] = network.services()
    result['edge_router_policies'] = network.edgeRouterPolicies()
    result['app_wans'] = network.appWans()
    
    # in the event of a successful module execution, you will want to
    # simple AnsibleModule.exit_json(), passing the key/value results
    module.exit_json(**result)


def main():
    run_module()


if __name__ == '__main__':
    main()
