# DefaultAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**request4Q1qU3c4dk**](DefaultAPI.md#request4q1qu3c4dk) | **GET** /core/v2/edge-routers/{edgeRouterId} | Get an Edge Router
[**request9sDuPizCiu**](DefaultAPI.md#request9sdupizciu) | **POST** /core/v2/endpoints | Create an Endpoint
[**requestA8syyaPZnw**](DefaultAPI.md#requesta8syyapznw) | **GET** /product-metadata/v2/download-urls.json | Get the list of Network product versions
[**requestAYFhAQd5pn**](DefaultAPI.md#requestayfhaqd5pn) | **GET** /core/v2/endpoints | Get an Endpoint
[**requestAuarCsIhkJ**](DefaultAPI.md#requestauarcsihkj) | **POST** /core/v2/edge-routers/{edgeRouterId}/registration-key | Get the registration information for an Edge Router
[**requestBtgg9ZlC0e**](DefaultAPI.md#requestbtgg9zlc0e) | **GET** /core/v2/edge-router-policies/{edgeRouterPolicyId} | Get an Edge Router Policy
[**requestE1IexRfvZg**](DefaultAPI.md#requeste1iexrfvzg) | **GET** /core/v2/services | Get the list of Services
[**requestFWlFMQIDPX**](DefaultAPI.md#requestfwlfmqidpx) | **POST** /core/v2/networks | Create a Network
[**requestGijVCEoMlM**](DefaultAPI.md#requestgijvceomlm) | **GET** /core/v2/app-wans | Get the list of AppWANs
[**requestHp1b9GiLax**](DefaultAPI.md#requesthp1b9gilax) | **GET** /core/v2/edge-router-policies | Get an Edge Router Policy
[**requestIAJViYLviu**](DefaultAPI.md#requestiajviylviu) | **DELETE** /core/v2/networks/{networkId} | Delete a Network
[**requestK9ajDJ8vUS**](DefaultAPI.md#requestk9ajdj8vus) | **GET** /rest/v1/network-groups | Get the list of Network Groups
[**requestKkeR9gNy25**](DefaultAPI.md#requestkker9gny25) | **GET** /core/v2/app-wans/{appWanId} | Get an AppWAN
[**requestLOXfQSs8GE**](DefaultAPI.md#requestloxfqss8ge) | **GET** /core/v2/network-configs | Get a Network Configuration profile
[**requestLgKxU4ph9t**](DefaultAPI.md#requestlgkxu4ph9t) | **POST** /core/v2/edge-router-policies | Create an Edge Router Policy
[**requestLopoFtq4ih**](DefaultAPI.md#requestlopoftq4ih) | **POST** /core/v2/services | Create a Service
[**requestMpyYtIiS6x**](DefaultAPI.md#requestmpyytiis6x) | **GET** /identity/v1/api-account-identities/self | Get the identity of the caller&#39;s API account
[**requestN6GjgPLO4v**](DefaultAPI.md#requestn6gjgplo4v) | **GET** /identity/v1/organizations/{organizationId} | Get an Organization
[**requestNXoV6K2f0Q**](DefaultAPI.md#requestnxov6k2f0q) | **POST** /core/v2/app-wans | Create an AppWAN
[**requestOiIAfX2VUs**](DefaultAPI.md#requestoiiafx2vus) | **GET** /core/v2/networks | Get the list of Networks
[**requestPBaaiO3B0d**](DefaultAPI.md#requestpbaaio3b0d) | **DELETE** /core/v2/services/{serviceId} | Delete a Service
[**requestPyR6aUP5mi**](DefaultAPI.md#requestpyr6aup5mi) | **POST** /core/v2/edge-routers | Create an Edge Router
[**requestQ0b3cbDW8S**](DefaultAPI.md#requestq0b3cbdw8s) | **GET** /core/v2/posture-checks | Get the list of Posture Checks
[**requestTeqMGeER5F**](DefaultAPI.md#requestteqmgeer5f) | **GET** /core/v2/networks/{networkId} | Get a Network
[**requestTsyuwlAejK**](DefaultAPI.md#requesttsyuwlaejk) | **GET** /core/v2/endpoints/{endpointId} | Get an Endpoint
[**requestVIzB1k6Uqb**](DefaultAPI.md#requestvizb1k6uqb) | **PATCH** /core/v2/services/{serviceId} | Change some properties of a Service
[**requestVeJCBUR9iO**](DefaultAPI.md#requestvejcbur9io) | **GET** /rest/v1/network-groups/{networkGroupId} | Get a Network Group
[**requestVfuaDMeTRP**](DefaultAPI.md#requestvfuadmetrp) | **GET** /core/v2/data-centers | Get the list of data centers
[**requestYLsf4m9TTT**](DefaultAPI.md#requestylsf4m9ttt) | **GET** /core/v2/services/{serviceId} | Get a Service
[**requestYhzDAw1Ks4**](DefaultAPI.md#requestyhzdaw1ks4) | **GET** /core/v2/edge-routers | Get an Edge Router


# **request4Q1qU3c4dk**
```swift
    open class func request4Q1qU3c4dk(edgeRouterId: String, completion: @escaping (_ data: InlineResponse20012?, _ error: Error?) -> Void)
```

Get an Edge Router

### Example 
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient

let edgeRouterId = "edgeRouterId_example" // String | 

// Get an Edge Router
DefaultAPI.request4Q1qU3c4dk(edgeRouterId: edgeRouterId) { (response, error) in
    guard error == nil else {
        print(error)
        return
    }

    if (response) {
        dump(response)
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **edgeRouterId** | **String** |  | 

### Return type

[**InlineResponse20012**](InlineResponse20012.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/hal+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **request9sDuPizCiu**
```swift
    open class func request9sDuPizCiu(inlineObject5: InlineObject5? = nil, completion: @escaping (_ data: InlineResponse2008?, _ error: Error?) -> Void)
```

Create an Endpoint

### Example 
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient

let inlineObject5 = inline_object_5(attributes: ["attributes_example"], enrollmentMethod: _core_v2_endpoints_enrollmentMethod(ott: false), name: "name_example", networkId: "networkId_example") // InlineObject5 |  (optional)

// Create an Endpoint
DefaultAPI.request9sDuPizCiu(inlineObject5: inlineObject5) { (response, error) in
    guard error == nil else {
        print(error)
        return
    }

    if (response) {
        dump(response)
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **inlineObject5** | [**InlineObject5**](InlineObject5.md) |  | [optional] 

### Return type

[**InlineResponse2008**](InlineResponse2008.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/hal+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **requestA8syyaPZnw**
```swift
    open class func requestA8syyaPZnw(completion: @escaping (_ data: InlineResponse20019?, _ error: Error?) -> Void)
```

Get the list of Network product versions

### Example 
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient


// Get the list of Network product versions
DefaultAPI.requestA8syyaPZnw() { (response, error) in
    guard error == nil else {
        print(error)
        return
    }

    if (response) {
        dump(response)
    }
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
```swift
    open class func requestAYFhAQd5pn(completion: @escaping (_ data: InlineResponse2007?, _ error: Error?) -> Void)
```

Get an Endpoint

### Example 
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient


// Get an Endpoint
DefaultAPI.requestAYFhAQd5pn() { (response, error) in
    guard error == nil else {
        print(error)
        return
    }

    if (response) {
        dump(response)
    }
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
```swift
    open class func requestAuarCsIhkJ(edgeRouterId: String, completion: @escaping (_ data: InlineResponse2009?, _ error: Error?) -> Void)
```

Get the registration information for an Edge Router

### Example 
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient

let edgeRouterId = "edgeRouterId_example" // String | 

// Get the registration information for an Edge Router
DefaultAPI.requestAuarCsIhkJ(edgeRouterId: edgeRouterId) { (response, error) in
    guard error == nil else {
        print(error)
        return
    }

    if (response) {
        dump(response)
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **edgeRouterId** | **String** |  | 

### Return type

[**InlineResponse2009**](InlineResponse2009.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/hal+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **requestBtgg9ZlC0e**
```swift
    open class func requestBtgg9ZlC0e(edgeRouterPolicyId: String, completion: @escaping (_ data: InlineResponse2004EmbeddedEdgeRouterPolicyList?, _ error: Error?) -> Void)
```

Get an Edge Router Policy

### Example 
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient

let edgeRouterPolicyId = "edgeRouterPolicyId_example" // String | 

// Get an Edge Router Policy
DefaultAPI.requestBtgg9ZlC0e(edgeRouterPolicyId: edgeRouterPolicyId) { (response, error) in
    guard error == nil else {
        print(error)
        return
    }

    if (response) {
        dump(response)
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **edgeRouterPolicyId** | **String** |  | 

### Return type

[**InlineResponse2004EmbeddedEdgeRouterPolicyList**](InlineResponse2004EmbeddedEdgeRouterPolicyList.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/hal+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **requestE1IexRfvZg**
```swift
    open class func requestE1IexRfvZg(completion: @escaping (_ data: InlineResponse2003?, _ error: Error?) -> Void)
```

Get the list of Services

### Example 
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient


// Get the list of Services
DefaultAPI.requestE1IexRfvZg() { (response, error) in
    guard error == nil else {
        print(error)
        return
    }

    if (response) {
        dump(response)
    }
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
```swift
    open class func requestFWlFMQIDPX(inlineObject: InlineObject? = nil, completion: @escaping (_ data: InlineResponse202?, _ error: Error?) -> Void)
```

Create a Network

### Example 
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient

let inlineObject = inline_object(name: "name_example", size: "size_example", locationCode: "locationCode_example", productVersion: "productVersion_example", networkGroupId: "networkGroupId_example") // InlineObject |  (optional)

// Create a Network
DefaultAPI.requestFWlFMQIDPX(inlineObject: inlineObject) { (response, error) in
    guard error == nil else {
        print(error)
        return
    }

    if (response) {
        dump(response)
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **inlineObject** | [**InlineObject**](InlineObject.md) |  | [optional] 

### Return type

[**InlineResponse202**](InlineResponse202.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/hal+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **requestGijVCEoMlM**
```swift
    open class func requestGijVCEoMlM(completion: @escaping (_ data: InlineResponse2006?, _ error: Error?) -> Void)
```

Get the list of AppWANs

### Example 
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient


// Get the list of AppWANs
DefaultAPI.requestGijVCEoMlM() { (response, error) in
    guard error == nil else {
        print(error)
        return
    }

    if (response) {
        dump(response)
    }
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
```swift
    open class func requestHp1b9GiLax(completion: @escaping (_ data: InlineResponse2004?, _ error: Error?) -> Void)
```

Get an Edge Router Policy

### Example 
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient


// Get an Edge Router Policy
DefaultAPI.requestHp1b9GiLax() { (response, error) in
    guard error == nil else {
        print(error)
        return
    }

    if (response) {
        dump(response)
    }
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
```swift
    open class func requestIAJViYLviu(networkId: String, completion: @escaping (_ data: InlineResponse2024?, _ error: Error?) -> Void)
```

Delete a Network

### Example 
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient

let networkId = "networkId_example" // String | 

// Delete a Network
DefaultAPI.requestIAJViYLviu(networkId: networkId) { (response, error) in
    guard error == nil else {
        print(error)
        return
    }

    if (response) {
        dump(response)
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **networkId** | **String** |  | 

### Return type

[**InlineResponse2024**](InlineResponse2024.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/hal+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **requestK9ajDJ8vUS**
```swift
    open class func requestK9ajDJ8vUS(completion: @escaping (_ data: InlineResponse20017?, _ error: Error?) -> Void)
```

Get the list of Network Groups

### Example 
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient


// Get the list of Network Groups
DefaultAPI.requestK9ajDJ8vUS() { (response, error) in
    guard error == nil else {
        print(error)
        return
    }

    if (response) {
        dump(response)
    }
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
```swift
    open class func requestKkeR9gNy25(appWanId: String, completion: @escaping (_ data: InlineResponse200?, _ error: Error?) -> Void)
```

Get an AppWAN

### Example 
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient

let appWanId = "appWanId_example" // String | 

// Get an AppWAN
DefaultAPI.requestKkeR9gNy25(appWanId: appWanId) { (response, error) in
    guard error == nil else {
        print(error)
        return
    }

    if (response) {
        dump(response)
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **appWanId** | **String** |  | 

### Return type

[**InlineResponse200**](InlineResponse200.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/hal+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **requestLOXfQSs8GE**
```swift
    open class func requestLOXfQSs8GE(completion: @escaping (_ data: InlineResponse20015?, _ error: Error?) -> Void)
```

Get a Network Configuration profile

e.g. small, medium, large

### Example 
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient


// Get a Network Configuration profile
DefaultAPI.requestLOXfQSs8GE() { (response, error) in
    guard error == nil else {
        print(error)
        return
    }

    if (response) {
        dump(response)
    }
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
```swift
    open class func requestLgKxU4ph9t(inlineObject2: InlineObject2? = nil, completion: @escaping (_ data: InlineResponse2004EmbeddedEdgeRouterPolicyList?, _ error: Error?) -> Void)
```

Create an Edge Router Policy

### Example 
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient

let inlineObject2 = inline_object_2(edgeRouterAttributes: ["edgeRouterAttributes_example"], endpointAttributes: ["endpointAttributes_example"], name: "name_example", networkId: "networkId_example") // InlineObject2 |  (optional)

// Create an Edge Router Policy
DefaultAPI.requestLgKxU4ph9t(inlineObject2: inlineObject2) { (response, error) in
    guard error == nil else {
        print(error)
        return
    }

    if (response) {
        dump(response)
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **inlineObject2** | [**InlineObject2**](InlineObject2.md) |  | [optional] 

### Return type

[**InlineResponse2004EmbeddedEdgeRouterPolicyList**](InlineResponse2004EmbeddedEdgeRouterPolicyList.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/hal+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **requestLopoFtq4ih**
```swift
    open class func requestLopoFtq4ih(inlineObject1: InlineObject1? = nil, completion: @escaping (_ data: InlineResponse2021?, _ error: Error?) -> Void)
```

Create a Service

### Example 
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient

let inlineObject1 = inline_object_1(networkId: "networkId_example", name: "name_example", model: _core_v2_services_model(edgeRouterAttributes: ["edgeRouterAttributes_example"], serverEgress: inline_response_200_3__embedded_model_serverEgress(host: "host_example", dialInterceptAddress: "TODO", dialInterceptPort: "TODO", port: 123, dialInterceptProtocol: false, address: "address_example", _protocol: "TODO"), bindEndpointAttributes: ["bindEndpointAttributes_example"], clientIngress: _core_v2_services_model_clientIngress(protocols: ["protocols_example"], host: "host_example", ports: [_core_v2_services_model_clientIngress_ports(high: "high_example", low: "low_example")], port: "TODO", addresses: ["addresses_example"]), edgeRouterHosts: [_core_v2_services_model_edgeRouterHosts(edgeRouterId: "edgeRouterId_example", serverEgress: _core_v2_services_model_serverEgress(host: "host_example", port: "TODO", _protocol: "_protocol_example"))]), attributes: ["attributes_example"], modelType: "modelType_example", encryptionRequired: false) // InlineObject1 |  (optional)

// Create a Service
DefaultAPI.requestLopoFtq4ih(inlineObject1: inlineObject1) { (response, error) in
    guard error == nil else {
        print(error)
        return
    }

    if (response) {
        dump(response)
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **inlineObject1** | [**InlineObject1**](InlineObject1.md) |  | [optional] 

### Return type

[**InlineResponse2021**](InlineResponse2021.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/hal+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **requestMpyYtIiS6x**
```swift
    open class func requestMpyYtIiS6x(completion: @escaping (_ data: InlineResponse20016?, _ error: Error?) -> Void)
```

Get the identity of the caller's API account

### Example 
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient


// Get the identity of the caller's API account
DefaultAPI.requestMpyYtIiS6x() { (response, error) in
    guard error == nil else {
        print(error)
        return
    }

    if (response) {
        dump(response)
    }
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
```swift
    open class func requestN6GjgPLO4v(organizationId: String, completion: @escaping (_ data: InlineResponse20014?, _ error: Error?) -> Void)
```

Get an Organization

### Example 
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient

let organizationId = "organizationId_example" // String | 

// Get an Organization
DefaultAPI.requestN6GjgPLO4v(organizationId: organizationId) { (response, error) in
    guard error == nil else {
        print(error)
        return
    }

    if (response) {
        dump(response)
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **organizationId** | **String** |  | 

### Return type

[**InlineResponse20014**](InlineResponse20014.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **requestNXoV6K2f0Q**
```swift
    open class func requestNXoV6K2f0Q(inlineObject4: InlineObject4? = nil, completion: @escaping (_ data: InlineResponse200?, _ error: Error?) -> Void)
```

Create an AppWAN

### Example 
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient

let inlineObject4 = inline_object_4(serviceAttributes: ["serviceAttributes_example"], networkId: "networkId_example", name: "name_example", postureCheckAttributes: ["TODO"], endpointAttributes: ["endpointAttributes_example"]) // InlineObject4 |  (optional)

// Create an AppWAN
DefaultAPI.requestNXoV6K2f0Q(inlineObject4: inlineObject4) { (response, error) in
    guard error == nil else {
        print(error)
        return
    }

    if (response) {
        dump(response)
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **inlineObject4** | [**InlineObject4**](InlineObject4.md) |  | [optional] 

### Return type

[**InlineResponse200**](InlineResponse200.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/hal+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **requestOiIAfX2VUs**
```swift
    open class func requestOiIAfX2VUs(completion: @escaping (_ data: InlineResponse2001?, _ error: Error?) -> Void)
```

Get the list of Networks

### Example 
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient


// Get the list of Networks
DefaultAPI.requestOiIAfX2VUs() { (response, error) in
    guard error == nil else {
        print(error)
        return
    }

    if (response) {
        dump(response)
    }
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
```swift
    open class func requestPBaaiO3B0d(serviceId: String, completion: @escaping (_ data: InlineResponse2022?, _ error: Error?) -> Void)
```

Delete a Service

### Example 
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient

let serviceId = "serviceId_example" // String | 

// Delete a Service
DefaultAPI.requestPBaaiO3B0d(serviceId: serviceId) { (response, error) in
    guard error == nil else {
        print(error)
        return
    }

    if (response) {
        dump(response)
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **serviceId** | **String** |  | 

### Return type

[**InlineResponse2022**](InlineResponse2022.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/hal+json, application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **requestPyR6aUP5mi**
```swift
    open class func requestPyR6aUP5mi(inlineObject6: InlineObject6? = nil, completion: @escaping (_ data: InlineResponse2025?, _ error: Error?) -> Void)
```

Create an Edge Router

### Example 
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient

let inlineObject6 = inline_object_6(networkId: "networkId_example", name: "name_example", attributes: ["attributes_example"], linkListener: false, dataCenterId: "dataCenterId_example") // InlineObject6 |  (optional)

// Create an Edge Router
DefaultAPI.requestPyR6aUP5mi(inlineObject6: inlineObject6) { (response, error) in
    guard error == nil else {
        print(error)
        return
    }

    if (response) {
        dump(response)
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **inlineObject6** | [**InlineObject6**](InlineObject6.md) |  | [optional] 

### Return type

[**InlineResponse2025**](InlineResponse2025.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/hal+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **requestQ0b3cbDW8S**
```swift
    open class func requestQ0b3cbDW8S(completion: @escaping (_ data: InlineResponse20010?, _ error: Error?) -> Void)
```

Get the list of Posture Checks

### Example 
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient


// Get the list of Posture Checks
DefaultAPI.requestQ0b3cbDW8S() { (response, error) in
    guard error == nil else {
        print(error)
        return
    }

    if (response) {
        dump(response)
    }
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
```swift
    open class func requestTeqMGeER5F(networkId: String, completion: @escaping (_ data: InlineResponse20013?, _ error: Error?) -> Void)
```

Get a Network

### Example 
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient

let networkId = "networkId_example" // String | 

// Get a Network
DefaultAPI.requestTeqMGeER5F(networkId: networkId) { (response, error) in
    guard error == nil else {
        print(error)
        return
    }

    if (response) {
        dump(response)
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **networkId** | **String** |  | 

### Return type

[**InlineResponse20013**](InlineResponse20013.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/hal+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **requestTsyuwlAejK**
```swift
    open class func requestTsyuwlAejK(endpointId: String, completion: @escaping (_ data: InlineResponse2007EmbeddedEndpointList?, _ error: Error?) -> Void)
```

Get an Endpoint

### Example 
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient

let endpointId = "endpointId_example" // String | 

// Get an Endpoint
DefaultAPI.requestTsyuwlAejK(endpointId: endpointId) { (response, error) in
    guard error == nil else {
        print(error)
        return
    }

    if (response) {
        dump(response)
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **endpointId** | **String** |  | 

### Return type

[**InlineResponse2007EmbeddedEndpointList**](InlineResponse2007EmbeddedEndpointList.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/hal+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **requestVIzB1k6Uqb**
```swift
    open class func requestVIzB1k6Uqb(serviceId: String, inlineObject3: InlineObject3? = nil, completion: @escaping (_ data: InlineResponse2023?, _ error: Error?) -> Void)
```

Change some properties of a Service

### Example 
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient

let serviceId = "serviceId_example" // String | 
let inlineObject3 = inline_object_3(model: _core_v2_services__serviceId__model(bindEndpointAttributes: ["bindEndpointAttributes_example"], clientIngress: _core_v2_services__serviceId__model_clientIngress(addresses: ["addresses_example"], ports: [_core_v2_services_model_clientIngress_ports(high: "high_example", low: "low_example")], protocols: ["protocols_example"]), edgeRouterAttributes: ["edgeRouterAttributes_example"], serverEgress: _core_v2_services__serviceId__model_serverEgress(dialInterceptAddress: "TODO", dialInterceptPort: "TODO", port: 123, dialInterceptProtocol: false, address: "address_example", _protocol: "TODO")), modelType: "modelType_example", name: "name_example") // InlineObject3 |  (optional)

// Change some properties of a Service
DefaultAPI.requestVIzB1k6Uqb(serviceId: serviceId, inlineObject3: inlineObject3) { (response, error) in
    guard error == nil else {
        print(error)
        return
    }

    if (response) {
        dump(response)
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **serviceId** | **String** |  | 
 **inlineObject3** | [**InlineObject3**](InlineObject3.md) |  | [optional] 

### Return type

[**InlineResponse2023**](InlineResponse2023.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/hal+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **requestVeJCBUR9iO**
```swift
    open class func requestVeJCBUR9iO(networkGroupId: String, completion: @escaping (_ data: InlineResponse20011?, _ error: Error?) -> Void)
```

Get a Network Group

### Example 
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient

let networkGroupId = "networkGroupId_example" // String | 

// Get a Network Group
DefaultAPI.requestVeJCBUR9iO(networkGroupId: networkGroupId) { (response, error) in
    guard error == nil else {
        print(error)
        return
    }

    if (response) {
        dump(response)
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **networkGroupId** | **String** |  | 

### Return type

[**InlineResponse20011**](InlineResponse20011.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **requestVfuaDMeTRP**
```swift
    open class func requestVfuaDMeTRP(completion: @escaping (_ data: InlineResponse2002?, _ error: Error?) -> Void)
```

Get the list of data centers

### Example 
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient


// Get the list of data centers
DefaultAPI.requestVfuaDMeTRP() { (response, error) in
    guard error == nil else {
        print(error)
        return
    }

    if (response) {
        dump(response)
    }
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
```swift
    open class func requestYLsf4m9TTT(serviceId: String, completion: @escaping (_ data: InlineResponse2005?, _ error: Error?) -> Void)
```

Get a Service

### Example 
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient

let serviceId = "serviceId_example" // String | 

// Get a Service
DefaultAPI.requestYLsf4m9TTT(serviceId: serviceId) { (response, error) in
    guard error == nil else {
        print(error)
        return
    }

    if (response) {
        dump(response)
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **serviceId** | **String** |  | 

### Return type

[**InlineResponse2005**](InlineResponse2005.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/hal+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **requestYhzDAw1Ks4**
```swift
    open class func requestYhzDAw1Ks4(completion: @escaping (_ data: InlineResponse20018?, _ error: Error?) -> Void)
```

Get an Edge Router

### Example 
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient


// Get an Edge Router
DefaultAPI.requestYhzDAw1Ks4() { (response, error) in
    guard error == nil else {
        print(error)
        return
    }

    if (response) {
        dump(response)
    }
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

