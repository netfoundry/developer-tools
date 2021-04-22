# org.openapitools.client - Kotlin client library for untitled API

## Requires

* Kotlin 1.3.41
* Gradle 4.9

## Build

First, create the gradle wrapper script:

```
gradle wrapper
```

Then, run:

```
./gradlew check assemble
```

This runs all tests and packages the library.

## Features/Implementation Notes

* Supports JSON inputs/outputs, File inputs, and Form inputs.
* Supports collection formats for query parameters: csv, tsv, ssv, pipes.
* Some Kotlin and Java types are fully qualified to avoid conflicts with types defined in OpenAPI definitions.
* Implementation of ApiClient is intended to reduce method counts, specifically to benefit Android targets.

<a name="documentation-for-api-endpoints"></a>
## Documentation for API Endpoints

All URIs are relative to *http://localhost*

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
*DefaultApi* | [**requestMpyYtIiS6x**](docs/DefaultApi.md#requestmpyytiis6x) | **GET** /identity/v1/api-account-identities/self | Get the identity of the caller's API account
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


<a name="documentation-for-models"></a>
## Documentation for Models

 - [org.openapitools.client.models.CoreV2EndpointsEnrollmentMethod](docs/CoreV2EndpointsEnrollmentMethod.md)
 - [org.openapitools.client.models.CoreV2ServicesModel](docs/CoreV2ServicesModel.md)
 - [org.openapitools.client.models.CoreV2ServicesModelClientIngress](docs/CoreV2ServicesModelClientIngress.md)
 - [org.openapitools.client.models.CoreV2ServicesModelClientIngressPorts](docs/CoreV2ServicesModelClientIngressPorts.md)
 - [org.openapitools.client.models.CoreV2ServicesModelEdgeRouterHosts](docs/CoreV2ServicesModelEdgeRouterHosts.md)
 - [org.openapitools.client.models.CoreV2ServicesModelServerEgress](docs/CoreV2ServicesModelServerEgress.md)
 - [org.openapitools.client.models.CoreV2ServicesServiceIdModel](docs/CoreV2ServicesServiceIdModel.md)
 - [org.openapitools.client.models.CoreV2ServicesServiceIdModelClientIngress](docs/CoreV2ServicesServiceIdModelClientIngress.md)
 - [org.openapitools.client.models.CoreV2ServicesServiceIdModelServerEgress](docs/CoreV2ServicesServiceIdModelServerEgress.md)
 - [org.openapitools.client.models.InlineObject](docs/InlineObject.md)
 - [org.openapitools.client.models.InlineObject1](docs/InlineObject1.md)
 - [org.openapitools.client.models.InlineObject2](docs/InlineObject2.md)
 - [org.openapitools.client.models.InlineObject3](docs/InlineObject3.md)
 - [org.openapitools.client.models.InlineObject4](docs/InlineObject4.md)
 - [org.openapitools.client.models.InlineObject5](docs/InlineObject5.md)
 - [org.openapitools.client.models.InlineObject6](docs/InlineObject6.md)
 - [org.openapitools.client.models.InlineResponse200](docs/InlineResponse200.md)
 - [org.openapitools.client.models.InlineResponse2001](docs/InlineResponse2001.md)
 - [org.openapitools.client.models.InlineResponse20010](docs/InlineResponse20010.md)
 - [org.openapitools.client.models.InlineResponse20011](docs/InlineResponse20011.md)
 - [org.openapitools.client.models.InlineResponse20011Links](docs/InlineResponse20011Links.md)
 - [org.openapitools.client.models.InlineResponse20012](docs/InlineResponse20012.md)
 - [org.openapitools.client.models.InlineResponse20013](docs/InlineResponse20013.md)
 - [org.openapitools.client.models.InlineResponse20014](docs/InlineResponse20014.md)
 - [org.openapitools.client.models.InlineResponse20014IdentityProviders](docs/InlineResponse20014IdentityProviders.md)
 - [org.openapitools.client.models.InlineResponse20014UpdatedAt](docs/InlineResponse20014UpdatedAt.md)
 - [org.openapitools.client.models.InlineResponse20015](docs/InlineResponse20015.md)
 - [org.openapitools.client.models.InlineResponse20015Embedded](docs/InlineResponse20015Embedded.md)
 - [org.openapitools.client.models.InlineResponse20015EmbeddedNetworkConfigMetadataList](docs/InlineResponse20015EmbeddedNetworkConfigMetadataList.md)
 - [org.openapitools.client.models.InlineResponse20016](docs/InlineResponse20016.md)
 - [org.openapitools.client.models.InlineResponse20017](docs/InlineResponse20017.md)
 - [org.openapitools.client.models.InlineResponse20017Embedded](docs/InlineResponse20017Embedded.md)
 - [org.openapitools.client.models.InlineResponse20017EmbeddedOrganizations](docs/InlineResponse20017EmbeddedOrganizations.md)
 - [org.openapitools.client.models.InlineResponse20017Links](docs/InlineResponse20017Links.md)
 - [org.openapitools.client.models.InlineResponse20018](docs/InlineResponse20018.md)
 - [org.openapitools.client.models.InlineResponse20018Embedded](docs/InlineResponse20018Embedded.md)
 - [org.openapitools.client.models.InlineResponse20019](docs/InlineResponse20019.md)
 - [org.openapitools.client.models.InlineResponse20019710](docs/InlineResponse20019710.md)
 - [org.openapitools.client.models.InlineResponse200197316](docs/InlineResponse200197316.md)
 - [org.openapitools.client.models.InlineResponse20019734](docs/InlineResponse20019734.md)
 - [org.openapitools.client.models.InlineResponse2001Embedded](docs/InlineResponse2001Embedded.md)
 - [org.openapitools.client.models.InlineResponse2001EmbeddedLinks](docs/InlineResponse2001EmbeddedLinks.md)
 - [org.openapitools.client.models.InlineResponse2001EmbeddedNetworkList](docs/InlineResponse2001EmbeddedNetworkList.md)
 - [org.openapitools.client.models.InlineResponse2001Links](docs/InlineResponse2001Links.md)
 - [org.openapitools.client.models.InlineResponse2001LinksSelf](docs/InlineResponse2001LinksSelf.md)
 - [org.openapitools.client.models.InlineResponse2001Page](docs/InlineResponse2001Page.md)
 - [org.openapitools.client.models.InlineResponse2002](docs/InlineResponse2002.md)
 - [org.openapitools.client.models.InlineResponse2002Embedded](docs/InlineResponse2002Embedded.md)
 - [org.openapitools.client.models.InlineResponse2002EmbeddedDataCenters](docs/InlineResponse2002EmbeddedDataCenters.md)
 - [org.openapitools.client.models.InlineResponse2002EmbeddedLinks](docs/InlineResponse2002EmbeddedLinks.md)
 - [org.openapitools.client.models.InlineResponse2003](docs/InlineResponse2003.md)
 - [org.openapitools.client.models.InlineResponse2003Embedded](docs/InlineResponse2003Embedded.md)
 - [org.openapitools.client.models.InlineResponse2003EmbeddedConfigIdByConfigTypeId](docs/InlineResponse2003EmbeddedConfigIdByConfigTypeId.md)
 - [org.openapitools.client.models.InlineResponse2003EmbeddedModel](docs/InlineResponse2003EmbeddedModel.md)
 - [org.openapitools.client.models.InlineResponse2003EmbeddedModelClientIngress](docs/InlineResponse2003EmbeddedModelClientIngress.md)
 - [org.openapitools.client.models.InlineResponse2003EmbeddedModelClientIngressPorts](docs/InlineResponse2003EmbeddedModelClientIngressPorts.md)
 - [org.openapitools.client.models.InlineResponse2003EmbeddedModelEdgeRouterHosts](docs/InlineResponse2003EmbeddedModelEdgeRouterHosts.md)
 - [org.openapitools.client.models.InlineResponse2003EmbeddedModelServerEgress](docs/InlineResponse2003EmbeddedModelServerEgress.md)
 - [org.openapitools.client.models.InlineResponse2003EmbeddedModelServerEgress1](docs/InlineResponse2003EmbeddedModelServerEgress1.md)
 - [org.openapitools.client.models.InlineResponse2003EmbeddedServiceList](docs/InlineResponse2003EmbeddedServiceList.md)
 - [org.openapitools.client.models.InlineResponse2004](docs/InlineResponse2004.md)
 - [org.openapitools.client.models.InlineResponse2004Embedded](docs/InlineResponse2004Embedded.md)
 - [org.openapitools.client.models.InlineResponse2004EmbeddedEdgeRouterPolicyList](docs/InlineResponse2004EmbeddedEdgeRouterPolicyList.md)
 - [org.openapitools.client.models.InlineResponse2005](docs/InlineResponse2005.md)
 - [org.openapitools.client.models.InlineResponse2005ConfigIdByConfigTypeId](docs/InlineResponse2005ConfigIdByConfigTypeId.md)
 - [org.openapitools.client.models.InlineResponse2006](docs/InlineResponse2006.md)
 - [org.openapitools.client.models.InlineResponse2006Embedded](docs/InlineResponse2006Embedded.md)
 - [org.openapitools.client.models.InlineResponse2007](docs/InlineResponse2007.md)
 - [org.openapitools.client.models.InlineResponse2007Embedded](docs/InlineResponse2007Embedded.md)
 - [org.openapitools.client.models.InlineResponse2007EmbeddedEndpointList](docs/InlineResponse2007EmbeddedEndpointList.md)
 - [org.openapitools.client.models.InlineResponse2008](docs/InlineResponse2008.md)
 - [org.openapitools.client.models.InlineResponse2009](docs/InlineResponse2009.md)
 - [org.openapitools.client.models.InlineResponse200Links](docs/InlineResponse200Links.md)
 - [org.openapitools.client.models.InlineResponse200LinksNetwork](docs/InlineResponse200LinksNetwork.md)
 - [org.openapitools.client.models.InlineResponse200LinksSelf](docs/InlineResponse200LinksSelf.md)
 - [org.openapitools.client.models.InlineResponse202](docs/InlineResponse202.md)
 - [org.openapitools.client.models.InlineResponse2021](docs/InlineResponse2021.md)
 - [org.openapitools.client.models.InlineResponse2021ConfigIdByConfigTypeId](docs/InlineResponse2021ConfigIdByConfigTypeId.md)
 - [org.openapitools.client.models.InlineResponse2021Links](docs/InlineResponse2021Links.md)
 - [org.openapitools.client.models.InlineResponse2022](docs/InlineResponse2022.md)
 - [org.openapitools.client.models.InlineResponse2022ConfigIdByConfigTypeId](docs/InlineResponse2022ConfigIdByConfigTypeId.md)
 - [org.openapitools.client.models.InlineResponse2023](docs/InlineResponse2023.md)
 - [org.openapitools.client.models.InlineResponse2023ConfigIdByConfigTypeId](docs/InlineResponse2023ConfigIdByConfigTypeId.md)
 - [org.openapitools.client.models.InlineResponse2023Model](docs/InlineResponse2023Model.md)
 - [org.openapitools.client.models.InlineResponse2023ModelClientIngress](docs/InlineResponse2023ModelClientIngress.md)
 - [org.openapitools.client.models.InlineResponse2024](docs/InlineResponse2024.md)
 - [org.openapitools.client.models.InlineResponse2024Links](docs/InlineResponse2024Links.md)
 - [org.openapitools.client.models.InlineResponse2024NetworkController](docs/InlineResponse2024NetworkController.md)
 - [org.openapitools.client.models.InlineResponse2025](docs/InlineResponse2025.md)
 - [org.openapitools.client.models.InlineResponse202Links](docs/InlineResponse202Links.md)
 - [org.openapitools.client.models.InlineResponse500](docs/InlineResponse500.md)
 - [org.openapitools.client.models.InlineResponse5001](docs/InlineResponse5001.md)
 - [org.openapitools.client.models.InlineResponse5001Status](docs/InlineResponse5001Status.md)


<a name="documentation-for-authorization"></a>
## Documentation for Authorization

All endpoints do not require authorization.
