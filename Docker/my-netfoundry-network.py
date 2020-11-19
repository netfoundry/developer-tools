#!/usr/bin/env python3

import netfoundry
import os
import argparse

PARSER = argparse.ArgumentParser()
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
