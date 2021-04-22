#!/usr/bin/env python3

# Copyright: (c) 2020, Kenneth Bingham <kenneth.bingham@netfoundry.io>
# GNU General Public License v3.0+ (see COPYING or https://www.gnu.org/licenses/gpl-3.0.txt)
from __future__ import (absolute_import, division, print_function)
from re import match
__metaclass__ = type

DOCUMENTATION = r'''
---
module: netfoundry_router

short_description: Create, update, or delete an Edge Router

# If this is part of a collection, you need to use semantic versioning,
# i.e. the version is of the form "2.5.0" and not "2.4".
version_added: "1.5.0"

description: Create and update always have result=changed

options:
    name:
        description: the name of the Edge Router
        required: true
        type: str
    attributes:
        description: A list of role attributes prefixed with a \#hash mark.
        required: false
        type: list
    datacenter:
        description: provision the router in a NetFoundry datacenter by locationCode or ID from netfoundry_info.data_centers
        required: false
        type: str
    provider:
        description: limit potential datacenter name matches to the specified cloud provider
        required: false
        type: str
        choices: ["AWS", "AZURE", "GCP", "ALICLOUD", "NETFOUNDRY", "OCP"]
    state:
        description: The desired state.
        required: false
        type: str
        choices: ["PROVISIONING", "PROVISIONED","REGISTERED", "DELETED"]
        default: PROVISIONED
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

    # linkListener:
    #     description: listen for Router links on 80/tcp; this is not typical for customer Routers; all hosted Routers have link listeners
    #     type: bool
    #     required: false
    #     default: false

EXAMPLES = r'''
# Hosted Routers listen on an internet IP for Endpoints and other Routers to
#  form North-South / branch-to-datacenter links and are configured by matching an
#  Edge Router Policy.
  - name: create and wait ten minutes for provisioning of a hosted Edge Router in a particular Azure region
    netfoundry_router:
        name: Hosted Router for Azure "East US 2"
        datacenter: eastus2
        provider: AZURE
        network: "{{ netfoundry_info.network }}"
        attributes:
        - "#global_hosted_routers"

# customer Routers may host Services and are typically deployed by running and
#  registering the NetFoundry VM
  - name: create customer Edge Router
    netfoundry_router:
        name: On-premises VM for the Frankfurt branch
        network: "{{ netfoundry_info.network }}"
        attributes:
        - "#frankfurt_terminus_routers

# state: PROVISIONED (default)
  - name: Delete all customer Edge Routers
    netfoundry_router:
        name: "{{ item }}"
        state: DELETED
        network: "{{ netfoundry_info.network }}"
    loop: "{{ netfoundry_info.customer_edge_routers|map(attribute='name')|list }}"

  - name: Delete all hosted Edge Routers
    netfoundry_router:
        name: "{{ item }}"
        state: DELETED
        network: "{{ netfoundry_info.network }}"
    loop: "{{ netfoundry_info.hosted_edge_routers|map(attribute='name')|list }}"
'''

#   - name: create hosted Edge Router near EU in any available cloud provider
#     netfoundry_router:
#         name: EU Hosted Router
#         georegion: EuropeMiddleEastAfrica
#         network: "{{ netfoundry_info.network }}"
#         attributes:
#         - "#global_hosted_routers"

#   - name: create hosted Edge Router near US in AWS
#     netfoundry_router:
#         name: US Hosted Router
#         georegion: Americas
#         provider: AWS
#         network: "{{ netfoundry_info.network }}"
#         attributes:
#         - "#global_hosted_routers"


# # customer Routers may have a public link listener; 
# # link listeners are typically provided only by NetFoundry-hosted Routers
#   - name: create a public customer-hosted Edge Router
#     netfoundry_router:
#         name: On-premises DMZ Router for the Frankfurt Datacenter
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
        provider=dict(type='str', required=False, default="AWS", choices=["AWS", "AZURE", "GCP", "ALICLOUD", "NETFOUNDRY", "OCP"]),
        datacenter=dict(type='str', required=False),
        state=dict(type='str', required=False, default="PROVISIONED", choices=["PROVISIONING", "PROVISIONED", "REGISTERED", "DELETED"]),
        network=dict(type='dict', required=True),
#        linkListener=dict(type='bool', required=False, default=False),
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

    # if not module.params['linkListener'] and module.params['datacenter']:
    #     raise AnsibleError("ERROR: specify only one of linkListener or datacenter; all NF-datacenter-hosted Edge Routers listen for Router links")

    # these properties will be style translated from snake to lower camel as API properties when patching an existing resource
    properties = {
        "name": module.params['name'],
        "attributes": module.params['attributes'],
    }

    # if datacenter arg is given this is a NF-datacenter-hosted Edge Router and
    # we need to know if the string is a UUID (datacenter ID) or the name of
    # a datacenter location (location code)
    if module.params['datacenter']:
        datacenter = module.params['datacenter']
        provider = module.params['provider']
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

    # find any Router with the specified name
    found = network.get_resources(type="edge-routers",name=properties['name'])
    if len(found) == 0:
        if module.params['state'] in ["PROVISIONING", "PROVISIONED", "REGISTERED"]:
            try: result['message'] = network.create_edge_router(**properties)
            except Exception as e:
                raise AnsibleError('Failed to create Edge Router "{}". Caught exception: {}'.format(module.params['name'], to_native(e)))
            result['changed'] = True
        elif module.params['state'] == "DELETED":
            result['changed'] = False
            module.exit_json(**result)
    elif len(found) == 1:
        router = found[0]
        if module.params['state'] in ["PROVISIONING", "PROVISIONED", "REGISTERED"]:
            # sanity check datacenter IDs
            if module.params['datacenter']:
                if not router['dataCenterId']:
                    if router['status'] == "PROVISIONING":
                        raise Warning('WARN: existing Router is still PROVISIONING and does not yet have a data center ID, and so a datacenter ID may not be assigned.')
                    else:
                        raise AnsibleError('ERROR: existing Router does not have a data center ID and is presumed customer-hosted, and so a datacenter ID may not be assigned.')
                elif not router['dataCenterId'] == properties['data_center_id']:
                    raise AnsibleError('ERROR: existing Router is hosted in NF datacenter ID {:s}, but new datacenter ID is {:s}. Hosted Routers may not be re-located.'.format(
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
                raise AnsibleError('Failed to update Edge Router "{}". Caught exception: {}'.format(module.params['name'], to_native(e)))
            result['changed'] = True
        elif module.params['state'] == "DELETED":
            try: result['message'] = network.delete_resource(type="edge-router",id=router['id'])
            except Exception as e:
                raise AnsibleError('Failed to delete Edge Router "{}". Caught exception: {}'.format(module.params['name'], to_native(e)))
            else:
                result['changed'] = True
                module.exit_json(**result)

    else:
        module.fail_json(msg='ERROR: "{name}" matched more than one Edge Router'.format(name=module.params['name']), **result)

    if module.params['wait'] > 0:
        router_id = result['message']['id']
        # if waiting for status then wait or timeout
        if module.params['state'] == "DELETED":
                try: network.wait_for_status(module.params['state'], id=router_id, type="edge-router", wait=module.params['wait'], progress=False)
                except Exception as e:
                    raise AnsibleError('Timed out waiting for status "{}"'.format(module.params['state']))
        elif module.params['state'] == "PROVISIONING":
                try: network.wait_for_statuses(["PROVISIONING", "PROVISIONED"], id=router_id, type="edge-router", wait=module.params['wait'], progress=False)
                except Exception as e:
                    raise AnsibleError('Timed out waiting for status "{}"'.format(module.params['state']))
        elif module.params['state'] == "PROVISIONED":
                try: network.wait_for_status(module.params['state'], id=router_id, type="edge-router", wait=module.params['wait'], progress=False)
                except Exception as e:
                    raise AnsibleError('Timed out waiting for status "{}"'.format(module.params['state']))
        # REGISTERED implies PROVISIONED and additionally requires the value of JWT to be null, indicating enrollment
        elif module.params['state'] == "REGISTERED":
            wait_until = time()+module.params['wait']
            try: network.wait_for_status("PROVISIONED", id=router_id, type="edge-router", wait=module.params['wait'], progress=False)
            except Exception as e:
                raise AnsibleError('Timed out waiting for status "{}"'.format(module.params['state']))
            else:
                router = network.get_resource(type="edge-router",id=router_id)
    #            import epdb; epdb.serve()
                while time() < wait_until and router['jwt'] is not None:
                    router = network.get_resource(type="edge-router",id=router_id)
                    sleep(10)
                if router['jwt'] is not None:
                    raise AnsibleError('Timed out waiting for status "{}"'.format(module.params['state']))

    module.exit_json(**result)

def main():
    run_module()

if __name__ == '__main__':
    main()
