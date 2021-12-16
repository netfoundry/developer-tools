
import sys
import argparse
import re
import os
import netfoundry

#
# bulkEditRoleAttributes.py
# blame(ken)
#
# bulk edit role attributes for Endpoints, Services, or Edge Routers
#
# python3 ./bulkEditRoleAttributes.py endpoints \
#             --credentials credentials.json \
#             --attributes sandbox staging production \
#             --network-name ZitiBastions \
#             --include ".*laptop$"                                       

# print to stderr
def eprint(*args, **kwargs):
    print(*args, file=sys.stderr, **kwargs)

parser = argparse.ArgumentParser()
parser.add_argument(
    "resource_type",
    choices={"endpoints", "edge-routers", "services"},
    help="type of resource to update"
)
parser.add_argument(
    "-a", "--attributes",
    nargs="+",
    required=True,
    help="space-sep list of hashtag role attributes e.g. '-a \#sandbox \#staging'"
)
parser.add_argument(
    "-u", "--network-id",
    default=None,
    help="the UUID of the NF network"
)
parser.add_argument(
    "-n", "--network-name",
    default=None,
    dest="network_name",
    help="the name of the NF network may contain quoted whitespace"
)
parser.add_argument(
    "-i", "--include",
    default=None,
    help="only invite names that match regex"
)
parser.add_argument(
    "-e", "--exclude",
    default=None,
    help="do not invite names that match regex"
)
parser.add_argument(
    "-v", "--verbose",
    action='store_true',
    default=False,
    help="print INFO level messages"
)
parser.add_argument(
    "-c", "--credentials",
    default=None,
    help="API account credentials JSON file"
)
args = parser.parse_args()

# use the session with some organization, default is to use the first and there's typically only one
organization = netfoundry.Organization(
    credentials=args.credentials if 'credentials' in args else None,
    organization_label=args.organization if 'organization' in args else None,
)

# use some Network Group, default is to use the first and there's typically only one
network_group = netfoundry.NetworkGroup(
    organization,
    network_group_name=args.network_group if 'network_group' in args else None
)

if args.network_name and args.network_id:
    raise Exception("ERROR: need one of network-name or network-id")
elif args.network_name:
    network = netfoundry.Network(network_group, network_name=args.network_name)
elif args.network_id:
    network = netfoundry.Network(network_group, network_id=args.network_id)
else:
    raise Exception("ERROR: need one of network-name or network-id")

if args.verbose:
    print('INFO: operating on network "{:s}"'.format(network.name))
found_resources = network.get_resources(type=args.resource_type)

attributes = list()
# ensure all attributes begin with a # character
for attr in args.attributes:
    if not re.match('^[#]', attr):
        attr = '#'+attr
    attributes.append(attr)

for resource in found_resources:
    # skip unless included
    if args.include and not re.match(args.include, resource['name']):
        if args.verbose:
            print('INFO: excluded {r}'.format(r = resource['name']))
        continue
    if args.exclude and re.match(args.exclude, resource['name']):
        if args.verbose:
            print('INFO: excluded {r}'.format(r = resource['name']))
        continue    

    resource['attributes'] = attributes
    network.patch_resource(resource)
    if args.verbose:
        print('INFO: updated {r} with {a}'.format(r = resource['name'], a = attributes))
