# UntitledApi.DefaultApi

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**request4Q1qU3c4dk**](DefaultApi.md#request4Q1qU3c4dk) | **GET** /core/v2/edge-routers/{edgeRouterId} | Get an Edge Router
[**request9sDuPizCiu**](DefaultApi.md#request9sDuPizCiu) | **POST** /core/v2/endpoints | Create an Endpoint
[**requestA8syyaPZnw**](DefaultApi.md#requestA8syyaPZnw) | **GET** /product-metadata/v2/download-urls.json | Get the list of Network product versions
[**requestAYFhAQd5pn**](DefaultApi.md#requestAYFhAQd5pn) | **GET** /core/v2/endpoints | Get an Endpoint
[**requestAuarCsIhkJ**](DefaultApi.md#requestAuarCsIhkJ) | **POST** /core/v2/edge-routers/{edgeRouterId}/registration-key | Get the registration information for an Edge Router
[**requestBtgg9ZlC0e**](DefaultApi.md#requestBtgg9ZlC0e) | **GET** /core/v2/edge-router-policies/{edgeRouterPolicyId} | Get an Edge Router Policy
[**requestE1IexRfvZg**](DefaultApi.md#requestE1IexRfvZg) | **GET** /core/v2/services | Get the list of Services
[**requestFWlFMQIDPX**](DefaultApi.md#requestFWlFMQIDPX) | **POST** /core/v2/networks | Create a Network
[**requestGijVCEoMlM**](DefaultApi.md#requestGijVCEoMlM) | **GET** /core/v2/app-wans | Get the list of AppWANs
[**requestHp1b9GiLax**](DefaultApi.md#requestHp1b9GiLax) | **GET** /core/v2/edge-router-policies | Get an Edge Router Policy
[**requestIAJViYLviu**](DefaultApi.md#requestIAJViYLviu) | **DELETE** /core/v2/networks/{networkId} | Delete a Network
[**requestK9ajDJ8vUS**](DefaultApi.md#requestK9ajDJ8vUS) | **GET** /rest/v1/network-groups | Get the list of Network Groups
[**requestKkeR9gNy25**](DefaultApi.md#requestKkeR9gNy25) | **GET** /core/v2/app-wans/{appWanId} | Get an AppWAN
[**requestLOXfQSs8GE**](DefaultApi.md#requestLOXfQSs8GE) | **GET** /core/v2/network-configs | Get a Network Configuration profile
[**requestLgKxU4ph9t**](DefaultApi.md#requestLgKxU4ph9t) | **POST** /core/v2/edge-router-policies | Create an Edge Router Policy
[**requestLopoFtq4ih**](DefaultApi.md#requestLopoFtq4ih) | **POST** /core/v2/services | Create a Service
[**requestMpyYtIiS6x**](DefaultApi.md#requestMpyYtIiS6x) | **GET** /identity/v1/api-account-identities/self | Get the identity of the caller&#39;s API account
[**requestN6GjgPLO4v**](DefaultApi.md#requestN6GjgPLO4v) | **GET** /identity/v1/organizations/{organizationId} | Get an Organization
[**requestNXoV6K2f0Q**](DefaultApi.md#requestNXoV6K2f0Q) | **POST** /core/v2/app-wans | Create an AppWAN
[**requestOiIAfX2VUs**](DefaultApi.md#requestOiIAfX2VUs) | **GET** /core/v2/networks | Get the list of Networks
[**requestPBaaiO3B0d**](DefaultApi.md#requestPBaaiO3B0d) | **DELETE** /core/v2/services/{serviceId} | Delete a Service
[**requestPyR6aUP5mi**](DefaultApi.md#requestPyR6aUP5mi) | **POST** /core/v2/edge-routers | Create an Edge Router
[**requestQ0b3cbDW8S**](DefaultApi.md#requestQ0b3cbDW8S) | **GET** /core/v2/posture-checks | Get the list of Posture Checks
[**requestTeqMGeER5F**](DefaultApi.md#requestTeqMGeER5F) | **GET** /core/v2/networks/{networkId} | Get a Network
[**requestTsyuwlAejK**](DefaultApi.md#requestTsyuwlAejK) | **GET** /core/v2/endpoints/{endpointId} | Get an Endpoint
[**requestVIzB1k6Uqb**](DefaultApi.md#requestVIzB1k6Uqb) | **PATCH** /core/v2/services/{serviceId} | Change some properties of a Service
[**requestVeJCBUR9iO**](DefaultApi.md#requestVeJCBUR9iO) | **GET** /rest/v1/network-groups/{networkGroupId} | Get a Network Group
[**requestVfuaDMeTRP**](DefaultApi.md#requestVfuaDMeTRP) | **GET** /core/v2/data-centers | Get the list of data centers
[**requestYLsf4m9TTT**](DefaultApi.md#requestYLsf4m9TTT) | **GET** /core/v2/services/{serviceId} | Get a Service
[**requestYhzDAw1Ks4**](DefaultApi.md#requestYhzDAw1Ks4) | **GET** /core/v2/edge-routers | Get an Edge Router



## request4Q1qU3c4dk

> InlineResponse20012 request4Q1qU3c4dk(edgeRouterId)

Get an Edge Router

### Example

```javascript
import UntitledApi from 'untitled_api';

let apiInstance = new UntitledApi.DefaultApi();
let edgeRouterId = "edgeRouterId_example"; // String | 
apiInstance.request4Q1qU3c4dk(edgeRouterId, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **edgeRouterId** | **String**|  | 

### Return type

[**InlineResponse20012**](InlineResponse20012.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/hal+json


## request9sDuPizCiu

> InlineResponse2008 request9sDuPizCiu(opts)

Create an Endpoint

### Example

```javascript
import UntitledApi from 'untitled_api';

let apiInstance = new UntitledApi.DefaultApi();
let opts = {
  'inlineObject5': new UntitledApi.InlineObject5() // InlineObject5 | 
};
apiInstance.request9sDuPizCiu(opts, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **inlineObject5** | [**InlineObject5**](InlineObject5.md)|  | [optional] 

### Return type

[**InlineResponse2008**](InlineResponse2008.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/hal+json


## requestA8syyaPZnw

> InlineResponse20019 requestA8syyaPZnw()

Get the list of Network product versions

### Example

```javascript
import UntitledApi from 'untitled_api';

let apiInstance = new UntitledApi.DefaultApi();
apiInstance.requestA8syyaPZnw((error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters

This endpoint does not need any parameter.

### Return type

[**InlineResponse20019**](InlineResponse20019.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## requestAYFhAQd5pn

> InlineResponse2007 requestAYFhAQd5pn()

Get an Endpoint

### Example

```javascript
import UntitledApi from 'untitled_api';

let apiInstance = new UntitledApi.DefaultApi();
apiInstance.requestAYFhAQd5pn((error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters

This endpoint does not need any parameter.

### Return type

[**InlineResponse2007**](InlineResponse2007.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/hal+json


## requestAuarCsIhkJ

> InlineResponse2009 requestAuarCsIhkJ(edgeRouterId)

Get the registration information for an Edge Router

### Example

```javascript
import UntitledApi from 'untitled_api';

let apiInstance = new UntitledApi.DefaultApi();
let edgeRouterId = "edgeRouterId_example"; // String | 
apiInstance.requestAuarCsIhkJ(edgeRouterId, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **edgeRouterId** | **String**|  | 

### Return type

[**InlineResponse2009**](InlineResponse2009.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/hal+json


## requestBtgg9ZlC0e

> InlineResponse2004EmbeddedEdgeRouterPolicyList requestBtgg9ZlC0e(edgeRouterPolicyId)

Get an Edge Router Policy

### Example

```javascript
import UntitledApi from 'untitled_api';

let apiInstance = new UntitledApi.DefaultApi();
let edgeRouterPolicyId = "edgeRouterPolicyId_example"; // String | 
apiInstance.requestBtgg9ZlC0e(edgeRouterPolicyId, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **edgeRouterPolicyId** | **String**|  | 

### Return type

[**InlineResponse2004EmbeddedEdgeRouterPolicyList**](InlineResponse2004EmbeddedEdgeRouterPolicyList.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/hal+json


## requestE1IexRfvZg

> InlineResponse2003 requestE1IexRfvZg()

Get the list of Services

### Example

```javascript
import UntitledApi from 'untitled_api';

let apiInstance = new UntitledApi.DefaultApi();
apiInstance.requestE1IexRfvZg((error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters

This endpoint does not need any parameter.

### Return type

[**InlineResponse2003**](InlineResponse2003.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/hal+json


## requestFWlFMQIDPX

> InlineResponse202 requestFWlFMQIDPX(opts)

Create a Network

### Example

```javascript
import UntitledApi from 'untitled_api';

let apiInstance = new UntitledApi.DefaultApi();
let opts = {
  'inlineObject': new UntitledApi.InlineObject() // InlineObject | 
};
apiInstance.requestFWlFMQIDPX(opts, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **inlineObject** | [**InlineObject**](InlineObject.md)|  | [optional] 

### Return type

[**InlineResponse202**](InlineResponse202.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/hal+json


## requestGijVCEoMlM

> InlineResponse2006 requestGijVCEoMlM()

Get the list of AppWANs

### Example

```javascript
import UntitledApi from 'untitled_api';

let apiInstance = new UntitledApi.DefaultApi();
apiInstance.requestGijVCEoMlM((error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters

This endpoint does not need any parameter.

### Return type

[**InlineResponse2006**](InlineResponse2006.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/hal+json


## requestHp1b9GiLax

> InlineResponse2004 requestHp1b9GiLax()

Get an Edge Router Policy

### Example

```javascript
import UntitledApi from 'untitled_api';

let apiInstance = new UntitledApi.DefaultApi();
apiInstance.requestHp1b9GiLax((error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters

This endpoint does not need any parameter.

### Return type

[**InlineResponse2004**](InlineResponse2004.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/hal+json


## requestIAJViYLviu

> InlineResponse2024 requestIAJViYLviu(networkId)

Delete a Network

### Example

```javascript
import UntitledApi from 'untitled_api';

let apiInstance = new UntitledApi.DefaultApi();
let networkId = "networkId_example"; // String | 
apiInstance.requestIAJViYLviu(networkId, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **networkId** | **String**|  | 

### Return type

[**InlineResponse2024**](InlineResponse2024.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/hal+json


## requestK9ajDJ8vUS

> InlineResponse20017 requestK9ajDJ8vUS()

Get the list of Network Groups

### Example

```javascript
import UntitledApi from 'untitled_api';

let apiInstance = new UntitledApi.DefaultApi();
apiInstance.requestK9ajDJ8vUS((error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters

This endpoint does not need any parameter.

### Return type

[**InlineResponse20017**](InlineResponse20017.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## requestKkeR9gNy25

> InlineResponse200 requestKkeR9gNy25(appWanId)

Get an AppWAN

### Example

```javascript
import UntitledApi from 'untitled_api';

let apiInstance = new UntitledApi.DefaultApi();
let appWanId = "appWanId_example"; // String | 
apiInstance.requestKkeR9gNy25(appWanId, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **appWanId** | **String**|  | 

### Return type

[**InlineResponse200**](InlineResponse200.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/hal+json


## requestLOXfQSs8GE

> InlineResponse20015 requestLOXfQSs8GE()

Get a Network Configuration profile

e.g. small, medium, large

### Example

```javascript
import UntitledApi from 'untitled_api';

let apiInstance = new UntitledApi.DefaultApi();
apiInstance.requestLOXfQSs8GE((error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters

This endpoint does not need any parameter.

### Return type

[**InlineResponse20015**](InlineResponse20015.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/hal+json


## requestLgKxU4ph9t

> InlineResponse2004EmbeddedEdgeRouterPolicyList requestLgKxU4ph9t(opts)

Create an Edge Router Policy

### Example

```javascript
import UntitledApi from 'untitled_api';

let apiInstance = new UntitledApi.DefaultApi();
let opts = {
  'inlineObject2': new UntitledApi.InlineObject2() // InlineObject2 | 
};
apiInstance.requestLgKxU4ph9t(opts, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **inlineObject2** | [**InlineObject2**](InlineObject2.md)|  | [optional] 

### Return type

[**InlineResponse2004EmbeddedEdgeRouterPolicyList**](InlineResponse2004EmbeddedEdgeRouterPolicyList.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/hal+json


## requestLopoFtq4ih

> InlineResponse2021 requestLopoFtq4ih(opts)

Create a Service

### Example

```javascript
import UntitledApi from 'untitled_api';

let apiInstance = new UntitledApi.DefaultApi();
let opts = {
  'inlineObject1': new UntitledApi.InlineObject1() // InlineObject1 | 
};
apiInstance.requestLopoFtq4ih(opts, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **inlineObject1** | [**InlineObject1**](InlineObject1.md)|  | [optional] 

### Return type

[**InlineResponse2021**](InlineResponse2021.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/hal+json


## requestMpyYtIiS6x

> InlineResponse20016 requestMpyYtIiS6x()

Get the identity of the caller&#39;s API account

### Example

```javascript
import UntitledApi from 'untitled_api';

let apiInstance = new UntitledApi.DefaultApi();
apiInstance.requestMpyYtIiS6x((error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters

This endpoint does not need any parameter.

### Return type

[**InlineResponse20016**](InlineResponse20016.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## requestN6GjgPLO4v

> InlineResponse20014 requestN6GjgPLO4v(organizationId)

Get an Organization

### Example

```javascript
import UntitledApi from 'untitled_api';

let apiInstance = new UntitledApi.DefaultApi();
let organizationId = "organizationId_example"; // String | 
apiInstance.requestN6GjgPLO4v(organizationId, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **organizationId** | **String**|  | 

### Return type

[**InlineResponse20014**](InlineResponse20014.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## requestNXoV6K2f0Q

> InlineResponse200 requestNXoV6K2f0Q(opts)

Create an AppWAN

### Example

```javascript
import UntitledApi from 'untitled_api';

let apiInstance = new UntitledApi.DefaultApi();
let opts = {
  'inlineObject4': new UntitledApi.InlineObject4() // InlineObject4 | 
};
apiInstance.requestNXoV6K2f0Q(opts, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **inlineObject4** | [**InlineObject4**](InlineObject4.md)|  | [optional] 

### Return type

[**InlineResponse200**](InlineResponse200.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/hal+json


## requestOiIAfX2VUs

> InlineResponse2001 requestOiIAfX2VUs()

Get the list of Networks

### Example

```javascript
import UntitledApi from 'untitled_api';

let apiInstance = new UntitledApi.DefaultApi();
apiInstance.requestOiIAfX2VUs((error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters

This endpoint does not need any parameter.

### Return type

[**InlineResponse2001**](InlineResponse2001.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/hal+json


## requestPBaaiO3B0d

> InlineResponse2022 requestPBaaiO3B0d(serviceId)

Delete a Service

### Example

```javascript
import UntitledApi from 'untitled_api';

let apiInstance = new UntitledApi.DefaultApi();
let serviceId = "serviceId_example"; // String | 
apiInstance.requestPBaaiO3B0d(serviceId, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **serviceId** | **String**|  | 

### Return type

[**InlineResponse2022**](InlineResponse2022.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/hal+json, application/json


## requestPyR6aUP5mi

> InlineResponse2025 requestPyR6aUP5mi(opts)

Create an Edge Router

### Example

```javascript
import UntitledApi from 'untitled_api';

let apiInstance = new UntitledApi.DefaultApi();
let opts = {
  'inlineObject6': new UntitledApi.InlineObject6() // InlineObject6 | 
};
apiInstance.requestPyR6aUP5mi(opts, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **inlineObject6** | [**InlineObject6**](InlineObject6.md)|  | [optional] 

### Return type

[**InlineResponse2025**](InlineResponse2025.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/hal+json


## requestQ0b3cbDW8S

> InlineResponse20010 requestQ0b3cbDW8S()

Get the list of Posture Checks

### Example

```javascript
import UntitledApi from 'untitled_api';

let apiInstance = new UntitledApi.DefaultApi();
apiInstance.requestQ0b3cbDW8S((error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters

This endpoint does not need any parameter.

### Return type

[**InlineResponse20010**](InlineResponse20010.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/hal+json


## requestTeqMGeER5F

> InlineResponse20013 requestTeqMGeER5F(networkId)

Get a Network

### Example

```javascript
import UntitledApi from 'untitled_api';

let apiInstance = new UntitledApi.DefaultApi();
let networkId = "networkId_example"; // String | 
apiInstance.requestTeqMGeER5F(networkId, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **networkId** | **String**|  | 

### Return type

[**InlineResponse20013**](InlineResponse20013.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/hal+json


## requestTsyuwlAejK

> InlineResponse2007EmbeddedEndpointList requestTsyuwlAejK(endpointId)

Get an Endpoint

### Example

```javascript
import UntitledApi from 'untitled_api';

let apiInstance = new UntitledApi.DefaultApi();
let endpointId = "endpointId_example"; // String | 
apiInstance.requestTsyuwlAejK(endpointId, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **endpointId** | **String**|  | 

### Return type

[**InlineResponse2007EmbeddedEndpointList**](InlineResponse2007EmbeddedEndpointList.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/hal+json


## requestVIzB1k6Uqb

> InlineResponse2023 requestVIzB1k6Uqb(serviceId, opts)

Change some properties of a Service

### Example

```javascript
import UntitledApi from 'untitled_api';

let apiInstance = new UntitledApi.DefaultApi();
let serviceId = "serviceId_example"; // String | 
let opts = {
  'inlineObject3': new UntitledApi.InlineObject3() // InlineObject3 | 
};
apiInstance.requestVIzB1k6Uqb(serviceId, opts, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **serviceId** | **String**|  | 
 **inlineObject3** | [**InlineObject3**](InlineObject3.md)|  | [optional] 

### Return type

[**InlineResponse2023**](InlineResponse2023.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/hal+json


## requestVeJCBUR9iO

> InlineResponse20011 requestVeJCBUR9iO(networkGroupId)

Get a Network Group

### Example

```javascript
import UntitledApi from 'untitled_api';

let apiInstance = new UntitledApi.DefaultApi();
let networkGroupId = "networkGroupId_example"; // String | 
apiInstance.requestVeJCBUR9iO(networkGroupId, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **networkGroupId** | **String**|  | 

### Return type

[**InlineResponse20011**](InlineResponse20011.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## requestVfuaDMeTRP

> InlineResponse2002 requestVfuaDMeTRP()

Get the list of data centers

### Example

```javascript
import UntitledApi from 'untitled_api';

let apiInstance = new UntitledApi.DefaultApi();
apiInstance.requestVfuaDMeTRP((error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters

This endpoint does not need any parameter.

### Return type

[**InlineResponse2002**](InlineResponse2002.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/hal+json


## requestYLsf4m9TTT

> InlineResponse2005 requestYLsf4m9TTT(serviceId)

Get a Service

### Example

```javascript
import UntitledApi from 'untitled_api';

let apiInstance = new UntitledApi.DefaultApi();
let serviceId = "serviceId_example"; // String | 
apiInstance.requestYLsf4m9TTT(serviceId, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **serviceId** | **String**|  | 

### Return type

[**InlineResponse2005**](InlineResponse2005.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/hal+json


## requestYhzDAw1Ks4

> InlineResponse20018 requestYhzDAw1Ks4()

Get an Edge Router

### Example

```javascript
import UntitledApi from 'untitled_api';

let apiInstance = new UntitledApi.DefaultApi();
apiInstance.requestYhzDAw1Ks4((error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters

This endpoint does not need any parameter.

### Return type

[**InlineResponse20018**](InlineResponse20018.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/hal+json

