import json
from os import environ
import sys
import argparse
import re
import jwt
from datetime import datetime, date
import time
import os
import netfoundry

#
# inviteZitiEndpoints.py
# blame(ken)
#
# invite endpoint owners by conventional email address where the endpoint name is like
#  {first}_{last}-{meta} and email address is like {first}.{last}+{meta}@netfoundry.io
#  skipping those that are already registered (.jwt is null) or expired
#

NOW = time.time()

# print to stderr
def eprint(*args, **kwargs):
    print(*args, file=sys.stderr, **kwargs)

PARSER = argparse.ArgumentParser()
PARSER.add_argument(
    "-u", "--network-id",
    default=None,
    dest="networkId",
    help="the UUID of the NF network"
)
PARSER.add_argument(
    "-n", "--network-name",
    default=None,
    dest="networkName",
    help="the name of the NF network may contain quoted whitespace"
)
PARSER.add_argument(
    "-m", "--metadata",
    default=['laptop'],
    nargs="+",
    required=False,
    help="one or more metadata to be appended endpoint names e.g. '-m laptop mobile'"
)
PARSER.add_argument(
    "-a", "--attributes",
    default=[],
    nargs="+",
    required=False,
    help="one or more Endpoint role attributes e.g. -a sandbox staging dummyServices"
)
PARSER.add_argument(
    "-i", "--include",
    default=None,
    help="invite emails matching regex"
)
PARSER.add_argument(
    "-e", "--exclude",
    default=None,
    help="ignore emails matching regex"
)
PARSER.add_argument(
    "-f", "--invitees",
    default=None,
    help="filename with one email address per line like {first}.{last}+{meta}@netfoundry.io where optional {meta} is added to the args of --metadata to compose endpoint names like {first}_{last}-{meta}"
)
PARSER.add_argument(
    "-c", "--credentials",
    default=None,
    help="API account credentials JSON file"
)
ARGS = PARSER.parse_args()

Session = netfoundry.Session(
    token=os.environ['NETFOUNDRY_API_TOKEN'] if 'NETFOUNDRY_API_TOKEN' in os.environ else None,
    credentials=ARGS.credentials if ARGS.credentials is not None else None
)

# yields a list of Network Groups in Organization.networkGroups[], but there's typically only one group
Organization = netfoundry.Organization(Session)

# use the default Network Group (the first Network Group ID known to the Organization)
NetworkGroup = netfoundry.NetworkGroup(Organization)

if ARGS.networkName and ARGS.networkId:
    raise Exception("ERROR: need one of network-name or network-id")
elif ARGS.networkName:
    Network = netfoundry.Network(Session, networkName=ARGS.networkName)
elif ARGS.networkId:
    Network = netfoundry.Network(Session, networkId=ARGS.networkId)
else:
    raise Exception("ERROR: need one of network-name or network-id")

ENDPOINTS = Network.endpoints()

if ARGS.invitees:
    INVITEES = open(ARGS.invitees)
else:
    INVITEES = sys.stdin

for invitee in INVITEES:

    invitee_email = invitee.rstrip()
    invitee_localpart = invitee_email.split('@')[0]
    invitee_domainpart = invitee_email.split('@')[1]
    invitee_fullname = invitee_localpart.split('+')[0]
    invitee_names = invitee_fullname.split('.')

    # skip unless included
    if ARGS.include and not re.match(ARGS.include, invitee_email):
        print('EXCLUDED: {}'.format(invitee_email))
        continue
    if ARGS.exclude and re.match(ARGS.exclude, invitee_email):
        print('EXCLUDED: {}'.format(invitee_email))
        continue    
    # skip unless @netfoundry.io
    if not invitee_domainpart == "netfoundry.io":
        print('INVALID: illegal email domain {}'.format(invitee_email))
        continue

    # if the invitee email contains a metadatum
    for meta in ARGS.metadata:
        endpoint_name = '_'.join(invitee_names)+'-'+meta

        # create endpoint unless exists
        endpoints = [e for e in ENDPOINTS if e['name'] == endpoint_name]
        if len(endpoints) > 1:
            eprint("ERROR: there are multiple endpoints named {}".format(endpoint_name))
            sys.exit(1)
        elif len(endpoints) == 1:
            endpoint = endpoints[0]
            # skip if already registered
            if not endpoint['jwt']:
                print('REGISTERED: {} skipped'.format(endpoint_name))
                continue
        else:
            # create the endpoint
            endpoint = Network.createEndpoint(name=endpoint_name,attributes=ARGS.attributes)

        # decode the JWT
        expiry_epoch = jwt.decode(endpoint['jwt'], verify=False)['exp']
        # parse the expiry time
        expiry_timestamp = datetime.fromtimestamp(expiry_epoch)
        # recreate if expiring in less than 12 hours
        if (NOW+(60*60*12)) > expiry_epoch:
            print('EXPIRY: recreating {}'.format(endpoint_name))
            try:
                Network.deleteResource(type="endpoint",id=endpoint['id'])
                # recreate the endpoint
                endpoint = Network.createEndpoint(name=endpoint_name,attributes=ARGS.attributes)
            except Exception as e:
                eprint('ERROR: failed to re-create expired endpoint {}'.format(endpoint_name))
                raise(e)

        try:
            Network.shareEndpoint(invitee_email,endpoint['id'])
        # Display an error if something goes wrong.	
        except Exception as e:
            eprint("ERROR: failed to share {} with {}".format(endpoint_name, invitee_email))
#            import pdb;pdb.set_trace()
            print(e.response['Error']['Message'])
        else:
            print("SENT {} to {}".format(endpoint_name, invitee_email))
