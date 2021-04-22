# openapi.api.DefaultApi

## Load the API package
```dart
import 'package:openapi/api.dart';
```

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


# **request4Q1qU3c4dk**
> InlineResponse20012 request4Q1qU3c4dk(edgeRouterId)

Get an Edge Router

### Example 
```dart
import 'package:openapi/api.dart';

var api_instance = DefaultApi();
var edgeRouterId = edgeRouterId_example; // String | 

try { 
    var result = api_instance.request4Q1qU3c4dk(edgeRouterId);
    print(result);
} catch (e) {
    print("Exception when calling DefaultApi->request4Q1qU3c4dk: $e\n");
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **edgeRouterId** | **String**|  | [default to null]

### Return type

[**InlineResponse20012**](InlineResponse20012.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/hal+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **request9sDuPizCiu**
> InlineResponse2008 request9sDuPizCiu(inlineObject5)

Create an Endpoint

### Example 
```dart
import 'package:openapi/api.dart';

var api_instance = DefaultApi();
var inlineObject5 = InlineObject5(); // InlineObject5 | 

try { 
    var result = api_instance.request9sDuPizCiu(inlineObject5);
    print(result);
} catch (e) {
    print("Exception when calling DefaultApi->request9sDuPizCiu: $e\n");
}
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

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **requestA8syyaPZnw**
> InlineResponse20019 requestA8syyaPZnw()

Get the list of Network product versions

### Example 
```dart
import 'package:openapi/api.dart';

var api_instance = DefaultApi();

try { 
    var result = api_instance.requestA8syyaPZnw();
    print(result);
} catch (e) {
    print("Exception when calling DefaultApi->requestA8syyaPZnw: $e\n");
}
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

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **requestAYFhAQd5pn**
> InlineResponse2007 requestAYFhAQd5pn()

Get an Endpoint

### Example 
```dart
import 'package:openapi/api.dart';

var api_instance = DefaultApi();

try { 
    var result = api_instance.requestAYFhAQd5pn();
    print(result);
} catch (e) {
    print("Exception when calling DefaultApi->requestAYFhAQd5pn: $e\n");
}
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

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **requestAuarCsIhkJ**
> InlineResponse2009 requestAuarCsIhkJ(edgeRouterId)

Get the registration information for an Edge Router

### Example 
```dart
import 'package:openapi/api.dart';

var api_instance = DefaultApi();
var edgeRouterId = edgeRouterId_example; // String | 

try { 
    var result = api_instance.requestAuarCsIhkJ(edgeRouterId);
    print(result);
} catch (e) {
    print("Exception when calling DefaultApi->requestAuarCsIhkJ: $e\n");
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **edgeRouterId** | **String**|  | [default to null]

### Return type

[**InlineResponse2009**](InlineResponse2009.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/hal+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **requestBtgg9ZlC0e**
> InlineResponse2004EmbeddedEdgeRouterPolicyList requestBtgg9ZlC0e(edgeRouterPolicyId)

Get an Edge Router Policy

### Example 
```dart
import 'package:openapi/api.dart';

var api_instance = DefaultApi();
var edgeRouterPolicyId = edgeRouterPolicyId_example; // String | 

try { 
    var result = api_instance.requestBtgg9ZlC0e(edgeRouterPolicyId);
    print(result);
} catch (e) {
    print("Exception when calling DefaultApi->requestBtgg9ZlC0e: $e\n");
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **edgeRouterPolicyId** | **String**|  | [default to null]

### Return type

[**InlineResponse2004EmbeddedEdgeRouterPolicyList**](InlineResponse2004EmbeddedEdgeRouterPolicyList.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/hal+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **requestE1IexRfvZg**
> InlineResponse2003 requestE1IexRfvZg()

Get the list of Services

### Example 
```dart
import 'package:openapi/api.dart';

var api_instance = DefaultApi();

try { 
    var result = api_instance.requestE1IexRfvZg();
    print(result);
} catch (e) {
    print("Exception when calling DefaultApi->requestE1IexRfvZg: $e\n");
}
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

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **requestFWlFMQIDPX**
> InlineResponse202 requestFWlFMQIDPX(inlineObject)

Create a Network

### Example 
```dart
import 'package:openapi/api.dart';

var api_instance = DefaultApi();
var inlineObject = InlineObject(); // InlineObject | 

try { 
    var result = api_instance.requestFWlFMQIDPX(inlineObject);
    print(result);
} catch (e) {
    print("Exception when calling DefaultApi->requestFWlFMQIDPX: $e\n");
}
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

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **requestGijVCEoMlM**
> InlineResponse2006 requestGijVCEoMlM()

Get the list of AppWANs

### Example 
```dart
import 'package:openapi/api.dart';

var api_instance = DefaultApi();

try { 
    var result = api_instance.requestGijVCEoMlM();
    print(result);
} catch (e) {
    print("Exception when calling DefaultApi->requestGijVCEoMlM: $e\n");
}
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

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **requestHp1b9GiLax**
> InlineResponse2004 requestHp1b9GiLax()

Get an Edge Router Policy

### Example 
```dart
import 'package:openapi/api.dart';

var api_instance = DefaultApi();

try { 
    var result = api_instance.requestHp1b9GiLax();
    print(result);
} catch (e) {
    print("Exception when calling DefaultApi->requestHp1b9GiLax: $e\n");
}
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

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **requestIAJViYLviu**
> InlineResponse2024 requestIAJViYLviu(networkId)

Delete a Network

### Example 
```dart
import 'package:openapi/api.dart';

var api_instance = DefaultApi();
var networkId = networkId_example; // String | 

try { 
    var result = api_instance.requestIAJViYLviu(networkId);
    print(result);
} catch (e) {
    print("Exception when calling DefaultApi->requestIAJViYLviu: $e\n");
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **networkId** | **String**|  | [default to null]

### Return type

[**InlineResponse2024**](InlineResponse2024.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/hal+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **requestK9ajDJ8vUS**
> InlineResponse20017 requestK9ajDJ8vUS()

Get the list of Network Groups

### Example 
```dart
import 'package:openapi/api.dart';

var api_instance = DefaultApi();

try { 
    var result = api_instance.requestK9ajDJ8vUS();
    print(result);
} catch (e) {
    print("Exception when calling DefaultApi->requestK9ajDJ8vUS: $e\n");
}
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

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **requestKkeR9gNy25**
> InlineResponse200 requestKkeR9gNy25(appWanId)

Get an AppWAN

### Example 
```dart
import 'package:openapi/api.dart';

var api_instance = DefaultApi();
var appWanId = appWanId_example; // String | 

try { 
    var result = api_instance.requestKkeR9gNy25(appWanId);
    print(result);
} catch (e) {
    print("Exception when calling DefaultApi->requestKkeR9gNy25: $e\n");
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **appWanId** | **String**|  | [default to null]

### Return type

[**InlineResponse200**](InlineResponse200.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/hal+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **requestLOXfQSs8GE**
> InlineResponse20015 requestLOXfQSs8GE()

Get a Network Configuration profile

e.g. small, medium, large

### Example 
```dart
import 'package:openapi/api.dart';

var api_instance = DefaultApi();

try { 
    var result = api_instance.requestLOXfQSs8GE();
    print(result);
} catch (e) {
    print("Exception when calling DefaultApi->requestLOXfQSs8GE: $e\n");
}
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

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **requestLgKxU4ph9t**
> InlineResponse2004EmbeddedEdgeRouterPolicyList requestLgKxU4ph9t(inlineObject2)

Create an Edge Router Policy

### Example 
```dart
import 'package:openapi/api.dart';

var api_instance = DefaultApi();
var inlineObject2 = InlineObject2(); // InlineObject2 | 

try { 
    var result = api_instance.requestLgKxU4ph9t(inlineObject2);
    print(result);
} catch (e) {
    print("Exception when calling DefaultApi->requestLgKxU4ph9t: $e\n");
}
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

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **requestLopoFtq4ih**
> InlineResponse2021 requestLopoFtq4ih(inlineObject1)

Create a Service

### Example 
```dart
import 'package:openapi/api.dart';

var api_instance = DefaultApi();
var inlineObject1 = InlineObject1(); // InlineObject1 | 

try { 
    var result = api_instance.requestLopoFtq4ih(inlineObject1);
    print(result);
} catch (e) {
    print("Exception when calling DefaultApi->requestLopoFtq4ih: $e\n");
}
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

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **requestMpyYtIiS6x**
> InlineResponse20016 requestMpyYtIiS6x()

Get the identity of the caller's API account

### Example 
```dart
import 'package:openapi/api.dart';

var api_instance = DefaultApi();

try { 
    var result = api_instance.requestMpyYtIiS6x();
    print(result);
} catch (e) {
    print("Exception when calling DefaultApi->requestMpyYtIiS6x: $e\n");
}
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

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **requestN6GjgPLO4v**
> InlineResponse20014 requestN6GjgPLO4v(organizationId)

Get an Organization

### Example 
```dart
import 'package:openapi/api.dart';

var api_instance = DefaultApi();
var organizationId = organizationId_example; // String | 

try { 
    var result = api_instance.requestN6GjgPLO4v(organizationId);
    print(result);
} catch (e) {
    print("Exception when calling DefaultApi->requestN6GjgPLO4v: $e\n");
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **organizationId** | **String**|  | [default to null]

### Return type

[**InlineResponse20014**](InlineResponse20014.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **requestNXoV6K2f0Q**
> InlineResponse200 requestNXoV6K2f0Q(inlineObject4)

Create an AppWAN

### Example 
```dart
import 'package:openapi/api.dart';

var api_instance = DefaultApi();
var inlineObject4 = InlineObject4(); // InlineObject4 | 

try { 
    var result = api_instance.requestNXoV6K2f0Q(inlineObject4);
    print(result);
} catch (e) {
    print("Exception when calling DefaultApi->requestNXoV6K2f0Q: $e\n");
}
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

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **requestOiIAfX2VUs**
> InlineResponse2001 requestOiIAfX2VUs()

Get the list of Networks

### Example 
```dart
import 'package:openapi/api.dart';

var api_instance = DefaultApi();

try { 
    var result = api_instance.requestOiIAfX2VUs();
    print(result);
} catch (e) {
    print("Exception when calling DefaultApi->requestOiIAfX2VUs: $e\n");
}
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

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **requestPBaaiO3B0d**
> InlineResponse2022 requestPBaaiO3B0d(serviceId)

Delete a Service

### Example 
```dart
import 'package:openapi/api.dart';

var api_instance = DefaultApi();
var serviceId = serviceId_example; // String | 

try { 
    var result = api_instance.requestPBaaiO3B0d(serviceId);
    print(result);
} catch (e) {
    print("Exception when calling DefaultApi->requestPBaaiO3B0d: $e\n");
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **serviceId** | **String**|  | [default to null]

### Return type

[**InlineResponse2022**](InlineResponse2022.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/hal+json, application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **requestPyR6aUP5mi**
> InlineResponse2025 requestPyR6aUP5mi(inlineObject6)

Create an Edge Router

### Example 
```dart
import 'package:openapi/api.dart';

var api_instance = DefaultApi();
var inlineObject6 = InlineObject6(); // InlineObject6 | 

try { 
    var result = api_instance.requestPyR6aUP5mi(inlineObject6);
    print(result);
} catch (e) {
    print("Exception when calling DefaultApi->requestPyR6aUP5mi: $e\n");
}
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

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **requestQ0b3cbDW8S**
> InlineResponse20010 requestQ0b3cbDW8S()

Get the list of Posture Checks

### Example 
```dart
import 'package:openapi/api.dart';

var api_instance = DefaultApi();

try { 
    var result = api_instance.requestQ0b3cbDW8S();
    print(result);
} catch (e) {
    print("Exception when calling DefaultApi->requestQ0b3cbDW8S: $e\n");
}
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

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **requestTeqMGeER5F**
> InlineResponse20013 requestTeqMGeER5F(networkId)

Get a Network

### Example 
```dart
import 'package:openapi/api.dart';

var api_instance = DefaultApi();
var networkId = networkId_example; // String | 

try { 
    var result = api_instance.requestTeqMGeER5F(networkId);
    print(result);
} catch (e) {
    print("Exception when calling DefaultApi->requestTeqMGeER5F: $e\n");
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **networkId** | **String**|  | [default to null]

### Return type

[**InlineResponse20013**](InlineResponse20013.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/hal+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **requestTsyuwlAejK**
> InlineResponse2007EmbeddedEndpointList requestTsyuwlAejK(endpointId)

Get an Endpoint

### Example 
```dart
import 'package:openapi/api.dart';

var api_instance = DefaultApi();
var endpointId = endpointId_example; // String | 

try { 
    var result = api_instance.requestTsyuwlAejK(endpointId);
    print(result);
} catch (e) {
    print("Exception when calling DefaultApi->requestTsyuwlAejK: $e\n");
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **endpointId** | **String**|  | [default to null]

### Return type

[**InlineResponse2007EmbeddedEndpointList**](InlineResponse2007EmbeddedEndpointList.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/hal+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **requestVIzB1k6Uqb**
> InlineResponse2023 requestVIzB1k6Uqb(serviceId, inlineObject3)

Change some properties of a Service

### Example 
```dart
import 'package:openapi/api.dart';

var api_instance = DefaultApi();
var serviceId = serviceId_example; // String | 
var inlineObject3 = InlineObject3(); // InlineObject3 | 

try { 
    var result = api_instance.requestVIzB1k6Uqb(serviceId, inlineObject3);
    print(result);
} catch (e) {
    print("Exception when calling DefaultApi->requestVIzB1k6Uqb: $e\n");
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **serviceId** | **String**|  | [default to null]
 **inlineObject3** | [**InlineObject3**](InlineObject3.md)|  | [optional] 

### Return type

[**InlineResponse2023**](InlineResponse2023.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/hal+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **requestVeJCBUR9iO**
> InlineResponse20011 requestVeJCBUR9iO(networkGroupId)

Get a Network Group

### Example 
```dart
import 'package:openapi/api.dart';

var api_instance = DefaultApi();
var networkGroupId = networkGroupId_example; // String | 

try { 
    var result = api_instance.requestVeJCBUR9iO(networkGroupId);
    print(result);
} catch (e) {
    print("Exception when calling DefaultApi->requestVeJCBUR9iO: $e\n");
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **networkGroupId** | **String**|  | [default to null]

### Return type

[**InlineResponse20011**](InlineResponse20011.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **requestVfuaDMeTRP**
> InlineResponse2002 requestVfuaDMeTRP()

Get the list of data centers

### Example 
```dart
import 'package:openapi/api.dart';

var api_instance = DefaultApi();

try { 
    var result = api_instance.requestVfuaDMeTRP();
    print(result);
} catch (e) {
    print("Exception when calling DefaultApi->requestVfuaDMeTRP: $e\n");
}
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

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **requestYLsf4m9TTT**
> InlineResponse2005 requestYLsf4m9TTT(serviceId)

Get a Service

### Example 
```dart
import 'package:openapi/api.dart';

var api_instance = DefaultApi();
var serviceId = serviceId_example; // String | 

try { 
    var result = api_instance.requestYLsf4m9TTT(serviceId);
    print(result);
} catch (e) {
    print("Exception when calling DefaultApi->requestYLsf4m9TTT: $e\n");
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **serviceId** | **String**|  | [default to null]

### Return type

[**InlineResponse2005**](InlineResponse2005.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/hal+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **requestYhzDAw1Ks4**
> InlineResponse20018 requestYhzDAw1Ks4()

Get an Edge Router

### Example 
```dart
import 'package:openapi/api.dart';

var api_instance = DefaultApi();

try { 
    var result = api_instance.requestYhzDAw1Ks4();
    print(result);
} catch (e) {
    print("Exception when calling DefaultApi->requestYhzDAw1Ks4: $e\n");
}
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

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

