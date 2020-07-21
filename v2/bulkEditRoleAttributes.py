
import json # operate on structured data
import requests # HTTP user agent
import sys # open stderr
import argparse
import re
import os

#
# bulkEditRoleAttributes.py
# blame(ken)
#
# bulk edit endpoints' role attributes
#

# describe resource types 
#  * embedded list key names and
#  * expected HTTP response codes
RESOURCETYPES = {
    'endpoints': {
        'embedded': "endpointList",
        'httpcode': "OK"
    },
    'edge-routers': {
        'embedded': "edgeRouterList",
        'httpcode': "ACCEPTED"
    },
    'services': {
        'embedded': "serviceList",
        'httpcode': "ACCEPTED"
    }
}

# print to stderr
def eprint(*args, **kwargs):
    print(*args, file=sys.stderr, **kwargs)

def getNetwork(token,networkId):
    """return the network object
        :token [required] the API access token
        :networkId [required] the UUID of the NF network
    """
    try:
        headers = { 
            "authorization": "Bearer " + token 
        }
        response = requests.get(
            'https://gateway.production.netfoundry.io/core/v2/networks/'+networkId,
            headers=headers
        )

        http_code = response.status_code
    except:
        raise

    if http_code == requests.status_codes.codes.OK: # HTTP 200
        try:
            network = json.loads(response.text)
        except ValueError as e:
            eprint('ERROR: failed to load {r} object from GET response'.format(r = "network"))
            raise(e)
    else:
        raise Exception(
            'unexpected response: {} (HTTP {:d})'.format(
                requests.status_codes._codes[http_code][0].upper(),
                http_code
            )
        )

    return(network)

def getResources(token,type,networkId):
    """return the resources object
        :token [required] the API access token
        :type [required] one of endpoints, edge-routers, services
        :networkId [required] the UUID of the NF network
    """
    try:
        headers = { 
            "authorization": "Bearer " + token 
        }
        params = {
            "networkId": networkId,
            "page": 0,
            "size": 10,
            "sort": "name,asc"
        }
        response = requests.get(
            'https://gateway.production.netfoundry.io/core/v2/'+type,
            headers=headers,
            params=params
        )

        http_code = response.status_code
    except:
        raise

    if http_code == requests.status_codes.codes.OK: # HTTP 200
        try:
            resources = json.loads(response.text)
        except ValueError as e:
            eprint('ERROR: failed to load {r} object from GET response'.format(r = type))
            raise(e)
    else:
        raise Exception(
            'unexpected response: {} (HTTP {:d})'.format(
                requests.status_codes._codes[http_code][0].upper(),
                http_code
            )
        )

    all_pages = resources['_embedded'][RESOURCETYPES[type]['embedded']]
    total_pages = resources['page']['totalPages']
    if total_pages > 1:
        for page in range(1,total_pages):
            try:
                params["page"] = page
                response = requests.get(
                    'https://gateway.production.netfoundry.io/core/v2/'+type,
                    headers=headers,
                    params=params
                )
                http_code = response.status_code
            except:
                raise

            if http_code == requests.status_codes.codes.OK: # HTTP 200
                try:
                    resources = json.loads(response.text)
                    all_pages += resources['_embedded'][RESOURCETYPES[type]['embedded']]
                except ValueError as e:
                    eprint('ERROR: failed to load {r} object from GET response'.format(r = type))
                    raise(e)
            else:
                raise Exception(
                    'unexpected response: {} (HTTP {:d})'.format(
                        requests.status_codes._codes[http_code][0].upper(),
                        http_code
                    )
                )

    return(all_pages)

def patchAttributes(token,type,resource):
    """return the new resource object
        :token [required] the API access token
        :type [required] one of endpoints, edge-routers, services
        :resource [required] the resource object to PUT 
    """
    try:
        headers = { 
            'Content-Type': 'application/json',
            "authorization": "Bearer " + token 
        }
        response = requests.patch(
            'https://gateway.production.netfoundry.io/core/v2/'+type+'/'+resource['id'],
            json={
                'name': resource['name'],
                'attributes': resource['attributes']
            },
            headers=headers
        )
        http_code = response.status_code
    except:
        raise

    if http_code == requests.status_codes.codes[RESOURCETYPES[type]['httpcode']]: # HTTP 200
        try:
            updated = json.loads(response.text)
        except ValueError as e:
            eprint('ERROR: failed to load updated resource object from PUT response body')
            raise(e)
    else:
        raise Exception(
            'unexpected response: {} (HTTP {:d}\n{})'.format(
                requests.status_codes._codes[http_code][0].upper(),
                http_code,
                response.text
            )
        )

    return(updated)

PARSER = argparse.ArgumentParser()
PARSER.add_argument(
    "resourceType",
    choices={"endpoints", "edge-routers", "services"},
    help="type of resource to update"
)
PARSER.add_argument(
    "-a", "--attributes",
    nargs="+",
    required=True,
    help="space-sep list of hashtag role attributes e.g. '-a sandbox staging'"
)
PARSER.add_argument(
    "-c", "--client-id",
    default=os.environ.get('NETFOUNDRY_CLIENT_ID',None),
    dest="clientId",
    help="required API account principal"
)
PARSER.add_argument(
    "-s", "--client-secret",
    default=os.environ.get('NETFOUNDRY_CLIENT_SECRET',None),
    dest="clientSecret",
    help="required API account credential"
)
PARSER.add_argument(
    "-u", "--networkId",
    default=os.environ.get('NFNETWORKID',None),
    dest="networkId",
    required=True,
    help="the UUID of the NF network"
)
PARSER.add_argument(
    "-i", "--include",
    default=None,
    help="only invite names that match regex"
)
PARSER.add_argument(
    "-e", "--exclude",
    default=None,
    help="do not invite names that match regex"
)
PARSER.add_argument(
    "-v", "--verbose",
    action='store_true',
    default=False,
    help="print INFO level messages"
)
ARGS = PARSER.parse_args()

TOKENREQUEST = {
    "client_id": ARGS.clientId,
    "client_secret": ARGS.clientSecret,
    "audience": "https://gateway.production.netfoundry.io/",
    "grant_type": "client_credentials"
}

try:
    TOKENRESPONSE = requests.post(
        "https://netfoundry-production.auth0.com/oauth/token",
        json=TOKENREQUEST,
        headers={ 'content-type': "application/json" }
    )
    RESPONSECODE = TOKENRESPONSE.status_code
except:
    eprint('ERROR: authentication failed')
    raise

if RESPONSECODE == requests.status_codes.codes.OK:
    try:
        TOKENOBJECT = json.loads(TOKENRESPONSE.text)
        TOKEN = TOKENOBJECT['access_token']
    except:
        raise Exception(
            'ERROR: failed to find an access_token in the response and instead got: {}'.format(
                TOKENRESPONSE.text
            )
        )
else:
    raise Exception(
        'got unexpected HTTP response {} ({:d})'.format(
            requests.status_codes._codes[RESPONSECODE][0].upper(),
            RESPONSECODE
        )
    )

NETWORKOBJ = getNetwork(TOKEN,ARGS.networkId)
if ARGS.verbose:
    print('INFO: operating on network "{n}"'.format(n = NETWORKOBJ['name']))
RESOURCES = getResources(TOKEN, ARGS.resourceType, ARGS.networkId)

ATTRIBUTES = list()
for attr in ARGS.attributes:
    if not re.match('^[#]', attr):
        attr = '#'+attr
    ATTRIBUTES.append(attr)

for resource in RESOURCES:

    # skip unless included
    if ARGS.include and not re.match(ARGS.include, resource['name']):
        if ARGS.verbose:
            print('INFO: excluded {r}'.format(r = resource['name']))
        continue
    if ARGS.exclude and re.match(ARGS.exclude, resource['name']):
        if ARGS.verbose:
            print('INFO: excluded {r}'.format(r = resource['name']))
        continue    

    updated = dict()
    updated['networkId'] = resource['networkId']
    updated['id'] = resource['id']
    updated['name'] = resource['name']
    updated['attributes'] = ATTRIBUTES
    patchAttributes(TOKEN, ARGS.resourceType, updated)
    if ARGS.verbose:
        print('INFO: updated {r} with {a}'.format(r = resource['name'], a = ATTRIBUTES))
