#!/usr/bin/env python3

# Copyright: (c) 2020, Kenneth Bingham <kenneth.bingham@netfoundry.io>
# GNU General Public License v3.0+ (see COPYING or https://www.gnu.org/licenses/gpl-3.0.txt)
from __future__ import (absolute_import, division, print_function)
from re import match
__metaclass__ = type

DOCUMENTATION = r'''
---
module: netfoundry_router_policy

short_description: Create, update, or delete an Router Policy

# If this is part of a collection, you need to use semantic versioning,
# i.e. the version is of the form "2.5.0" and not "2.4".
version_added: "1.6.0"

description: Create and update always have result=changed

options:
    name:
        description: the name of the Router Policy
        required: true
        type: str
    endpoints:
        description: A list of Endpoint IDs or names or Endpoint role attributes prefixed with a \#hash mark.
        required: false
        type: list
    routers:
        description: A list of Router IDs or names or Router role attributes prefixed with a \#hash mark.
        required: false
        type: list
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
# most networks require only a single, global, blanket Edge Router Policy for #all dialing Endpoints
  - name: create Router Policy
    netfoundry_router_policy:
      name: Blanket Router Policy
      network: "{{ netfoundry_info.network }}"
      endpoints:
      - "#all"
      routers:
      - "#global-hosted-routers"

# /requires netfoundry_info arg inventory=True
  - name: Delete all Router Policies
    netfoundry_router_policy:
      name: "{{ item }}"
      state: DELETED
      network: "{{ netfoundry_info.network }}"
    loop: "{{ netfoundry_info.edge_router_policies|map(attribute='name')|list }}"
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
#from uuid import UUID

def run_module():
    # define available arguments/parameters a user can pass to the module
    module_args = dict(
        name=dict(type='str', required=True),
        endpoints=dict(type='list', elements='str', required=False, default=[]),
        routers=dict(type='list', elements='str', required=False, default=[]),
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

    endpoint_names = [endpoint['name'] for endpoint in network.endpoints()]
    router_names = [router['name'] for router in network.edge_routers()]

    properties = {
        "name": module.params['name'],
        "endpoint_attributes": module.params['endpoints'],
        "edge_router_attributes": module.params['routers'],
    }

    # if not empty list then verify @mentions resolve to existing entities
    if properties["endpoint_attributes"]:
        for role in properties["endpoint_attributes"]:
            # check if @mention
            if role[0:1] == '@':
                if not role[1:] in endpoint_names:
                    raise AnsibleError('Failed to find an Endpoint named "{}".'.format(role[1:]))
    if properties["edge_router_attributes"]:
        for role in properties["edge_router_attributes"]:
            # check if @mention
            if role[0:1] == '@':
                if not role[1:] in router_names:
                    raise AnsibleError('Failed to find a Router named "{}".'.format(role[1:]))

    # find Router Policy with the specified name
    found = network.get_resources(type="edge-router-policies",name=properties['name'])
    if len(found) == 0:
        if module.params['state'] == "PROVISIONED":
            result['message'] = network.create_edge_router_policy(**properties)
            result['changed'] = True
        elif module.params['state'] == "DELETED":
            result['changed'] = False
    elif len(found) == 1:
        router_policy = found[0]
        if module.params['state'] == "PROVISIONED":
            for key in router_policy.keys():
                # if there's an exact match for the existing property in properties then replace it
                snake_key = utility.snake(camel_str=key)
                if snake_key in properties.keys():
                    router_policy[key] = properties[snake_key]
            result['message'] = network.patch_resource(router_policy)
            result['changed'] = True
        elif module.params['state'] == "DELETED":
            try: network.delete_resource(type="edge-router-policy",id=router_policy['id'])
            except Exception as e:
                raise AnsibleError('Failed to delete Router Policy"{}". Caught exception: {}'.format(module.params['name'], to_native(e)))
            result['changed'] = True
    else:
        module.fail_json(msg='ERROR: "{name}" matched more than one Router Policy'.format(name=module.params['name']), **result)

    module.exit_json(**result)

def main():
    run_module()

if __name__ == '__main__':
    main()
