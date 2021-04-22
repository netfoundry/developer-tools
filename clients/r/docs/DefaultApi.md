# DefaultApi

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**Request4Q1qU3c4dk**](DefaultApi.md#Request4Q1qU3c4dk) | **GET** /core/v2/edge-routers/{edgeRouterId} | Get an Edge Router
[**Request9sDuPizCiu**](DefaultApi.md#Request9sDuPizCiu) | **POST** /core/v2/endpoints | Create an Endpoint
[**RequestA8syyaPZnw**](DefaultApi.md#RequestA8syyaPZnw) | **GET** /product-metadata/v2/download-urls.json | Get the list of Network product versions
[**RequestAYFhAQd5pn**](DefaultApi.md#RequestAYFhAQd5pn) | **GET** /core/v2/endpoints | Get an Endpoint
[**RequestAuarCsIhkJ**](DefaultApi.md#RequestAuarCsIhkJ) | **POST** /core/v2/edge-routers/{edgeRouterId}/registration-key | Get the registration information for an Edge Router
[**RequestBtgg9ZlC0e**](DefaultApi.md#RequestBtgg9ZlC0e) | **GET** /core/v2/edge-router-policies/{edgeRouterPolicyId} | Get an Edge Router Policy
[**RequestE1IexRfvZg**](DefaultApi.md#RequestE1IexRfvZg) | **GET** /core/v2/services | Get the list of Services
[**RequestFWlFMQIDPX**](DefaultApi.md#RequestFWlFMQIDPX) | **POST** /core/v2/networks | Create a Network
[**RequestGijVCEoMlM**](DefaultApi.md#RequestGijVCEoMlM) | **GET** /core/v2/app-wans | Get the list of AppWANs
[**RequestHp1b9GiLax**](DefaultApi.md#RequestHp1b9GiLax) | **GET** /core/v2/edge-router-policies | Get an Edge Router Policy
[**RequestIAJViYLviu**](DefaultApi.md#RequestIAJViYLviu) | **DELETE** /core/v2/networks/{networkId} | Delete a Network
[**RequestK9ajDJ8vUS**](DefaultApi.md#RequestK9ajDJ8vUS) | **GET** /rest/v1/network-groups | Get the list of Network Groups
[**RequestKkeR9gNy25**](DefaultApi.md#RequestKkeR9gNy25) | **GET** /core/v2/app-wans/{appWanId} | Get an AppWAN
[**RequestLOXfQSs8GE**](DefaultApi.md#RequestLOXfQSs8GE) | **GET** /core/v2/network-configs | Get a Network Configuration profile
[**RequestLgKxU4ph9t**](DefaultApi.md#RequestLgKxU4ph9t) | **POST** /core/v2/edge-router-policies | Create an Edge Router Policy
[**RequestLopoFtq4ih**](DefaultApi.md#RequestLopoFtq4ih) | **POST** /core/v2/services | Create a Service
[**RequestMpyYtIiS6x**](DefaultApi.md#RequestMpyYtIiS6x) | **GET** /identity/v1/api-account-identities/self | Get the identity of the caller&#39;s API account
[**RequestN6GjgPLO4v**](DefaultApi.md#RequestN6GjgPLO4v) | **GET** /identity/v1/organizations/{organizationId} | Get an Organization
[**RequestNXoV6K2f0Q**](DefaultApi.md#RequestNXoV6K2f0Q) | **POST** /core/v2/app-wans | Create an AppWAN
[**RequestOiIAfX2VUs**](DefaultApi.md#RequestOiIAfX2VUs) | **GET** /core/v2/networks | Get the list of Networks
[**RequestPBaaiO3B0d**](DefaultApi.md#RequestPBaaiO3B0d) | **DELETE** /core/v2/services/{serviceId} | Delete a Service
[**RequestPyR6aUP5mi**](DefaultApi.md#RequestPyR6aUP5mi) | **POST** /core/v2/edge-routers | Create an Edge Router
[**RequestQ0b3cbDW8S**](DefaultApi.md#RequestQ0b3cbDW8S) | **GET** /core/v2/posture-checks | Get the list of Posture Checks
[**RequestTeqMGeER5F**](DefaultApi.md#RequestTeqMGeER5F) | **GET** /core/v2/networks/{networkId} | Get a Network
[**RequestTsyuwlAejK**](DefaultApi.md#RequestTsyuwlAejK) | **GET** /core/v2/endpoints/{endpointId} | Get an Endpoint
[**RequestVIzB1k6Uqb**](DefaultApi.md#RequestVIzB1k6Uqb) | **PATCH** /core/v2/services/{serviceId} | Change some properties of a Service
[**RequestVeJCBUR9iO**](DefaultApi.md#RequestVeJCBUR9iO) | **GET** /rest/v1/network-groups/{networkGroupId} | Get a Network Group
[**RequestVfuaDMeTRP**](DefaultApi.md#RequestVfuaDMeTRP) | **GET** /core/v2/data-centers | Get the list of data centers
[**RequestYLsf4m9TTT**](DefaultApi.md#RequestYLsf4m9TTT) | **GET** /core/v2/services/{serviceId} | Get a Service
[**RequestYhzDAw1Ks4**](DefaultApi.md#RequestYhzDAw1Ks4) | **GET** /core/v2/edge-routers | Get an Edge Router


# **Request4Q1qU3c4dk**
> InlineResponse20012 Request4Q1qU3c4dk(edge.router.id)

Get an Edge Router

### Example
```R
library(openapi)

var.edge.router.id <- 'edge.router.id_example' # character | 

#Get an Edge Router
api.instance <- DefaultApi$new()
result <- api.instance$Request4Q1qU3c4dk(var.edge.router.id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **edge.router.id** | **character**|  | 

### Return type

[**InlineResponse20012**](inline_response_200_12.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/hal+json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** |  |  -  |

# **Request9sDuPizCiu**
> InlineResponse2008 Request9sDuPizCiu(inline.object5=var.inline.object5)

Create an Endpoint

### Example
```R
library(openapi)

var.inline.object5 <- inline_object_5$new(list("attributes_example"), _core_v2_endpoints_enrollmentMethod$new("ott_example"), "name_example", "networkId_example") # InlineObject5 | 

#Create an Endpoint
api.instance <- DefaultApi$new()
result <- api.instance$Request9sDuPizCiu(inline.object5=var.inline.object5)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **inline.object5** | [**InlineObject5**](InlineObject5.md)|  | [optional] 

### Return type

[**InlineResponse2008**](inline_response_200_8.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/hal+json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** |  |  -  |

# **RequestA8syyaPZnw**
> InlineResponse20019 RequestA8syyaPZnw()

Get the list of Network product versions

### Example
```R
library(openapi)


#Get the list of Network product versions
api.instance <- DefaultApi$new()
result <- api.instance$RequestA8syyaPZnw()
dput(result)
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**InlineResponse20019**](inline_response_200_19.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** |  |  -  |

# **RequestAYFhAQd5pn**
> InlineResponse2007 RequestAYFhAQd5pn()

Get an Endpoint

### Example
```R
library(openapi)


#Get an Endpoint
api.instance <- DefaultApi$new()
result <- api.instance$RequestAYFhAQd5pn()
dput(result)
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**InlineResponse2007**](inline_response_200_7.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/hal+json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** |  |  -  |

# **RequestAuarCsIhkJ**
> InlineResponse2009 RequestAuarCsIhkJ(edge.router.id)

Get the registration information for an Edge Router

### Example
```R
library(openapi)

var.edge.router.id <- 'edge.router.id_example' # character | 

#Get the registration information for an Edge Router
api.instance <- DefaultApi$new()
result <- api.instance$RequestAuarCsIhkJ(var.edge.router.id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **edge.router.id** | **character**|  | 

### Return type

[**InlineResponse2009**](inline_response_200_9.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/hal+json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** |  |  -  |

# **RequestBtgg9ZlC0e**
> InlineResponse2004EmbeddedEdgeRouterPolicyList RequestBtgg9ZlC0e(edge.router.policy.id)

Get an Edge Router Policy

### Example
```R
library(openapi)

var.edge.router.policy.id <- 'edge.router.policy.id_example' # character | 

#Get an Edge Router Policy
api.instance <- DefaultApi$new()
result <- api.instance$RequestBtgg9ZlC0e(var.edge.router.policy.id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **edge.router.policy.id** | **character**|  | 

### Return type

[**InlineResponse2004EmbeddedEdgeRouterPolicyList**](inline_response_200_4__embedded_edgeRouterPolicyList.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/hal+json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** |  |  -  |

# **RequestE1IexRfvZg**
> InlineResponse2003 RequestE1IexRfvZg()

Get the list of Services

### Example
```R
library(openapi)


#Get the list of Services
api.instance <- DefaultApi$new()
result <- api.instance$RequestE1IexRfvZg()
dput(result)
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**InlineResponse2003**](inline_response_200_3.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/hal+json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** |  |  -  |

# **RequestFWlFMQIDPX**
> InlineResponse202 RequestFWlFMQIDPX(inline.object=var.inline.object)

Create a Network

### Example
```R
library(openapi)

var.inline.object <- inline_object$new("name_example", "size_example", "locationCode_example", "productVersion_example", "networkGroupId_example") # InlineObject | 

#Create a Network
api.instance <- DefaultApi$new()
result <- api.instance$RequestFWlFMQIDPX(inline.object=var.inline.object)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **inline.object** | [**InlineObject**](InlineObject.md)|  | [optional] 

### Return type

[**InlineResponse202**](inline_response_202.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/hal+json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **202** |  |  -  |

# **RequestGijVCEoMlM**
> InlineResponse2006 RequestGijVCEoMlM()

Get the list of AppWANs

### Example
```R
library(openapi)


#Get the list of AppWANs
api.instance <- DefaultApi$new()
result <- api.instance$RequestGijVCEoMlM()
dput(result)
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**InlineResponse2006**](inline_response_200_6.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/hal+json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** |  |  -  |

# **RequestHp1b9GiLax**
> InlineResponse2004 RequestHp1b9GiLax()

Get an Edge Router Policy

### Example
```R
library(openapi)


#Get an Edge Router Policy
api.instance <- DefaultApi$new()
result <- api.instance$RequestHp1b9GiLax()
dput(result)
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**InlineResponse2004**](inline_response_200_4.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/hal+json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** |  |  -  |

# **RequestIAJViYLviu**
> InlineResponse2024 RequestIAJViYLviu(network.id)

Delete a Network

### Example
```R
library(openapi)

var.network.id <- 'network.id_example' # character | 

#Delete a Network
api.instance <- DefaultApi$new()
result <- api.instance$RequestIAJViYLviu(var.network.id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **network.id** | **character**|  | 

### Return type

[**InlineResponse2024**](inline_response_202_4.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/hal+json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **202** |  |  -  |

# **RequestK9ajDJ8vUS**
> InlineResponse20017 RequestK9ajDJ8vUS()

Get the list of Network Groups

### Example
```R
library(openapi)


#Get the list of Network Groups
api.instance <- DefaultApi$new()
result <- api.instance$RequestK9ajDJ8vUS()
dput(result)
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**InlineResponse20017**](inline_response_200_17.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** |  |  -  |

# **RequestKkeR9gNy25**
> InlineResponse200 RequestKkeR9gNy25(app.wan.id)

Get an AppWAN

### Example
```R
library(openapi)

var.app.wan.id <- 'app.wan.id_example' # character | 

#Get an AppWAN
api.instance <- DefaultApi$new()
result <- api.instance$RequestKkeR9gNy25(var.app.wan.id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **app.wan.id** | **character**|  | 

### Return type

[**InlineResponse200**](inline_response_200.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/hal+json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** |  |  -  |

# **RequestLOXfQSs8GE**
> InlineResponse20015 RequestLOXfQSs8GE()

Get a Network Configuration profile

e.g. small, medium, large

### Example
```R
library(openapi)


#Get a Network Configuration profile
api.instance <- DefaultApi$new()
result <- api.instance$RequestLOXfQSs8GE()
dput(result)
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**InlineResponse20015**](inline_response_200_15.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/hal+json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** |  |  -  |

# **RequestLgKxU4ph9t**
> InlineResponse2004EmbeddedEdgeRouterPolicyList RequestLgKxU4ph9t(inline.object2=var.inline.object2)

Create an Edge Router Policy

### Example
```R
library(openapi)

var.inline.object2 <- inline_object_2$new(list("edgeRouterAttributes_example"), list("endpointAttributes_example"), "name_example", "networkId_example") # InlineObject2 | 

#Create an Edge Router Policy
api.instance <- DefaultApi$new()
result <- api.instance$RequestLgKxU4ph9t(inline.object2=var.inline.object2)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **inline.object2** | [**InlineObject2**](InlineObject2.md)|  | [optional] 

### Return type

[**InlineResponse2004EmbeddedEdgeRouterPolicyList**](inline_response_200_4__embedded_edgeRouterPolicyList.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/hal+json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **202** |  |  -  |

# **RequestLopoFtq4ih**
> InlineResponse2021 RequestLopoFtq4ih(inline.object1=var.inline.object1)

Create a Service

### Example
```R
library(openapi)

var.inline.object1 <- inline_object_1$new("networkId_example", "name_example", _core_v2_services_model$new(list("edgeRouterAttributes_example"), inline_response_200_3__embedded_model_serverEgress$new("host_example", TODO, TODO, 123, "dialInterceptProtocol_example", "address_example", TODO), list("bindEndpointAttributes_example"), _core_v2_services_model_clientIngress$new(list("protocols_example"), "host_example", list(_core_v2_services_model_clientIngress_ports$new("high_example", "low_example")), TODO, list("addresses_example")), list(_core_v2_services_model_edgeRouterHosts$new("edgeRouterId_example", _core_v2_services_model_serverEgress$new("host_example", TODO, "protocol_example")))), list("attributes_example"), "modelType_example", "encryptionRequired_example") # InlineObject1 | 

#Create a Service
api.instance <- DefaultApi$new()
result <- api.instance$RequestLopoFtq4ih(inline.object1=var.inline.object1)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **inline.object1** | [**InlineObject1**](InlineObject1.md)|  | [optional] 

### Return type

[**InlineResponse2021**](inline_response_202_1.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/hal+json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **202** |  |  -  |

# **RequestMpyYtIiS6x**
> InlineResponse20016 RequestMpyYtIiS6x()

Get the identity of the caller's API account

### Example
```R
library(openapi)


#Get the identity of the caller's API account
api.instance <- DefaultApi$new()
result <- api.instance$RequestMpyYtIiS6x()
dput(result)
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**InlineResponse20016**](inline_response_200_16.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** |  |  -  |

# **RequestN6GjgPLO4v**
> InlineResponse20014 RequestN6GjgPLO4v(organization.id)

Get an Organization

### Example
```R
library(openapi)

var.organization.id <- 'organization.id_example' # character | 

#Get an Organization
api.instance <- DefaultApi$new()
result <- api.instance$RequestN6GjgPLO4v(var.organization.id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **organization.id** | **character**|  | 

### Return type

[**InlineResponse20014**](inline_response_200_14.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** |  |  -  |
| **502** |  |  -  |

# **RequestNXoV6K2f0Q**
> InlineResponse200 RequestNXoV6K2f0Q(inline.object4=var.inline.object4)

Create an AppWAN

### Example
```R
library(openapi)

var.inline.object4 <- inline_object_4$new(list("serviceAttributes_example"), "networkId_example", "name_example", list(TODO), list("endpointAttributes_example")) # InlineObject4 | 

#Create an AppWAN
api.instance <- DefaultApi$new()
result <- api.instance$RequestNXoV6K2f0Q(inline.object4=var.inline.object4)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **inline.object4** | [**InlineObject4**](InlineObject4.md)|  | [optional] 

### Return type

[**InlineResponse200**](inline_response_200.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/hal+json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** |  |  -  |

# **RequestOiIAfX2VUs**
> InlineResponse2001 RequestOiIAfX2VUs()

Get the list of Networks

### Example
```R
library(openapi)


#Get the list of Networks
api.instance <- DefaultApi$new()
result <- api.instance$RequestOiIAfX2VUs()
dput(result)
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**InlineResponse2001**](inline_response_200_1.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/hal+json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** |  |  -  |

# **RequestPBaaiO3B0d**
> InlineResponse2022 RequestPBaaiO3B0d(service.id)

Delete a Service

### Example
```R
library(openapi)

var.service.id <- 'service.id_example' # character | 

#Delete a Service
api.instance <- DefaultApi$new()
result <- api.instance$RequestPBaaiO3B0d(var.service.id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **service.id** | **character**|  | 

### Return type

[**InlineResponse2022**](inline_response_202_2.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/hal+json, application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **202** |  |  -  |
| **500** |  |  -  |

# **RequestPyR6aUP5mi**
> InlineResponse2025 RequestPyR6aUP5mi(inline.object6=var.inline.object6)

Create an Edge Router

### Example
```R
library(openapi)

var.inline.object6 <- inline_object_6$new("networkId_example", "name_example", list("attributes_example"), "linkListener_example", "dataCenterId_example") # InlineObject6 | 

#Create an Edge Router
api.instance <- DefaultApi$new()
result <- api.instance$RequestPyR6aUP5mi(inline.object6=var.inline.object6)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **inline.object6** | [**InlineObject6**](InlineObject6.md)|  | [optional] 

### Return type

[**InlineResponse2025**](inline_response_202_5.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/hal+json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **202** |  |  -  |

# **RequestQ0b3cbDW8S**
> InlineResponse20010 RequestQ0b3cbDW8S()

Get the list of Posture Checks

### Example
```R
library(openapi)


#Get the list of Posture Checks
api.instance <- DefaultApi$new()
result <- api.instance$RequestQ0b3cbDW8S()
dput(result)
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**InlineResponse20010**](inline_response_200_10.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/hal+json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** |  |  -  |

# **RequestTeqMGeER5F**
> InlineResponse20013 RequestTeqMGeER5F(network.id)

Get a Network

### Example
```R
library(openapi)

var.network.id <- 'network.id_example' # character | 

#Get a Network
api.instance <- DefaultApi$new()
result <- api.instance$RequestTeqMGeER5F(var.network.id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **network.id** | **character**|  | 

### Return type

[**InlineResponse20013**](inline_response_200_13.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/hal+json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** |  |  -  |
| **500** |  |  -  |

# **RequestTsyuwlAejK**
> InlineResponse2007EmbeddedEndpointList RequestTsyuwlAejK(endpoint.id)

Get an Endpoint

### Example
```R
library(openapi)

var.endpoint.id <- 'endpoint.id_example' # character | 

#Get an Endpoint
api.instance <- DefaultApi$new()
result <- api.instance$RequestTsyuwlAejK(var.endpoint.id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **endpoint.id** | **character**|  | 

### Return type

[**InlineResponse2007EmbeddedEndpointList**](inline_response_200_7__embedded_endpointList.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/hal+json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** |  |  -  |

# **RequestVIzB1k6Uqb**
> InlineResponse2023 RequestVIzB1k6Uqb(service.id, inline.object3=var.inline.object3)

Change some properties of a Service

### Example
```R
library(openapi)

var.service.id <- 'service.id_example' # character | 
var.inline.object3 <- inline_object_3$new(_core_v2_services__serviceId__model$new(list("bindEndpointAttributes_example"), _core_v2_services__serviceId__model_clientIngress$new(list("addresses_example"), list(_core_v2_services_model_clientIngress_ports$new("high_example", "low_example")), list("protocols_example")), list("edgeRouterAttributes_example"), _core_v2_services__serviceId__model_serverEgress$new(TODO, TODO, 123, "dialInterceptProtocol_example", "address_example", TODO)), "modelType_example", "name_example") # InlineObject3 | 

#Change some properties of a Service
api.instance <- DefaultApi$new()
result <- api.instance$RequestVIzB1k6Uqb(var.service.id, inline.object3=var.inline.object3)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **service.id** | **character**|  | 
 **inline.object3** | [**InlineObject3**](InlineObject3.md)|  | [optional] 

### Return type

[**InlineResponse2023**](inline_response_202_3.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/hal+json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **202** |  |  -  |

# **RequestVeJCBUR9iO**
> InlineResponse20011 RequestVeJCBUR9iO(network.group.id)

Get a Network Group

### Example
```R
library(openapi)

var.network.group.id <- 'network.group.id_example' # character | 

#Get a Network Group
api.instance <- DefaultApi$new()
result <- api.instance$RequestVeJCBUR9iO(var.network.group.id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **network.group.id** | **character**|  | 

### Return type

[**InlineResponse20011**](inline_response_200_11.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** |  |  -  |

# **RequestVfuaDMeTRP**
> InlineResponse2002 RequestVfuaDMeTRP()

Get the list of data centers

### Example
```R
library(openapi)


#Get the list of data centers
api.instance <- DefaultApi$new()
result <- api.instance$RequestVfuaDMeTRP()
dput(result)
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**InlineResponse2002**](inline_response_200_2.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/hal+json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** |  |  -  |

# **RequestYLsf4m9TTT**
> InlineResponse2005 RequestYLsf4m9TTT(service.id)

Get a Service

### Example
```R
library(openapi)

var.service.id <- 'service.id_example' # character | 

#Get a Service
api.instance <- DefaultApi$new()
result <- api.instance$RequestYLsf4m9TTT(var.service.id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **service.id** | **character**|  | 

### Return type

[**InlineResponse2005**](inline_response_200_5.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/hal+json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** |  |  -  |

# **RequestYhzDAw1Ks4**
> InlineResponse20018 RequestYhzDAw1Ks4()

Get an Edge Router

### Example
```R
library(openapi)


#Get an Edge Router
api.instance <- DefaultApi$new()
result <- api.instance$RequestYhzDAw1Ks4()
dput(result)
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**InlineResponse20018**](inline_response_200_18.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/hal+json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** |  |  -  |

