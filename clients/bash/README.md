# untitled API Bash client

## Overview

This is a Bash client script for accessing untitled API service.

The script uses cURL underneath for making all REST calls.

## Usage

```shell
# Make sure the script has executable rights
$ chmod u+x 

# Print the list of operations available on the service
$ ./ -h

# Print the service description
$ ./ --about

# Print detailed information about specific operation
$ ./ <operationId> -h

# Make GET request
./ --host http://<hostname>:<port> --accept xml <operationId> <queryParam1>=<value1> <header_key1>:<header_value2>

# Make GET request using arbitrary curl options (must be passed before <operationId>) to an SSL service using username:password
 -k -sS --tlsv1.2 --host https://<hostname> -u <user>:<password> --accept xml <operationId> <queryParam1>=<value1> <header_key1>:<header_value2>

# Make POST request
$ echo '<body_content>' |  --host <hostname> --content-type json <operationId> -

# Make POST request with simple JSON content, e.g.:
# {
#   "key1": "value1",
#   "key2": "value2",
#   "key3": 23
# }
$ echo '<body_content>' |  --host <hostname> --content-type json <operationId> key1==value1 key2=value2 key3:=23 -

# Preview the cURL command without actually executing it
$  --host http://<hostname>:<port> --dry-run <operationid>

```

## Docker image

You can easily create a Docker image containing a preconfigured environment
for using the REST Bash client including working autocompletion and short
welcome message with basic instructions, using the generated Dockerfile:

```shell
docker build -t my-rest-client .
docker run -it my-rest-client
```

By default you will be logged into a Zsh environment which has much more
advanced auto completion, but you can switch to Bash, where basic autocompletion
is also available.

## Shell completion

### Bash

The generated bash-completion script can be either directly loaded to the current Bash session using:

```shell
source .bash-completion
```

Alternatively, the script can be copied to the `/etc/bash-completion.d` (or on OSX with Homebrew to `/usr/local/etc/bash-completion.d`):

```shell
sudo cp .bash-completion /etc/bash-completion.d/
```

#### OS X

On OSX you might need to install bash-completion using Homebrew:

```shell
brew install bash-completion
```

and add the following to the `~/.bashrc`:

```shell
if [ -f $(brew --prefix)/etc/bash_completion ]; then
  . $(brew --prefix)/etc/bash_completion
fi
```

### Zsh

In Zsh, the generated `_` Zsh completion file must be copied to one of the folders under `$FPATH` variable.

## Documentation for API Endpoints

All URIs are relative to **

Class | Method | HTTP request | Description
------------ | ------------- | ------------- | -------------
*DefaultApi* | [**request4Q1qU3c4dk**](docs/DefaultApi.md#request4q1qu3c4dk) | **GET** /core/v2/edge-routers/{edgeRouterId} | Get an Edge Router
*DefaultApi* | [**request9sDuPizCiu**](docs/DefaultApi.md#request9sdupizciu) | **POST** /core/v2/endpoints | Create an Endpoint
*DefaultApi* | [**requestA8syyaPZnw**](docs/DefaultApi.md#requesta8syyapznw) | **GET** /product-metadata/v2/download-urls.json | Get the list of Network product versions
*DefaultApi* | [**requestAYFhAQd5pn**](docs/DefaultApi.md#requestayfhaqd5pn) | **GET** /core/v2/endpoints | Get an Endpoint
*DefaultApi* | [**requestAuarCsIhkJ**](docs/DefaultApi.md#requestauarcsihkj) | **POST** /core/v2/edge-routers/{edgeRouterId}/registration-key | Get the registration information for an Edge Router
*DefaultApi* | [**requestBtgg9ZlC0e**](docs/DefaultApi.md#requestbtgg9zlc0e) | **GET** /core/v2/edge-router-policies/{edgeRouterPolicyId} | Get an Edge Router Policy
*DefaultApi* | [**requestE1IexRfvZg**](docs/DefaultApi.md#requeste1iexrfvzg) | **GET** /core/v2/services | Get the list of Services
*DefaultApi* | [**requestFWlFMQIDPX**](docs/DefaultApi.md#requestfwlfmqidpx) | **POST** /core/v2/networks | Create a Network
*DefaultApi* | [**requestGijVCEoMlM**](docs/DefaultApi.md#requestgijvceomlm) | **GET** /core/v2/app-wans | Get the list of AppWANs
*DefaultApi* | [**requestHp1b9GiLax**](docs/DefaultApi.md#requesthp1b9gilax) | **GET** /core/v2/edge-router-policies | Get an Edge Router Policy
*DefaultApi* | [**requestIAJViYLviu**](docs/DefaultApi.md#requestiajviylviu) | **DELETE** /core/v2/networks/{networkId} | Delete a Network
*DefaultApi* | [**requestK9ajDJ8vUS**](docs/DefaultApi.md#requestk9ajdj8vus) | **GET** /rest/v1/network-groups | Get the list of Network Groups
*DefaultApi* | [**requestKkeR9gNy25**](docs/DefaultApi.md#requestkker9gny25) | **GET** /core/v2/app-wans/{appWanId} | Get an AppWAN
*DefaultApi* | [**requestLOXfQSs8GE**](docs/DefaultApi.md#requestloxfqss8ge) | **GET** /core/v2/network-configs | Get a Network Configuration profile
*DefaultApi* | [**requestLgKxU4ph9t**](docs/DefaultApi.md#requestlgkxu4ph9t) | **POST** /core/v2/edge-router-policies | Create an Edge Router Policy
*DefaultApi* | [**requestLopoFtq4ih**](docs/DefaultApi.md#requestlopoftq4ih) | **POST** /core/v2/services | Create a Service
*DefaultApi* | [**requestMpyYtIiS6x**](docs/DefaultApi.md#requestmpyytiis6x) | **GET** /identity/v1/api-account-identities/self | Get the identity of the caller&#39;s API account
*DefaultApi* | [**requestN6GjgPLO4v**](docs/DefaultApi.md#requestn6gjgplo4v) | **GET** /identity/v1/organizations/{organizationId} | Get an Organization
*DefaultApi* | [**requestNXoV6K2f0Q**](docs/DefaultApi.md#requestnxov6k2f0q) | **POST** /core/v2/app-wans | Create an AppWAN
*DefaultApi* | [**requestOiIAfX2VUs**](docs/DefaultApi.md#requestoiiafx2vus) | **GET** /core/v2/networks | Get the list of Networks
*DefaultApi* | [**requestPBaaiO3B0d**](docs/DefaultApi.md#requestpbaaio3b0d) | **DELETE** /core/v2/services/{serviceId} | Delete a Service
*DefaultApi* | [**requestPyR6aUP5mi**](docs/DefaultApi.md#requestpyr6aup5mi) | **POST** /core/v2/edge-routers | Create an Edge Router
*DefaultApi* | [**requestQ0b3cbDW8S**](docs/DefaultApi.md#requestq0b3cbdw8s) | **GET** /core/v2/posture-checks | Get the list of Posture Checks
*DefaultApi* | [**requestTeqMGeER5F**](docs/DefaultApi.md#requestteqmgeer5f) | **GET** /core/v2/networks/{networkId} | Get a Network
*DefaultApi* | [**requestTsyuwlAejK**](docs/DefaultApi.md#requesttsyuwlaejk) | **GET** /core/v2/endpoints/{endpointId} | Get an Endpoint
*DefaultApi* | [**requestVIzB1k6Uqb**](docs/DefaultApi.md#requestvizb1k6uqb) | **PATCH** /core/v2/services/{serviceId} | Change some properties of a Service
*DefaultApi* | [**requestVeJCBUR9iO**](docs/DefaultApi.md#requestvejcbur9io) | **GET** /rest/v1/network-groups/{networkGroupId} | Get a Network Group
*DefaultApi* | [**requestVfuaDMeTRP**](docs/DefaultApi.md#requestvfuadmetrp) | **GET** /core/v2/data-centers | Get the list of data centers
*DefaultApi* | [**requestYLsf4m9TTT**](docs/DefaultApi.md#requestylsf4m9ttt) | **GET** /core/v2/services/{serviceId} | Get a Service
*DefaultApi* | [**requestYhzDAw1Ks4**](docs/DefaultApi.md#requestyhzdaw1ks4) | **GET** /core/v2/edge-routers | Get an Edge Router


## Documentation For Models

 - [CoreV2EndpointsEnrollmentMethod](docs/CoreV2EndpointsEnrollmentMethod.md)
 - [CoreV2ServicesModel](docs/CoreV2ServicesModel.md)
 - [CoreV2ServicesModelClientIngress](docs/CoreV2ServicesModelClientIngress.md)
 - [CoreV2ServicesModelClientIngressPorts](docs/CoreV2ServicesModelClientIngressPorts.md)
 - [CoreV2ServicesModelEdgeRouterHosts](docs/CoreV2ServicesModelEdgeRouterHosts.md)
 - [CoreV2ServicesModelServerEgress](docs/CoreV2ServicesModelServerEgress.md)
 - [CoreV2ServicesServiceIdModel](docs/CoreV2ServicesServiceIdModel.md)
 - [CoreV2ServicesServiceIdModelClientIngress](docs/CoreV2ServicesServiceIdModelClientIngress.md)
 - [CoreV2ServicesServiceIdModelServerEgress](docs/CoreV2ServicesServiceIdModelServerEgress.md)
 - [InlineObject](docs/InlineObject.md)
 - [InlineObject1](docs/InlineObject1.md)
 - [InlineObject2](docs/InlineObject2.md)
 - [InlineObject3](docs/InlineObject3.md)
 - [InlineObject4](docs/InlineObject4.md)
 - [InlineObject5](docs/InlineObject5.md)
 - [InlineObject6](docs/InlineObject6.md)
 - [InlineResponse200](docs/InlineResponse200.md)
 - [InlineResponse2001](docs/InlineResponse2001.md)
 - [InlineResponse20010](docs/InlineResponse20010.md)
 - [InlineResponse20011](docs/InlineResponse20011.md)
 - [InlineResponse20011Links](docs/InlineResponse20011Links.md)
 - [InlineResponse20012](docs/InlineResponse20012.md)
 - [InlineResponse20013](docs/InlineResponse20013.md)
 - [InlineResponse20014](docs/InlineResponse20014.md)
 - [InlineResponse20014IdentityProviders](docs/InlineResponse20014IdentityProviders.md)
 - [InlineResponse20014UpdatedAt](docs/InlineResponse20014UpdatedAt.md)
 - [InlineResponse20015](docs/InlineResponse20015.md)
 - [InlineResponse20015Embedded](docs/InlineResponse20015Embedded.md)
 - [InlineResponse20015EmbeddedNetworkConfigMetadataList](docs/InlineResponse20015EmbeddedNetworkConfigMetadataList.md)
 - [InlineResponse20016](docs/InlineResponse20016.md)
 - [InlineResponse20017](docs/InlineResponse20017.md)
 - [InlineResponse20017Embedded](docs/InlineResponse20017Embedded.md)
 - [InlineResponse20017EmbeddedOrganizations](docs/InlineResponse20017EmbeddedOrganizations.md)
 - [InlineResponse20017Links](docs/InlineResponse20017Links.md)
 - [InlineResponse20018](docs/InlineResponse20018.md)
 - [InlineResponse20018Embedded](docs/InlineResponse20018Embedded.md)
 - [InlineResponse20019](docs/InlineResponse20019.md)
 - [InlineResponse20019710](docs/InlineResponse20019710.md)
 - [InlineResponse200197316](docs/InlineResponse200197316.md)
 - [InlineResponse20019734](docs/InlineResponse20019734.md)
 - [InlineResponse2001Embedded](docs/InlineResponse2001Embedded.md)
 - [InlineResponse2001EmbeddedLinks](docs/InlineResponse2001EmbeddedLinks.md)
 - [InlineResponse2001EmbeddedNetworkList](docs/InlineResponse2001EmbeddedNetworkList.md)
 - [InlineResponse2001Links](docs/InlineResponse2001Links.md)
 - [InlineResponse2001LinksSelf](docs/InlineResponse2001LinksSelf.md)
 - [InlineResponse2001Page](docs/InlineResponse2001Page.md)
 - [InlineResponse2002](docs/InlineResponse2002.md)
 - [InlineResponse2002Embedded](docs/InlineResponse2002Embedded.md)
 - [InlineResponse2002EmbeddedDataCenters](docs/InlineResponse2002EmbeddedDataCenters.md)
 - [InlineResponse2002EmbeddedLinks](docs/InlineResponse2002EmbeddedLinks.md)
 - [InlineResponse2003](docs/InlineResponse2003.md)
 - [InlineResponse2003Embedded](docs/InlineResponse2003Embedded.md)
 - [InlineResponse2003EmbeddedConfigIdByConfigTypeId](docs/InlineResponse2003EmbeddedConfigIdByConfigTypeId.md)
 - [InlineResponse2003EmbeddedModel](docs/InlineResponse2003EmbeddedModel.md)
 - [InlineResponse2003EmbeddedModelClientIngress](docs/InlineResponse2003EmbeddedModelClientIngress.md)
 - [InlineResponse2003EmbeddedModelClientIngressPorts](docs/InlineResponse2003EmbeddedModelClientIngressPorts.md)
 - [InlineResponse2003EmbeddedModelEdgeRouterHosts](docs/InlineResponse2003EmbeddedModelEdgeRouterHosts.md)
 - [InlineResponse2003EmbeddedModelServerEgress](docs/InlineResponse2003EmbeddedModelServerEgress.md)
 - [InlineResponse2003EmbeddedModelServerEgress1](docs/InlineResponse2003EmbeddedModelServerEgress1.md)
 - [InlineResponse2003EmbeddedServiceList](docs/InlineResponse2003EmbeddedServiceList.md)
 - [InlineResponse2004](docs/InlineResponse2004.md)
 - [InlineResponse2004Embedded](docs/InlineResponse2004Embedded.md)
 - [InlineResponse2004EmbeddedEdgeRouterPolicyList](docs/InlineResponse2004EmbeddedEdgeRouterPolicyList.md)
 - [InlineResponse2005](docs/InlineResponse2005.md)
 - [InlineResponse2005ConfigIdByConfigTypeId](docs/InlineResponse2005ConfigIdByConfigTypeId.md)
 - [InlineResponse2006](docs/InlineResponse2006.md)
 - [InlineResponse2006Embedded](docs/InlineResponse2006Embedded.md)
 - [InlineResponse2007](docs/InlineResponse2007.md)
 - [InlineResponse2007Embedded](docs/InlineResponse2007Embedded.md)
 - [InlineResponse2007EmbeddedEndpointList](docs/InlineResponse2007EmbeddedEndpointList.md)
 - [InlineResponse2008](docs/InlineResponse2008.md)
 - [InlineResponse2009](docs/InlineResponse2009.md)
 - [InlineResponse200Links](docs/InlineResponse200Links.md)
 - [InlineResponse200LinksNetwork](docs/InlineResponse200LinksNetwork.md)
 - [InlineResponse200LinksSelf](docs/InlineResponse200LinksSelf.md)
 - [InlineResponse202](docs/InlineResponse202.md)
 - [InlineResponse2021](docs/InlineResponse2021.md)
 - [InlineResponse2021ConfigIdByConfigTypeId](docs/InlineResponse2021ConfigIdByConfigTypeId.md)
 - [InlineResponse2021Links](docs/InlineResponse2021Links.md)
 - [InlineResponse2022](docs/InlineResponse2022.md)
 - [InlineResponse2022ConfigIdByConfigTypeId](docs/InlineResponse2022ConfigIdByConfigTypeId.md)
 - [InlineResponse2023](docs/InlineResponse2023.md)
 - [InlineResponse2023ConfigIdByConfigTypeId](docs/InlineResponse2023ConfigIdByConfigTypeId.md)
 - [InlineResponse2023Model](docs/InlineResponse2023Model.md)
 - [InlineResponse2023ModelClientIngress](docs/InlineResponse2023ModelClientIngress.md)
 - [InlineResponse2024](docs/InlineResponse2024.md)
 - [InlineResponse2024Links](docs/InlineResponse2024Links.md)
 - [InlineResponse2024NetworkController](docs/InlineResponse2024NetworkController.md)
 - [InlineResponse2025](docs/InlineResponse2025.md)
 - [InlineResponse202Links](docs/InlineResponse202Links.md)
 - [InlineResponse500](docs/InlineResponse500.md)
 - [InlineResponse5001](docs/InlineResponse5001.md)
 - [InlineResponse5001Status](docs/InlineResponse5001Status.md)


## Documentation For Authorization

 All endpoints do not require authorization.

