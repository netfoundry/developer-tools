# OpenAPI\Client\DefaultApi

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

> \OpenAPI\Client\Model\InlineResponse20012 request4Q1qU3c4dk($edge_router_id)

Get an Edge Router

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


$apiInstance = new OpenAPI\Client\Api\DefaultApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client()
);
$edge_router_id = 'edge_router_id_example'; // string | 

try {
    $result = $apiInstance->request4Q1qU3c4dk($edge_router_id);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling DefaultApi->request4Q1qU3c4dk: ', $e->getMessage(), PHP_EOL;
}
?>
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **edge_router_id** | **string**|  |

### Return type

[**\OpenAPI\Client\Model\InlineResponse20012**](../Model/InlineResponse20012.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/hal+json

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../../README.md#documentation-for-models)
[[Back to README]](../../README.md)


## request9sDuPizCiu

> \OpenAPI\Client\Model\InlineResponse2008 request9sDuPizCiu($inline_object5)

Create an Endpoint

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


$apiInstance = new OpenAPI\Client\Api\DefaultApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client()
);
$inline_object5 = new \OpenAPI\Client\Model\InlineObject5(); // \OpenAPI\Client\Model\InlineObject5 | 

try {
    $result = $apiInstance->request9sDuPizCiu($inline_object5);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling DefaultApi->request9sDuPizCiu: ', $e->getMessage(), PHP_EOL;
}
?>
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **inline_object5** | [**\OpenAPI\Client\Model\InlineObject5**](../Model/InlineObject5.md)|  | [optional]

### Return type

[**\OpenAPI\Client\Model\InlineResponse2008**](../Model/InlineResponse2008.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/hal+json

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../../README.md#documentation-for-models)
[[Back to README]](../../README.md)


## requestA8syyaPZnw

> \OpenAPI\Client\Model\InlineResponse20019 requestA8syyaPZnw()

Get the list of Network product versions

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


$apiInstance = new OpenAPI\Client\Api\DefaultApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client()
);

try {
    $result = $apiInstance->requestA8syyaPZnw();
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling DefaultApi->requestA8syyaPZnw: ', $e->getMessage(), PHP_EOL;
}
?>
```

### Parameters

This endpoint does not need any parameter.

### Return type

[**\OpenAPI\Client\Model\InlineResponse20019**](../Model/InlineResponse20019.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../../README.md#documentation-for-models)
[[Back to README]](../../README.md)


## requestAYFhAQd5pn

> \OpenAPI\Client\Model\InlineResponse2007 requestAYFhAQd5pn()

Get an Endpoint

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


$apiInstance = new OpenAPI\Client\Api\DefaultApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client()
);

try {
    $result = $apiInstance->requestAYFhAQd5pn();
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling DefaultApi->requestAYFhAQd5pn: ', $e->getMessage(), PHP_EOL;
}
?>
```

### Parameters

This endpoint does not need any parameter.

### Return type

[**\OpenAPI\Client\Model\InlineResponse2007**](../Model/InlineResponse2007.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/hal+json

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../../README.md#documentation-for-models)
[[Back to README]](../../README.md)


## requestAuarCsIhkJ

> \OpenAPI\Client\Model\InlineResponse2009 requestAuarCsIhkJ($edge_router_id)

Get the registration information for an Edge Router

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


$apiInstance = new OpenAPI\Client\Api\DefaultApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client()
);
$edge_router_id = 'edge_router_id_example'; // string | 

try {
    $result = $apiInstance->requestAuarCsIhkJ($edge_router_id);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling DefaultApi->requestAuarCsIhkJ: ', $e->getMessage(), PHP_EOL;
}
?>
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **edge_router_id** | **string**|  |

### Return type

[**\OpenAPI\Client\Model\InlineResponse2009**](../Model/InlineResponse2009.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/hal+json

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../../README.md#documentation-for-models)
[[Back to README]](../../README.md)


## requestBtgg9ZlC0e

> \OpenAPI\Client\Model\InlineResponse2004EmbeddedEdgeRouterPolicyList requestBtgg9ZlC0e($edge_router_policy_id)

Get an Edge Router Policy

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


$apiInstance = new OpenAPI\Client\Api\DefaultApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client()
);
$edge_router_policy_id = 'edge_router_policy_id_example'; // string | 

try {
    $result = $apiInstance->requestBtgg9ZlC0e($edge_router_policy_id);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling DefaultApi->requestBtgg9ZlC0e: ', $e->getMessage(), PHP_EOL;
}
?>
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **edge_router_policy_id** | **string**|  |

### Return type

[**\OpenAPI\Client\Model\InlineResponse2004EmbeddedEdgeRouterPolicyList**](../Model/InlineResponse2004EmbeddedEdgeRouterPolicyList.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/hal+json

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../../README.md#documentation-for-models)
[[Back to README]](../../README.md)


## requestE1IexRfvZg

> \OpenAPI\Client\Model\InlineResponse2003 requestE1IexRfvZg()

Get the list of Services

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


$apiInstance = new OpenAPI\Client\Api\DefaultApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client()
);

try {
    $result = $apiInstance->requestE1IexRfvZg();
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling DefaultApi->requestE1IexRfvZg: ', $e->getMessage(), PHP_EOL;
}
?>
```

### Parameters

This endpoint does not need any parameter.

### Return type

[**\OpenAPI\Client\Model\InlineResponse2003**](../Model/InlineResponse2003.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/hal+json

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../../README.md#documentation-for-models)
[[Back to README]](../../README.md)


## requestFWlFMQIDPX

> \OpenAPI\Client\Model\InlineResponse202 requestFWlFMQIDPX($inline_object)

Create a Network

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


$apiInstance = new OpenAPI\Client\Api\DefaultApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client()
);
$inline_object = new \OpenAPI\Client\Model\InlineObject(); // \OpenAPI\Client\Model\InlineObject | 

try {
    $result = $apiInstance->requestFWlFMQIDPX($inline_object);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling DefaultApi->requestFWlFMQIDPX: ', $e->getMessage(), PHP_EOL;
}
?>
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **inline_object** | [**\OpenAPI\Client\Model\InlineObject**](../Model/InlineObject.md)|  | [optional]

### Return type

[**\OpenAPI\Client\Model\InlineResponse202**](../Model/InlineResponse202.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/hal+json

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../../README.md#documentation-for-models)
[[Back to README]](../../README.md)


## requestGijVCEoMlM

> \OpenAPI\Client\Model\InlineResponse2006 requestGijVCEoMlM()

Get the list of AppWANs

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


$apiInstance = new OpenAPI\Client\Api\DefaultApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client()
);

try {
    $result = $apiInstance->requestGijVCEoMlM();
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling DefaultApi->requestGijVCEoMlM: ', $e->getMessage(), PHP_EOL;
}
?>
```

### Parameters

This endpoint does not need any parameter.

### Return type

[**\OpenAPI\Client\Model\InlineResponse2006**](../Model/InlineResponse2006.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/hal+json

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../../README.md#documentation-for-models)
[[Back to README]](../../README.md)


## requestHp1b9GiLax

> \OpenAPI\Client\Model\InlineResponse2004 requestHp1b9GiLax()

Get an Edge Router Policy

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


$apiInstance = new OpenAPI\Client\Api\DefaultApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client()
);

try {
    $result = $apiInstance->requestHp1b9GiLax();
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling DefaultApi->requestHp1b9GiLax: ', $e->getMessage(), PHP_EOL;
}
?>
```

### Parameters

This endpoint does not need any parameter.

### Return type

[**\OpenAPI\Client\Model\InlineResponse2004**](../Model/InlineResponse2004.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/hal+json

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../../README.md#documentation-for-models)
[[Back to README]](../../README.md)


## requestIAJViYLviu

> \OpenAPI\Client\Model\InlineResponse2024 requestIAJViYLviu($network_id)

Delete a Network

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


$apiInstance = new OpenAPI\Client\Api\DefaultApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client()
);
$network_id = 'network_id_example'; // string | 

try {
    $result = $apiInstance->requestIAJViYLviu($network_id);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling DefaultApi->requestIAJViYLviu: ', $e->getMessage(), PHP_EOL;
}
?>
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **network_id** | **string**|  |

### Return type

[**\OpenAPI\Client\Model\InlineResponse2024**](../Model/InlineResponse2024.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/hal+json

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../../README.md#documentation-for-models)
[[Back to README]](../../README.md)


## requestK9ajDJ8vUS

> \OpenAPI\Client\Model\InlineResponse20017 requestK9ajDJ8vUS()

Get the list of Network Groups

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


$apiInstance = new OpenAPI\Client\Api\DefaultApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client()
);

try {
    $result = $apiInstance->requestK9ajDJ8vUS();
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling DefaultApi->requestK9ajDJ8vUS: ', $e->getMessage(), PHP_EOL;
}
?>
```

### Parameters

This endpoint does not need any parameter.

### Return type

[**\OpenAPI\Client\Model\InlineResponse20017**](../Model/InlineResponse20017.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../../README.md#documentation-for-models)
[[Back to README]](../../README.md)


## requestKkeR9gNy25

> \OpenAPI\Client\Model\InlineResponse200 requestKkeR9gNy25($app_wan_id)

Get an AppWAN

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


$apiInstance = new OpenAPI\Client\Api\DefaultApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client()
);
$app_wan_id = 'app_wan_id_example'; // string | 

try {
    $result = $apiInstance->requestKkeR9gNy25($app_wan_id);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling DefaultApi->requestKkeR9gNy25: ', $e->getMessage(), PHP_EOL;
}
?>
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **app_wan_id** | **string**|  |

### Return type

[**\OpenAPI\Client\Model\InlineResponse200**](../Model/InlineResponse200.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/hal+json

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../../README.md#documentation-for-models)
[[Back to README]](../../README.md)


## requestLOXfQSs8GE

> \OpenAPI\Client\Model\InlineResponse20015 requestLOXfQSs8GE()

Get a Network Configuration profile

e.g. small, medium, large

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


$apiInstance = new OpenAPI\Client\Api\DefaultApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client()
);

try {
    $result = $apiInstance->requestLOXfQSs8GE();
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling DefaultApi->requestLOXfQSs8GE: ', $e->getMessage(), PHP_EOL;
}
?>
```

### Parameters

This endpoint does not need any parameter.

### Return type

[**\OpenAPI\Client\Model\InlineResponse20015**](../Model/InlineResponse20015.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/hal+json

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../../README.md#documentation-for-models)
[[Back to README]](../../README.md)


## requestLgKxU4ph9t

> \OpenAPI\Client\Model\InlineResponse2004EmbeddedEdgeRouterPolicyList requestLgKxU4ph9t($inline_object2)

Create an Edge Router Policy

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


$apiInstance = new OpenAPI\Client\Api\DefaultApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client()
);
$inline_object2 = new \OpenAPI\Client\Model\InlineObject2(); // \OpenAPI\Client\Model\InlineObject2 | 

try {
    $result = $apiInstance->requestLgKxU4ph9t($inline_object2);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling DefaultApi->requestLgKxU4ph9t: ', $e->getMessage(), PHP_EOL;
}
?>
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **inline_object2** | [**\OpenAPI\Client\Model\InlineObject2**](../Model/InlineObject2.md)|  | [optional]

### Return type

[**\OpenAPI\Client\Model\InlineResponse2004EmbeddedEdgeRouterPolicyList**](../Model/InlineResponse2004EmbeddedEdgeRouterPolicyList.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/hal+json

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../../README.md#documentation-for-models)
[[Back to README]](../../README.md)


## requestLopoFtq4ih

> \OpenAPI\Client\Model\InlineResponse2021 requestLopoFtq4ih($inline_object1)

Create a Service

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


$apiInstance = new OpenAPI\Client\Api\DefaultApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client()
);
$inline_object1 = new \OpenAPI\Client\Model\InlineObject1(); // \OpenAPI\Client\Model\InlineObject1 | 

try {
    $result = $apiInstance->requestLopoFtq4ih($inline_object1);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling DefaultApi->requestLopoFtq4ih: ', $e->getMessage(), PHP_EOL;
}
?>
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **inline_object1** | [**\OpenAPI\Client\Model\InlineObject1**](../Model/InlineObject1.md)|  | [optional]

### Return type

[**\OpenAPI\Client\Model\InlineResponse2021**](../Model/InlineResponse2021.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/hal+json

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../../README.md#documentation-for-models)
[[Back to README]](../../README.md)


## requestMpyYtIiS6x

> \OpenAPI\Client\Model\InlineResponse20016 requestMpyYtIiS6x()

Get the identity of the caller's API account

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


$apiInstance = new OpenAPI\Client\Api\DefaultApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client()
);

try {
    $result = $apiInstance->requestMpyYtIiS6x();
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling DefaultApi->requestMpyYtIiS6x: ', $e->getMessage(), PHP_EOL;
}
?>
```

### Parameters

This endpoint does not need any parameter.

### Return type

[**\OpenAPI\Client\Model\InlineResponse20016**](../Model/InlineResponse20016.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../../README.md#documentation-for-models)
[[Back to README]](../../README.md)


## requestN6GjgPLO4v

> \OpenAPI\Client\Model\InlineResponse20014 requestN6GjgPLO4v($organization_id)

Get an Organization

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


$apiInstance = new OpenAPI\Client\Api\DefaultApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client()
);
$organization_id = 'organization_id_example'; // string | 

try {
    $result = $apiInstance->requestN6GjgPLO4v($organization_id);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling DefaultApi->requestN6GjgPLO4v: ', $e->getMessage(), PHP_EOL;
}
?>
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **organization_id** | **string**|  |

### Return type

[**\OpenAPI\Client\Model\InlineResponse20014**](../Model/InlineResponse20014.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../../README.md#documentation-for-models)
[[Back to README]](../../README.md)


## requestNXoV6K2f0Q

> \OpenAPI\Client\Model\InlineResponse200 requestNXoV6K2f0Q($inline_object4)

Create an AppWAN

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


$apiInstance = new OpenAPI\Client\Api\DefaultApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client()
);
$inline_object4 = new \OpenAPI\Client\Model\InlineObject4(); // \OpenAPI\Client\Model\InlineObject4 | 

try {
    $result = $apiInstance->requestNXoV6K2f0Q($inline_object4);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling DefaultApi->requestNXoV6K2f0Q: ', $e->getMessage(), PHP_EOL;
}
?>
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **inline_object4** | [**\OpenAPI\Client\Model\InlineObject4**](../Model/InlineObject4.md)|  | [optional]

### Return type

[**\OpenAPI\Client\Model\InlineResponse200**](../Model/InlineResponse200.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/hal+json

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../../README.md#documentation-for-models)
[[Back to README]](../../README.md)


## requestOiIAfX2VUs

> \OpenAPI\Client\Model\InlineResponse2001 requestOiIAfX2VUs()

Get the list of Networks

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


$apiInstance = new OpenAPI\Client\Api\DefaultApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client()
);

try {
    $result = $apiInstance->requestOiIAfX2VUs();
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling DefaultApi->requestOiIAfX2VUs: ', $e->getMessage(), PHP_EOL;
}
?>
```

### Parameters

This endpoint does not need any parameter.

### Return type

[**\OpenAPI\Client\Model\InlineResponse2001**](../Model/InlineResponse2001.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/hal+json

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../../README.md#documentation-for-models)
[[Back to README]](../../README.md)


## requestPBaaiO3B0d

> \OpenAPI\Client\Model\InlineResponse2022 requestPBaaiO3B0d($service_id)

Delete a Service

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


$apiInstance = new OpenAPI\Client\Api\DefaultApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client()
);
$service_id = 'service_id_example'; // string | 

try {
    $result = $apiInstance->requestPBaaiO3B0d($service_id);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling DefaultApi->requestPBaaiO3B0d: ', $e->getMessage(), PHP_EOL;
}
?>
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **service_id** | **string**|  |

### Return type

[**\OpenAPI\Client\Model\InlineResponse2022**](../Model/InlineResponse2022.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/hal+json, application/json

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../../README.md#documentation-for-models)
[[Back to README]](../../README.md)


## requestPyR6aUP5mi

> \OpenAPI\Client\Model\InlineResponse2025 requestPyR6aUP5mi($inline_object6)

Create an Edge Router

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


$apiInstance = new OpenAPI\Client\Api\DefaultApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client()
);
$inline_object6 = new \OpenAPI\Client\Model\InlineObject6(); // \OpenAPI\Client\Model\InlineObject6 | 

try {
    $result = $apiInstance->requestPyR6aUP5mi($inline_object6);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling DefaultApi->requestPyR6aUP5mi: ', $e->getMessage(), PHP_EOL;
}
?>
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **inline_object6** | [**\OpenAPI\Client\Model\InlineObject6**](../Model/InlineObject6.md)|  | [optional]

### Return type

[**\OpenAPI\Client\Model\InlineResponse2025**](../Model/InlineResponse2025.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/hal+json

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../../README.md#documentation-for-models)
[[Back to README]](../../README.md)


## requestQ0b3cbDW8S

> \OpenAPI\Client\Model\InlineResponse20010 requestQ0b3cbDW8S()

Get the list of Posture Checks

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


$apiInstance = new OpenAPI\Client\Api\DefaultApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client()
);

try {
    $result = $apiInstance->requestQ0b3cbDW8S();
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling DefaultApi->requestQ0b3cbDW8S: ', $e->getMessage(), PHP_EOL;
}
?>
```

### Parameters

This endpoint does not need any parameter.

### Return type

[**\OpenAPI\Client\Model\InlineResponse20010**](../Model/InlineResponse20010.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/hal+json

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../../README.md#documentation-for-models)
[[Back to README]](../../README.md)


## requestTeqMGeER5F

> \OpenAPI\Client\Model\InlineResponse20013 requestTeqMGeER5F($network_id)

Get a Network

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


$apiInstance = new OpenAPI\Client\Api\DefaultApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client()
);
$network_id = 'network_id_example'; // string | 

try {
    $result = $apiInstance->requestTeqMGeER5F($network_id);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling DefaultApi->requestTeqMGeER5F: ', $e->getMessage(), PHP_EOL;
}
?>
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **network_id** | **string**|  |

### Return type

[**\OpenAPI\Client\Model\InlineResponse20013**](../Model/InlineResponse20013.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/hal+json

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../../README.md#documentation-for-models)
[[Back to README]](../../README.md)


## requestTsyuwlAejK

> \OpenAPI\Client\Model\InlineResponse2007EmbeddedEndpointList requestTsyuwlAejK($endpoint_id)

Get an Endpoint

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


$apiInstance = new OpenAPI\Client\Api\DefaultApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client()
);
$endpoint_id = 'endpoint_id_example'; // string | 

try {
    $result = $apiInstance->requestTsyuwlAejK($endpoint_id);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling DefaultApi->requestTsyuwlAejK: ', $e->getMessage(), PHP_EOL;
}
?>
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **endpoint_id** | **string**|  |

### Return type

[**\OpenAPI\Client\Model\InlineResponse2007EmbeddedEndpointList**](../Model/InlineResponse2007EmbeddedEndpointList.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/hal+json

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../../README.md#documentation-for-models)
[[Back to README]](../../README.md)


## requestVIzB1k6Uqb

> \OpenAPI\Client\Model\InlineResponse2023 requestVIzB1k6Uqb($service_id, $inline_object3)

Change some properties of a Service

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


$apiInstance = new OpenAPI\Client\Api\DefaultApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client()
);
$service_id = 'service_id_example'; // string | 
$inline_object3 = new \OpenAPI\Client\Model\InlineObject3(); // \OpenAPI\Client\Model\InlineObject3 | 

try {
    $result = $apiInstance->requestVIzB1k6Uqb($service_id, $inline_object3);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling DefaultApi->requestVIzB1k6Uqb: ', $e->getMessage(), PHP_EOL;
}
?>
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **service_id** | **string**|  |
 **inline_object3** | [**\OpenAPI\Client\Model\InlineObject3**](../Model/InlineObject3.md)|  | [optional]

### Return type

[**\OpenAPI\Client\Model\InlineResponse2023**](../Model/InlineResponse2023.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/hal+json

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../../README.md#documentation-for-models)
[[Back to README]](../../README.md)


## requestVeJCBUR9iO

> \OpenAPI\Client\Model\InlineResponse20011 requestVeJCBUR9iO($network_group_id)

Get a Network Group

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


$apiInstance = new OpenAPI\Client\Api\DefaultApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client()
);
$network_group_id = 'network_group_id_example'; // string | 

try {
    $result = $apiInstance->requestVeJCBUR9iO($network_group_id);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling DefaultApi->requestVeJCBUR9iO: ', $e->getMessage(), PHP_EOL;
}
?>
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **network_group_id** | **string**|  |

### Return type

[**\OpenAPI\Client\Model\InlineResponse20011**](../Model/InlineResponse20011.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../../README.md#documentation-for-models)
[[Back to README]](../../README.md)


## requestVfuaDMeTRP

> \OpenAPI\Client\Model\InlineResponse2002 requestVfuaDMeTRP()

Get the list of data centers

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


$apiInstance = new OpenAPI\Client\Api\DefaultApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client()
);

try {
    $result = $apiInstance->requestVfuaDMeTRP();
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling DefaultApi->requestVfuaDMeTRP: ', $e->getMessage(), PHP_EOL;
}
?>
```

### Parameters

This endpoint does not need any parameter.

### Return type

[**\OpenAPI\Client\Model\InlineResponse2002**](../Model/InlineResponse2002.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/hal+json

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../../README.md#documentation-for-models)
[[Back to README]](../../README.md)


## requestYLsf4m9TTT

> \OpenAPI\Client\Model\InlineResponse2005 requestYLsf4m9TTT($service_id)

Get a Service

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


$apiInstance = new OpenAPI\Client\Api\DefaultApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client()
);
$service_id = 'service_id_example'; // string | 

try {
    $result = $apiInstance->requestYLsf4m9TTT($service_id);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling DefaultApi->requestYLsf4m9TTT: ', $e->getMessage(), PHP_EOL;
}
?>
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **service_id** | **string**|  |

### Return type

[**\OpenAPI\Client\Model\InlineResponse2005**](../Model/InlineResponse2005.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/hal+json

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../../README.md#documentation-for-models)
[[Back to README]](../../README.md)


## requestYhzDAw1Ks4

> \OpenAPI\Client\Model\InlineResponse20018 requestYhzDAw1Ks4()

Get an Edge Router

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


$apiInstance = new OpenAPI\Client\Api\DefaultApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client()
);

try {
    $result = $apiInstance->requestYhzDAw1Ks4();
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling DefaultApi->requestYhzDAw1Ks4: ', $e->getMessage(), PHP_EOL;
}
?>
```

### Parameters

This endpoint does not need any parameter.

### Return type

[**\OpenAPI\Client\Model\InlineResponse20018**](../Model/InlineResponse20018.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/hal+json

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../../README.md#documentation-for-models)
[[Back to README]](../../README.md)

