import boto3
from botocore.exceptions import ClientError
from email.mime.multipart import MIMEMultipart
from email.mime.text import MIMEText
from email.mime.application import MIMEApplication
import json
import sys
import argparse
import re
import jwt
from datetime import datetime, date
import time
import os
import requests # HTTP user agent
#import urllib.parse

#
# inviteZitiEndpoints.py
# blame(ken)
#
# invite endpoint owners by conventional email address where the endpoint name is like
#  {first}_{last}-{meta} and email address is like {first}.{last}+{meta}@netfoundry.io
#  skipping those that are already registered (.jwt is null) or expired
#

NOW = time.time()

# describe resource types 
#  * embedded list key names and
#  * expected HTTP response codes
RESOURCETYPES = {
    'endpoints': {
        'embedded': "endpointList",
        'httpcode': "OK"
    }
}

MOPENV = 'production'

# print to stderr
def eprint(*args, **kwargs):
    print(*args, file=sys.stderr, **kwargs)

# fetch a list of resources by network ID
def getNetworkByName(token,name):
    """return the network object
        :token required API access token
        :networkId required name of the NF network may contain quoted whitespace
    """
#    name_encoding = urllib.parse.quote(name)
    try:
        headers = { 
            "authorization": "Bearer " + token 
        }
        params = {
            "findByName": name
        }
        response = requests.get(
            'https://gateway.'+MOPENV+'.netfoundry.io/core/v2/networks',
            headers=headers,
            params=params
        )

        http_code = response.status_code
    except:
        raise

    if http_code == requests.status_codes.codes.OK: # HTTP 200
        try:
            networks = json.loads(response.text)
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
    hits = networks['page']['totalElements']
    if hits == 1:
        network = networks['_embedded']['networkList'][0]
        return(network)
    else:
        raise Exception("ERROR: failed to find exactly one match for {}".format(name))
        
# fetch a list of resources by network ID
def getEndpoints(token,networkId):
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
            "size": 999,
            "sort": "name,asc"
        }
        response = requests.get(
            'https://gateway.'+MOPENV+'.netfoundry.io/core/v2/endpoints',
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

    if '_embedded' in resources.keys():
        endpoints = resources['_embedded']['endpointList']
    else:
        endpoints = []
    return(endpoints)

def createEndpoint(token,networkId,name):
    """return the new endpoint object
        :token required API access token
        :networkId required UUID of the NF network
        :name required endpoint name
    """
    try:
        headers = { 
            'Content-Type': 'application/json',
            "authorization": "Bearer " + token 
        }
        request = {
            "networkId": networkId,
            "attributes": [
                    "#defaultRouters"
            ],
            "enrollmentMethod": {
                    "ott": True
            },
            "name": name
        }
        response = requests.post(
            'https://gateway.'+MOPENV+'.netfoundry.io/core/v2/endpoints',
            json=request,
            headers=headers
        )
        http_code = response.status_code
    except:
        raise

    if http_code == requests.status_codes.codes[RESOURCETYPES['endpoints']['httpcode']]:
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

def deleteEndpoint(token,endpointId):
    """delete an endpoint with an expired enrollment token
        :token [required] the API access token
        :endpointId [required] the UUID of the expired endpoint
    """
    try:
        headers = { 
            "authorization": "Bearer " + token 
        }
        response = requests.delete(
            'https://gateway.'+MOPENV+'.netfoundry.io/core/v2/endpoints/'+endpointId,
            headers=headers
        )
        http_code = response.status_code
    except:
        raise

    if not http_code == requests.status_codes.codes.OK:
        raise Exception(
            'unexpected response: {} (HTTP {:d}\n{})'.format(
                requests.status_codes._codes[http_code][0].upper(),
                http_code,
                response.text
            )
        )

def shareEndpoint(token,recipient,endpointId,meta):
    """share the new endpoint enrollment token with an email address
        :token [required] the API access token
        :recipient [required] the email address
        :endpointId [required] the UUID of the endpoint
    """
    try:
        headers = { 
            'Content-Type': 'application/json',
            "authorization": "Bearer " + token 
        }
        request = [
            {
                "toList": [recipient],
                "subject": "Your enrollment token for {}".format(meta),
                "id": endpointId
            }
        ]
        response = requests.post(
            'https://gateway.'+MOPENV+'.netfoundry.io/core/v2/endpoints/share',
            json=request,
            headers=headers
        )
        http_code = response.status_code
    except:
        raise

    if not http_code == requests.status_codes.codes['ACCEPTED']:
        raise Exception(
            'unexpected response: {} (HTTP {:d}\n{})'.format(
                requests.status_codes._codes[http_code][0].upper(),
                http_code,
                response.text
            )
        )

PARSER = argparse.ArgumentParser()
PARSER.add_argument(
    "-c", "--client-id",
    default=os.environ.get('NETFOUNDRY_CLIENT_ID',None),
    dest="nfClientId",
    help="required NetFoundry API account principal"
)
PARSER.add_argument(
    "-s", "--client-secret",
    default=os.environ.get('NETFOUNDRY_CLIENT_SECRET',None),
    dest="nfClientSecret",
    help="required NetFoundry API account credential"
)
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
    "-p", "--aws-profile",
    dest="awsProfile",
    default=None,
    help="AWS shared credentials profile for sending email with SES"
)
PARSER.add_argument(
    "-f", "--invitees",
    default=None,
    help="filename with one email address per line like {first}.{last}+{meta}@netfoundry.io where optional {meta} is added to the args of --metadata to compose endpoint names like {first}_{last}-{meta}"
)
ARGS = PARSER.parse_args()

if os.environ.get('NETFOUNDRY_API_TOKEN',None):
    TOKEN = os.environ.get('NETFOUNDRY_API_TOKEN')
else:
    TOKENREQUEST = {
        "client_id": ARGS.nfClientId,
        "client_secret": ARGS.nfClientSecret,
        "audience": "https://gateway."+MOPENV+".netfoundry.io/",
        "grant_type": "client_credentials"
    }

    try:
        TOKENRESPONSE = requests.post(
            "https://netfoundry-"+MOPENV+".auth0.com/oauth/token",
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

if ARGS.networkName and ARGS.networkId:
    raise Exception("ERROR: need one of network-name or network-id")
elif ARGS.networkName:
    NFNETWORK = getNetworkByName(TOKEN,ARGS.networkName)
    NFNETWORKID = NFNETWORK['id']
elif ARGS.networkId:
    NFNETWORKID = ARGS.networkId
else:
    raise Exception("ERROR: need one of network-name or network-id")

ENDPOINTS = getEndpoints(TOKEN,NFNETWORKID)

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
            endpoint = createEndpoint(TOKEN,NFNETWORKID,endpoint_name)

        # decode the JWT
        expiry_epoch = jwt.decode(endpoint['jwt'], verify=False)['exp']
        # parse the expiry time
        expiry_timestamp = datetime.fromtimestamp(expiry_epoch)
        # recreate if expiring in less than 12 hours
        if (NOW+(60*60*12)) > expiry_epoch:
            print('EXPIRY: recreating {}'.format(endpoint_name))
            try:
                deleteEndpoint(TOKEN,endpoint['id'])
                endpoint = createEndpoint(TOKEN,NFNETWORKID,endpoint_name)
            except Exception as e:
                eprint('ERROR: failed to re-create expired endpoint {}'.format(endpoint_name))
                raise(e)

        try:
            shareEndpoint(TOKEN,invitee_email,endpoint['id'],meta)
        # Display an error if something goes wrong.	
        except Exception as e:
            eprint("ERROR: failed to share {} with {}".format(endpoint_name, invitee_email))
            print(e.response['Error']['Message'])
        else:
            print("SENT {} to {}".format(endpoint_name, invitee_email))
