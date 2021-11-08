#!/usr/bin/env python3

# Copyright: (c) 2020, Kenneth Bingham <kenneth.bingham@netfoundry.io>
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
module: netfoundry_router

short_description: Create, update, or delete an edge router

# If this is part of a collection, you need to use semantic versioning,
# i.e. the version is of the form "2.5.0" and not "2.4".
version_added: "1.5.0"

description: Create and update always have result=changed

options:
    name:
        description: the name of the edge router
        required: true
        type: str
    attributes:
        description: A list of role attributes prefixed with a \#hash mark.
        required: false
        type: list
    datacenter:
        description: provision the router in a NetFoundry datacenter by locationCode or ID from netfoundry_info.data_centers (default provider is AWS)
        required: false
        type: str
    provider:
        description: limit potential datacenter name matches to the specified cloud provider
        required: false
        type: str
        choices: ["AWS", "AZURE", "GCP", "OCP"]
        default: AWS
    linkListener:
        description: listen for router links on 80/tcp; all hosted routers (non-null dataCenter) have link listeners
        type: bool
        required: false
        default: false
    tunnelerEnabled:
        description: enable tunneler intercept and hosting features for this router
        type: bool
        required: false
        default: false
    rotateKey:
        description: rotate and return the new key for registration of a NetFoundry Linux VM; requires state=present and null dataCenter i.e. NA to NF-hosted routers
        type: bool
        required: false
        default: false
    state:
        description: The desired state
        required: false
        type: str
        choices: ["present","absent"]
        default: present
    network:
        description: The dictionary describing the Network on which to operate from netfoundry_info.network.
        required: true
        type: dict
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

    # georegion:
    #     description: provision the router in a NetFoundry datacenter by major geographic region
    #     required: false
    #     type: str
    #     choices: ["Americas","EuropeMiddleEastAfrica","AsiaPacific"]

EXAMPLES = r'''
# Hosted routers listen on an internet IP for Endpoints and other routers to
#  form North-South / branch-to-datacenter links and are configured by matching an
#  edge router policy.
  - name: create and wait ten minutes for provisioning of a hosted edge router in a particular Azure region
    netfoundry_router:
        name: Hosted router for Azure "East US 2"
        datacenter: eastus2
        provider: AZURE
        network: "{{ netfoundry_info.network }}"
        attributes:
        - "#global_hosted_routers"

# customer routers may host Services and are typically deployed by running and
#  registering the NetFoundry VM
  - name: create customer edge router
    netfoundry_router:
        name: On-premises VM for the Frankfurt branch
        network: "{{ netfoundry_info.network }}"
        attributes:
        - "#frankfurt_terminus_routers

# state: PROVISIONED (default)
  - name: Delete all customer edge routers
    netfoundry_router:
        name: "{{ item }}"
        state: absent
        network: "{{ netfoundry_info.network }}"
    loop: "{{ netfoundry_info.customer_edge_routers|map(attribute='name')|list }}"

  - name: Delete all hosted edge routers
    netfoundry_router:
        name: "{{ item }}"
        state: absent
        network: "{{ netfoundry_info.network }}"
    loop: "{{ netfoundry_info.hosted_edge_routers|map(attribute='name')|list }}"
'''

#   - name: create hosted edge router near EU in any available cloud provider
#     netfoundry_router:
#         name: EU Hosted router
#         georegion: EuropeMiddleEastAfrica
#         network: "{{ netfoundry_info.network }}"
#         attributes:
#         - "#global_hosted_routers"

#   - name: create hosted edge router near US in AWS
#     netfoundry_router:
#         name: US Hosted router
#         georegion: Americas
#         provider: AWS
#         network: "{{ netfoundry_info.network }}"
#         attributes:
#         - "#global_hosted_routers"


# # customer routers may have a public link listener; 
# # link listeners are typically provided only by NetFoundry-hosted routers
#   - name: create a public customer-hosted edge router
#     netfoundry_router:
#         name: On-premises DMZ router for the Frankfurt Datacenter
#         network: "{{ netfoundry_info.network }}"
#         linkListener: True
#         attributes:
#         - "#frankfurt_edge_routers"

RETURN = r'''
# These are examples of possible return values, and in general should use other
#  names for return values.
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
from netfoundry.utility import Utility
from uuid import UUID
from time import time, sleep

def run_module():
    # define available arguments/parameters a user can pass to the module
    module_args = dict(
        name=dict(type='str', required=True),
        attributes=dict(type='list', elements='str', required=False, default=[]),
#        georegion=dict(type='str', required=False),
        provider=dict(type='str', required=False, default="AWS", choices=["AWS", "AZURE", "GCP", "OCP"]),
        datacenter=dict(type='str', required=False),
        state=dict(type='str', required=False, default="present", choices=["present","absent"]),
        network=dict(type='dict', required=True),
        linkListener=dict(type='bool', required=False, default=False),
        rotateKey=dict(type='bool', required=False, default=False),
        tunnelerEnabled=dict(type='bool', required=False, default=False),
        wait=dict(type='int', required=False, default=600),
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

    if module.params['state'] in ["PROVISIONING", "PROVISIONED", "REGISTERED", "present"]:
        state = "present"
    elif module.params['state'] in ["DELETED", "absent"]:
        state = "absent"

    # these properties will be style translated from snake to lower camel as API properties when patching an existing resource
    properties = {
        "name": module.params['name'],
        "attributes": module.params['attributes'],
        "tunneler_enabled": module.params['tunnelerEnabled'],
        "link_listener": module.params['linkListener']
    }

    # if datacenter arg is given this is a NF-datacenter-hosted edge router and
    # we need to know if the string is a UUID (datacenter ID) or the name of
    # a datacenter location (location code)
    if module.params['datacenter']:
        datacenter = module.params['datacenter']
        provider = module.params['provider']
        # all hosted routers have a link listener
        if not properties['link_listener']:
            properties['link_listener'] = True
        # check if UUIDv4
        try: UUID(datacenter, version=4)
        except ValueError:
            # else assume is a location code and resolve to ID
            try:
                if 'data_centers' in module.params['network']:
                    provider_data_centers = [dc for dc in module.params['network']['data_centers'] if dc['provider'] == provider]
                else:
                    # else try to find the matching name+provider pair in the API
                    provider_data_centers = network.get_edge_router_data_centers(provider=provider)

                # try to find a matching datacenter name (locationCode) and provider pair if the datacenter inventory was included with the network param
                dc_matches = [dc for dc in provider_data_centers if dc['locationCode'] == datacenter]
                properties['data_center_id'] = dc_matches[0]['id']
            except Exception as e:
                raise AnsibleError(
                    'Failed to find exactly one datacenter "{datacenter}". Caught exception: {exception}. Valid datacenter names for {provider} are "{provider_data_centers}"'.format(
                        datacenter=datacenter,
                        provider=provider, 
                        exception=to_native(e),
                        provider_data_centers=[dc['locationCode'] for dc in provider_data_centers],
                    ))
        # it's a UUID and so we assign the property directly
        else: properties['data_center_id'] = datacenter

    # find any router with the specified name
    found = network.get_resources(type="edge-routers",name=properties['name'])
    if len(found) == 0:
        if state == "present":
            try:
                result['message'] = network.create_edge_router(**properties,wait=module.params['wait'])
            except Exception as e:
                raise AnsibleError('Failed to create edge router "{}". Caught exception: {}'.format(module.params['name'], to_native(e)))
            result['changed'] = True
        elif state == "absent":
            result['changed'] = False
            module.exit_json(**result)
    elif len(found) == 1:
        router = found[0]
        if state == "present":
            # sanity check datacenter IDs
            if module.params['datacenter']:
                if not router['dataCenterId']:
                    if router['status'] == "PROVISIONING":
                        raise Warning('WARN: existing router is still PROVISIONING and does not yet have a data center ID, and so a datacenter ID may not be assigned.')
                    else:
                        raise AnsibleError('ERROR: existing router does not have a data center ID and is presumed customer-hosted, and so a datacenter ID may not be assigned.')
                elif not router['dataCenterId'] == properties['data_center_id']:
                    raise AnsibleError('ERROR: existing router is hosted in NF datacenter ID {:s}, but new datacenter ID is {:s}. Hosted routers may not be re-located.'.format(
                        router['dataCenterId'],
                        properties['data_center_id']
                    ))
            for key in router.keys():
                # if there's an exact match for the existing property in
                # our override properties then replace it before patching
                snake_key = utility.snake(camel_str=key)
                if snake_key in properties.keys():
                    router[key] = properties[snake_key]
            try: result['message'] = network.patch_resource(router)
            except Exception as e:
                raise AnsibleError('Failed to update edge router "{}". Caught exception: {}'.format(module.params['name'], to_native(e)))
            result['changed'] = True
        elif state == "absent":
            try: result['message'] = network.delete_edge_router(id=router['id'],wait=module.params['wait'])
            except Exception as e:
                raise AnsibleError('Failed to delete edge router "{}". Caught exception: {}'.format(module.params['name'], to_native(e)))
            else:
                result['changed'] = True
                module.exit_json(**result)

    else:
        module.fail_json(msg='ERROR: "{name}" matched more than one edge router'.format(name=module.params['name']), **result)

    if module.params['wait'] > 0:
        router_id = result['message']['id']
        if state == "present":
            if module.params['rotateKey'] and not module.params['datacenter']:
                try:
                    registrationInfo = network.rotate_edge_router_registration(id=router_id)
                    result['message']['registrationKey'] = registrationInfo['registrationKey']
                except Exception as e:
                    raise AnsibleError('ERROR: failed to rotate and return registration key for router ID "{}"'.format(router_id))

    module.exit_json(**result)

def main():
    run_module()

if __name__ == '__main__':
    main()
