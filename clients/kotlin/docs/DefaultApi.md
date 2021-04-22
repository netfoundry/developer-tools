# DefaultApi

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


<a name="request4Q1qU3c4dk"></a>
# **request4Q1qU3c4dk**
> InlineResponse20012 request4Q1qU3c4dk(edgeRouterId)

Get an Edge Router

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = DefaultApi()
val edgeRouterId : kotlin.String = edgeRouterId_example // kotlin.String | 
try {
    val result : InlineResponse20012 = apiInstance.request4Q1qU3c4dk(edgeRouterId)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling DefaultApi#request4Q1qU3c4dk")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling DefaultApi#request4Q1qU3c4dk")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **edgeRouterId** | **kotlin.String**|  |

### Return type

[**InlineResponse20012**](InlineResponse20012.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/hal+json

<a name="request9sDuPizCiu"></a>
# **request9sDuPizCiu**
> InlineResponse2008 request9sDuPizCiu(inlineObject5)

Create an Endpoint

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = DefaultApi()
val inlineObject5 : InlineObject5 =  // InlineObject5 | 
try {
    val result : InlineResponse2008 = apiInstance.request9sDuPizCiu(inlineObject5)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling DefaultApi#request9sDuPizCiu")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling DefaultApi#request9sDuPizCiu")
    e.printStackTrace()
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

<a name="requestA8syyaPZnw"></a>
# **requestA8syyaPZnw**
> InlineResponse20019 requestA8syyaPZnw()

Get the list of Network product versions

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = DefaultApi()
try {
    val result : InlineResponse20019 = apiInstance.requestA8syyaPZnw()
    println(result)
} catch (e: ClientException) {
    println("4xx response calling DefaultApi#requestA8syyaPZnw")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling DefaultApi#requestA8syyaPZnw")
    e.printStackTrace()
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

<a name="requestAYFhAQd5pn"></a>
# **requestAYFhAQd5pn**
> InlineResponse2007 requestAYFhAQd5pn()

Get an Endpoint

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = DefaultApi()
try {
    val result : InlineResponse2007 = apiInstance.requestAYFhAQd5pn()
    println(result)
} catch (e: ClientException) {
    println("4xx response calling DefaultApi#requestAYFhAQd5pn")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling DefaultApi#requestAYFhAQd5pn")
    e.printStackTrace()
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

<a name="requestAuarCsIhkJ"></a>
# **requestAuarCsIhkJ**
> InlineResponse2009 requestAuarCsIhkJ(edgeRouterId)

Get the registration information for an Edge Router

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = DefaultApi()
val edgeRouterId : kotlin.String = edgeRouterId_example // kotlin.String | 
try {
    val result : InlineResponse2009 = apiInstance.requestAuarCsIhkJ(edgeRouterId)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling DefaultApi#requestAuarCsIhkJ")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling DefaultApi#requestAuarCsIhkJ")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **edgeRouterId** | **kotlin.String**|  |

### Return type

[**InlineResponse2009**](InlineResponse2009.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/hal+json

<a name="requestBtgg9ZlC0e"></a>
# **requestBtgg9ZlC0e**
> InlineResponse2004EmbeddedEdgeRouterPolicyList requestBtgg9ZlC0e(edgeRouterPolicyId)

Get an Edge Router Policy

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = DefaultApi()
val edgeRouterPolicyId : kotlin.String = edgeRouterPolicyId_example // kotlin.String | 
try {
    val result : InlineResponse2004EmbeddedEdgeRouterPolicyList = apiInstance.requestBtgg9ZlC0e(edgeRouterPolicyId)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling DefaultApi#requestBtgg9ZlC0e")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling DefaultApi#requestBtgg9ZlC0e")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **edgeRouterPolicyId** | **kotlin.String**|  |

### Return type

[**InlineResponse2004EmbeddedEdgeRouterPolicyList**](InlineResponse2004EmbeddedEdgeRouterPolicyList.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/hal+json

<a name="requestE1IexRfvZg"></a>
# **requestE1IexRfvZg**
> InlineResponse2003 requestE1IexRfvZg()

Get the list of Services

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = DefaultApi()
try {
    val result : InlineResponse2003 = apiInstance.requestE1IexRfvZg()
    println(result)
} catch (e: ClientException) {
    println("4xx response calling DefaultApi#requestE1IexRfvZg")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling DefaultApi#requestE1IexRfvZg")
    e.printStackTrace()
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

<a name="requestFWlFMQIDPX"></a>
# **requestFWlFMQIDPX**
> InlineResponse202 requestFWlFMQIDPX(inlineObject)

Create a Network

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = DefaultApi()
val inlineObject : InlineObject =  // InlineObject | 
try {
    val result : InlineResponse202 = apiInstance.requestFWlFMQIDPX(inlineObject)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling DefaultApi#requestFWlFMQIDPX")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling DefaultApi#requestFWlFMQIDPX")
    e.printStackTrace()
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

<a name="requestGijVCEoMlM"></a>
# **requestGijVCEoMlM**
> InlineResponse2006 requestGijVCEoMlM()

Get the list of AppWANs

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = DefaultApi()
try {
    val result : InlineResponse2006 = apiInstance.requestGijVCEoMlM()
    println(result)
} catch (e: ClientException) {
    println("4xx response calling DefaultApi#requestGijVCEoMlM")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling DefaultApi#requestGijVCEoMlM")
    e.printStackTrace()
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

<a name="requestHp1b9GiLax"></a>
# **requestHp1b9GiLax**
> InlineResponse2004 requestHp1b9GiLax()

Get an Edge Router Policy

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = DefaultApi()
try {
    val result : InlineResponse2004 = apiInstance.requestHp1b9GiLax()
    println(result)
} catch (e: ClientException) {
    println("4xx response calling DefaultApi#requestHp1b9GiLax")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling DefaultApi#requestHp1b9GiLax")
    e.printStackTrace()
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

<a name="requestIAJViYLviu"></a>
# **requestIAJViYLviu**
> InlineResponse2024 requestIAJViYLviu(networkId)

Delete a Network

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = DefaultApi()
val networkId : kotlin.String = networkId_example // kotlin.String | 
try {
    val result : InlineResponse2024 = apiInstance.requestIAJViYLviu(networkId)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling DefaultApi#requestIAJViYLviu")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling DefaultApi#requestIAJViYLviu")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **networkId** | **kotlin.String**|  |

### Return type

[**InlineResponse2024**](InlineResponse2024.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/hal+json

<a name="requestK9ajDJ8vUS"></a>
# **requestK9ajDJ8vUS**
> InlineResponse20017 requestK9ajDJ8vUS()

Get the list of Network Groups

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = DefaultApi()
try {
    val result : InlineResponse20017 = apiInstance.requestK9ajDJ8vUS()
    println(result)
} catch (e: ClientException) {
    println("4xx response calling DefaultApi#requestK9ajDJ8vUS")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling DefaultApi#requestK9ajDJ8vUS")
    e.printStackTrace()
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

<a name="requestKkeR9gNy25"></a>
# **requestKkeR9gNy25**
> InlineResponse200 requestKkeR9gNy25(appWanId)

Get an AppWAN

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = DefaultApi()
val appWanId : kotlin.String = appWanId_example // kotlin.String | 
try {
    val result : InlineResponse200 = apiInstance.requestKkeR9gNy25(appWanId)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling DefaultApi#requestKkeR9gNy25")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling DefaultApi#requestKkeR9gNy25")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **appWanId** | **kotlin.String**|  |

### Return type

[**InlineResponse200**](InlineResponse200.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/hal+json

<a name="requestLOXfQSs8GE"></a>
# **requestLOXfQSs8GE**
> InlineResponse20015 requestLOXfQSs8GE()

Get a Network Configuration profile

e.g. small, medium, large

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = DefaultApi()
try {
    val result : InlineResponse20015 = apiInstance.requestLOXfQSs8GE()
    println(result)
} catch (e: ClientException) {
    println("4xx response calling DefaultApi#requestLOXfQSs8GE")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling DefaultApi#requestLOXfQSs8GE")
    e.printStackTrace()
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

<a name="requestLgKxU4ph9t"></a>
# **requestLgKxU4ph9t**
> InlineResponse2004EmbeddedEdgeRouterPolicyList requestLgKxU4ph9t(inlineObject2)

Create an Edge Router Policy

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = DefaultApi()
val inlineObject2 : InlineObject2 =  // InlineObject2 | 
try {
    val result : InlineResponse2004EmbeddedEdgeRouterPolicyList = apiInstance.requestLgKxU4ph9t(inlineObject2)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling DefaultApi#requestLgKxU4ph9t")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling DefaultApi#requestLgKxU4ph9t")
    e.printStackTrace()
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

<a name="requestLopoFtq4ih"></a>
# **requestLopoFtq4ih**
> InlineResponse2021 requestLopoFtq4ih(inlineObject1)

Create a Service

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = DefaultApi()
val inlineObject1 : InlineObject1 =  // InlineObject1 | 
try {
    val result : InlineResponse2021 = apiInstance.requestLopoFtq4ih(inlineObject1)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling DefaultApi#requestLopoFtq4ih")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling DefaultApi#requestLopoFtq4ih")
    e.printStackTrace()
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

<a name="requestMpyYtIiS6x"></a>
# **requestMpyYtIiS6x**
> InlineResponse20016 requestMpyYtIiS6x()

Get the identity of the caller&#39;s API account

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = DefaultApi()
try {
    val result : InlineResponse20016 = apiInstance.requestMpyYtIiS6x()
    println(result)
} catch (e: ClientException) {
    println("4xx response calling DefaultApi#requestMpyYtIiS6x")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling DefaultApi#requestMpyYtIiS6x")
    e.printStackTrace()
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

<a name="requestN6GjgPLO4v"></a>
# **requestN6GjgPLO4v**
> InlineResponse20014 requestN6GjgPLO4v(organizationId)

Get an Organization

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = DefaultApi()
val organizationId : kotlin.String = organizationId_example // kotlin.String | 
try {
    val result : InlineResponse20014 = apiInstance.requestN6GjgPLO4v(organizationId)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling DefaultApi#requestN6GjgPLO4v")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling DefaultApi#requestN6GjgPLO4v")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **organizationId** | **kotlin.String**|  |

### Return type

[**InlineResponse20014**](InlineResponse20014.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="requestNXoV6K2f0Q"></a>
# **requestNXoV6K2f0Q**
> InlineResponse200 requestNXoV6K2f0Q(inlineObject4)

Create an AppWAN

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = DefaultApi()
val inlineObject4 : InlineObject4 =  // InlineObject4 | 
try {
    val result : InlineResponse200 = apiInstance.requestNXoV6K2f0Q(inlineObject4)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling DefaultApi#requestNXoV6K2f0Q")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling DefaultApi#requestNXoV6K2f0Q")
    e.printStackTrace()
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

<a name="requestOiIAfX2VUs"></a>
# **requestOiIAfX2VUs**
> InlineResponse2001 requestOiIAfX2VUs()

Get the list of Networks

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = DefaultApi()
try {
    val result : InlineResponse2001 = apiInstance.requestOiIAfX2VUs()
    println(result)
} catch (e: ClientException) {
    println("4xx response calling DefaultApi#requestOiIAfX2VUs")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling DefaultApi#requestOiIAfX2VUs")
    e.printStackTrace()
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

<a name="requestPBaaiO3B0d"></a>
# **requestPBaaiO3B0d**
> InlineResponse2022 requestPBaaiO3B0d(serviceId)

Delete a Service

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = DefaultApi()
val serviceId : kotlin.String = serviceId_example // kotlin.String | 
try {
    val result : InlineResponse2022 = apiInstance.requestPBaaiO3B0d(serviceId)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling DefaultApi#requestPBaaiO3B0d")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling DefaultApi#requestPBaaiO3B0d")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **serviceId** | **kotlin.String**|  |

### Return type

[**InlineResponse2022**](InlineResponse2022.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/hal+json, application/json

<a name="requestPyR6aUP5mi"></a>
# **requestPyR6aUP5mi**
> InlineResponse2025 requestPyR6aUP5mi(inlineObject6)

Create an Edge Router

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = DefaultApi()
val inlineObject6 : InlineObject6 =  // InlineObject6 | 
try {
    val result : InlineResponse2025 = apiInstance.requestPyR6aUP5mi(inlineObject6)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling DefaultApi#requestPyR6aUP5mi")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling DefaultApi#requestPyR6aUP5mi")
    e.printStackTrace()
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

<a name="requestQ0b3cbDW8S"></a>
# **requestQ0b3cbDW8S**
> InlineResponse20010 requestQ0b3cbDW8S()

Get the list of Posture Checks

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = DefaultApi()
try {
    val result : InlineResponse20010 = apiInstance.requestQ0b3cbDW8S()
    println(result)
} catch (e: ClientException) {
    println("4xx response calling DefaultApi#requestQ0b3cbDW8S")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling DefaultApi#requestQ0b3cbDW8S")
    e.printStackTrace()
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

<a name="requestTeqMGeER5F"></a>
# **requestTeqMGeER5F**
> InlineResponse20013 requestTeqMGeER5F(networkId)

Get a Network

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = DefaultApi()
val networkId : kotlin.String = networkId_example // kotlin.String | 
try {
    val result : InlineResponse20013 = apiInstance.requestTeqMGeER5F(networkId)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling DefaultApi#requestTeqMGeER5F")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling DefaultApi#requestTeqMGeER5F")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **networkId** | **kotlin.String**|  |

### Return type

[**InlineResponse20013**](InlineResponse20013.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/hal+json

<a name="requestTsyuwlAejK"></a>
# **requestTsyuwlAejK**
> InlineResponse2007EmbeddedEndpointList requestTsyuwlAejK(endpointId)

Get an Endpoint

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = DefaultApi()
val endpointId : kotlin.String = endpointId_example // kotlin.String | 
try {
    val result : InlineResponse2007EmbeddedEndpointList = apiInstance.requestTsyuwlAejK(endpointId)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling DefaultApi#requestTsyuwlAejK")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling DefaultApi#requestTsyuwlAejK")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **endpointId** | **kotlin.String**|  |

### Return type

[**InlineResponse2007EmbeddedEndpointList**](InlineResponse2007EmbeddedEndpointList.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/hal+json

<a name="requestVIzB1k6Uqb"></a>
# **requestVIzB1k6Uqb**
> InlineResponse2023 requestVIzB1k6Uqb(serviceId, inlineObject3)

Change some properties of a Service

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = DefaultApi()
val serviceId : kotlin.String = serviceId_example // kotlin.String | 
val inlineObject3 : InlineObject3 =  // InlineObject3 | 
try {
    val result : InlineResponse2023 = apiInstance.requestVIzB1k6Uqb(serviceId, inlineObject3)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling DefaultApi#requestVIzB1k6Uqb")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling DefaultApi#requestVIzB1k6Uqb")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **serviceId** | **kotlin.String**|  |
 **inlineObject3** | [**InlineObject3**](InlineObject3.md)|  | [optional]

### Return type

[**InlineResponse2023**](InlineResponse2023.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/hal+json

<a name="requestVeJCBUR9iO"></a>
# **requestVeJCBUR9iO**
> InlineResponse20011 requestVeJCBUR9iO(networkGroupId)

Get a Network Group

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = DefaultApi()
val networkGroupId : kotlin.String = networkGroupId_example // kotlin.String | 
try {
    val result : InlineResponse20011 = apiInstance.requestVeJCBUR9iO(networkGroupId)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling DefaultApi#requestVeJCBUR9iO")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling DefaultApi#requestVeJCBUR9iO")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **networkGroupId** | **kotlin.String**|  |

### Return type

[**InlineResponse20011**](InlineResponse20011.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="requestVfuaDMeTRP"></a>
# **requestVfuaDMeTRP**
> InlineResponse2002 requestVfuaDMeTRP()

Get the list of data centers

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = DefaultApi()
try {
    val result : InlineResponse2002 = apiInstance.requestVfuaDMeTRP()
    println(result)
} catch (e: ClientException) {
    println("4xx response calling DefaultApi#requestVfuaDMeTRP")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling DefaultApi#requestVfuaDMeTRP")
    e.printStackTrace()
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

<a name="requestYLsf4m9TTT"></a>
# **requestYLsf4m9TTT**
> InlineResponse2005 requestYLsf4m9TTT(serviceId)

Get a Service

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = DefaultApi()
val serviceId : kotlin.String = serviceId_example // kotlin.String | 
try {
    val result : InlineResponse2005 = apiInstance.requestYLsf4m9TTT(serviceId)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling DefaultApi#requestYLsf4m9TTT")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling DefaultApi#requestYLsf4m9TTT")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **serviceId** | **kotlin.String**|  |

### Return type

[**InlineResponse2005**](InlineResponse2005.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/hal+json

<a name="requestYhzDAw1Ks4"></a>
# **requestYhzDAw1Ks4**
> InlineResponse20018 requestYhzDAw1Ks4()

Get an Edge Router

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = DefaultApi()
try {
    val result : InlineResponse20018 = apiInstance.requestYhzDAw1Ks4()
    println(result)
} catch (e: ClientException) {
    println("4xx response calling DefaultApi#requestYhzDAw1Ks4")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling DefaultApi#requestYhzDAw1Ks4")
    e.printStackTrace()
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

