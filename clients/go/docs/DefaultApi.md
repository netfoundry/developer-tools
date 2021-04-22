# \DefaultApi

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**Request4Q1qU3c4dk**](DefaultApi.md#Request4Q1qU3c4dk) | **Get** /core/v2/edge-routers/{edgeRouterId} | Get an Edge Router
[**Request9sDuPizCiu**](DefaultApi.md#Request9sDuPizCiu) | **Post** /core/v2/endpoints | Create an Endpoint
[**RequestA8syyaPZnw**](DefaultApi.md#RequestA8syyaPZnw) | **Get** /product-metadata/v2/download-urls.json | Get the list of Network product versions
[**RequestAYFhAQd5pn**](DefaultApi.md#RequestAYFhAQd5pn) | **Get** /core/v2/endpoints | Get an Endpoint
[**RequestAuarCsIhkJ**](DefaultApi.md#RequestAuarCsIhkJ) | **Post** /core/v2/edge-routers/{edgeRouterId}/registration-key | Get the registration information for an Edge Router
[**RequestBtgg9ZlC0e**](DefaultApi.md#RequestBtgg9ZlC0e) | **Get** /core/v2/edge-router-policies/{edgeRouterPolicyId} | Get an Edge Router Policy
[**RequestE1IexRfvZg**](DefaultApi.md#RequestE1IexRfvZg) | **Get** /core/v2/services | Get the list of Services
[**RequestFWlFMQIDPX**](DefaultApi.md#RequestFWlFMQIDPX) | **Post** /core/v2/networks | Create a Network
[**RequestGijVCEoMlM**](DefaultApi.md#RequestGijVCEoMlM) | **Get** /core/v2/app-wans | Get the list of AppWANs
[**RequestHp1b9GiLax**](DefaultApi.md#RequestHp1b9GiLax) | **Get** /core/v2/edge-router-policies | Get an Edge Router Policy
[**RequestIAJViYLviu**](DefaultApi.md#RequestIAJViYLviu) | **Delete** /core/v2/networks/{networkId} | Delete a Network
[**RequestK9ajDJ8vUS**](DefaultApi.md#RequestK9ajDJ8vUS) | **Get** /rest/v1/network-groups | Get the list of Network Groups
[**RequestKkeR9gNy25**](DefaultApi.md#RequestKkeR9gNy25) | **Get** /core/v2/app-wans/{appWanId} | Get an AppWAN
[**RequestLOXfQSs8GE**](DefaultApi.md#RequestLOXfQSs8GE) | **Get** /core/v2/network-configs | Get a Network Configuration profile
[**RequestLgKxU4ph9t**](DefaultApi.md#RequestLgKxU4ph9t) | **Post** /core/v2/edge-router-policies | Create an Edge Router Policy
[**RequestLopoFtq4ih**](DefaultApi.md#RequestLopoFtq4ih) | **Post** /core/v2/services | Create a Service
[**RequestMpyYtIiS6x**](DefaultApi.md#RequestMpyYtIiS6x) | **Get** /identity/v1/api-account-identities/self | Get the identity of the caller&#39;s API account
[**RequestN6GjgPLO4v**](DefaultApi.md#RequestN6GjgPLO4v) | **Get** /identity/v1/organizations/{organizationId} | Get an Organization
[**RequestNXoV6K2f0Q**](DefaultApi.md#RequestNXoV6K2f0Q) | **Post** /core/v2/app-wans | Create an AppWAN
[**RequestOiIAfX2VUs**](DefaultApi.md#RequestOiIAfX2VUs) | **Get** /core/v2/networks | Get the list of Networks
[**RequestPBaaiO3B0d**](DefaultApi.md#RequestPBaaiO3B0d) | **Delete** /core/v2/services/{serviceId} | Delete a Service
[**RequestPyR6aUP5mi**](DefaultApi.md#RequestPyR6aUP5mi) | **Post** /core/v2/edge-routers | Create an Edge Router
[**RequestQ0b3cbDW8S**](DefaultApi.md#RequestQ0b3cbDW8S) | **Get** /core/v2/posture-checks | Get the list of Posture Checks
[**RequestTeqMGeER5F**](DefaultApi.md#RequestTeqMGeER5F) | **Get** /core/v2/networks/{networkId} | Get a Network
[**RequestTsyuwlAejK**](DefaultApi.md#RequestTsyuwlAejK) | **Get** /core/v2/endpoints/{endpointId} | Get an Endpoint
[**RequestVIzB1k6Uqb**](DefaultApi.md#RequestVIzB1k6Uqb) | **Patch** /core/v2/services/{serviceId} | Change some properties of a Service
[**RequestVeJCBUR9iO**](DefaultApi.md#RequestVeJCBUR9iO) | **Get** /rest/v1/network-groups/{networkGroupId} | Get a Network Group
[**RequestVfuaDMeTRP**](DefaultApi.md#RequestVfuaDMeTRP) | **Get** /core/v2/data-centers | Get the list of data centers
[**RequestYLsf4m9TTT**](DefaultApi.md#RequestYLsf4m9TTT) | **Get** /core/v2/services/{serviceId} | Get a Service
[**RequestYhzDAw1Ks4**](DefaultApi.md#RequestYhzDAw1Ks4) | **Get** /core/v2/edge-routers | Get an Edge Router



## Request4Q1qU3c4dk

> InlineResponse20012 Request4Q1qU3c4dk(ctx, edgeRouterId)

Get an Edge Router

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**edgeRouterId** | **string**|  | 

### Return type

[**InlineResponse20012**](inline_response_200_12.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/hal+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## Request9sDuPizCiu

> InlineResponse2008 Request9sDuPizCiu(ctx, optional)

Create an Endpoint

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
 **optional** | ***Request9sDuPizCiuOpts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a Request9sDuPizCiuOpts struct


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **inlineObject5** | [**optional.Interface of InlineObject5**](InlineObject5.md)|  | 

### Return type

[**InlineResponse2008**](inline_response_200_8.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/hal+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## RequestA8syyaPZnw

> InlineResponse20019 RequestA8syyaPZnw(ctx, )

Get the list of Network product versions

### Required Parameters

This endpoint does not need any parameter.

### Return type

[**InlineResponse20019**](inline_response_200_19.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## RequestAYFhAQd5pn

> InlineResponse2007 RequestAYFhAQd5pn(ctx, )

Get an Endpoint

### Required Parameters

This endpoint does not need any parameter.

### Return type

[**InlineResponse2007**](inline_response_200_7.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/hal+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## RequestAuarCsIhkJ

> InlineResponse2009 RequestAuarCsIhkJ(ctx, edgeRouterId)

Get the registration information for an Edge Router

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**edgeRouterId** | **string**|  | 

### Return type

[**InlineResponse2009**](inline_response_200_9.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/hal+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## RequestBtgg9ZlC0e

> InlineResponse2004EmbeddedEdgeRouterPolicyList RequestBtgg9ZlC0e(ctx, edgeRouterPolicyId)

Get an Edge Router Policy

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**edgeRouterPolicyId** | **string**|  | 

### Return type

[**InlineResponse2004EmbeddedEdgeRouterPolicyList**](inline_response_200_4__embedded_edgeRouterPolicyList.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/hal+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## RequestE1IexRfvZg

> InlineResponse2003 RequestE1IexRfvZg(ctx, )

Get the list of Services

### Required Parameters

This endpoint does not need any parameter.

### Return type

[**InlineResponse2003**](inline_response_200_3.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/hal+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## RequestFWlFMQIDPX

> InlineResponse202 RequestFWlFMQIDPX(ctx, optional)

Create a Network

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
 **optional** | ***RequestFWlFMQIDPXOpts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a RequestFWlFMQIDPXOpts struct


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **inlineObject** | [**optional.Interface of InlineObject**](InlineObject.md)|  | 

### Return type

[**InlineResponse202**](inline_response_202.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/hal+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## RequestGijVCEoMlM

> InlineResponse2006 RequestGijVCEoMlM(ctx, )

Get the list of AppWANs

### Required Parameters

This endpoint does not need any parameter.

### Return type

[**InlineResponse2006**](inline_response_200_6.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/hal+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## RequestHp1b9GiLax

> InlineResponse2004 RequestHp1b9GiLax(ctx, )

Get an Edge Router Policy

### Required Parameters

This endpoint does not need any parameter.

### Return type

[**InlineResponse2004**](inline_response_200_4.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/hal+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## RequestIAJViYLviu

> InlineResponse2024 RequestIAJViYLviu(ctx, networkId)

Delete a Network

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**networkId** | **string**|  | 

### Return type

[**InlineResponse2024**](inline_response_202_4.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/hal+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## RequestK9ajDJ8vUS

> InlineResponse20017 RequestK9ajDJ8vUS(ctx, )

Get the list of Network Groups

### Required Parameters

This endpoint does not need any parameter.

### Return type

[**InlineResponse20017**](inline_response_200_17.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## RequestKkeR9gNy25

> InlineResponse200 RequestKkeR9gNy25(ctx, appWanId)

Get an AppWAN

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**appWanId** | **string**|  | 

### Return type

[**InlineResponse200**](inline_response_200.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/hal+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## RequestLOXfQSs8GE

> InlineResponse20015 RequestLOXfQSs8GE(ctx, )

Get a Network Configuration profile

e.g. small, medium, large

### Required Parameters

This endpoint does not need any parameter.

### Return type

[**InlineResponse20015**](inline_response_200_15.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/hal+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## RequestLgKxU4ph9t

> InlineResponse2004EmbeddedEdgeRouterPolicyList RequestLgKxU4ph9t(ctx, optional)

Create an Edge Router Policy

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
 **optional** | ***RequestLgKxU4ph9tOpts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a RequestLgKxU4ph9tOpts struct


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **inlineObject2** | [**optional.Interface of InlineObject2**](InlineObject2.md)|  | 

### Return type

[**InlineResponse2004EmbeddedEdgeRouterPolicyList**](inline_response_200_4__embedded_edgeRouterPolicyList.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/hal+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## RequestLopoFtq4ih

> InlineResponse2021 RequestLopoFtq4ih(ctx, optional)

Create a Service

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
 **optional** | ***RequestLopoFtq4ihOpts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a RequestLopoFtq4ihOpts struct


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **inlineObject1** | [**optional.Interface of InlineObject1**](InlineObject1.md)|  | 

### Return type

[**InlineResponse2021**](inline_response_202_1.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/hal+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## RequestMpyYtIiS6x

> InlineResponse20016 RequestMpyYtIiS6x(ctx, )

Get the identity of the caller's API account

### Required Parameters

This endpoint does not need any parameter.

### Return type

[**InlineResponse20016**](inline_response_200_16.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## RequestN6GjgPLO4v

> InlineResponse20014 RequestN6GjgPLO4v(ctx, organizationId)

Get an Organization

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**organizationId** | **string**|  | 

### Return type

[**InlineResponse20014**](inline_response_200_14.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## RequestNXoV6K2f0Q

> InlineResponse200 RequestNXoV6K2f0Q(ctx, optional)

Create an AppWAN

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
 **optional** | ***RequestNXoV6K2f0QOpts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a RequestNXoV6K2f0QOpts struct


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **inlineObject4** | [**optional.Interface of InlineObject4**](InlineObject4.md)|  | 

### Return type

[**InlineResponse200**](inline_response_200.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/hal+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## RequestOiIAfX2VUs

> InlineResponse2001 RequestOiIAfX2VUs(ctx, )

Get the list of Networks

### Required Parameters

This endpoint does not need any parameter.

### Return type

[**InlineResponse2001**](inline_response_200_1.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/hal+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## RequestPBaaiO3B0d

> InlineResponse2022 RequestPBaaiO3B0d(ctx, serviceId)

Delete a Service

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**serviceId** | **string**|  | 

### Return type

[**InlineResponse2022**](inline_response_202_2.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/hal+json, application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## RequestPyR6aUP5mi

> InlineResponse2025 RequestPyR6aUP5mi(ctx, optional)

Create an Edge Router

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
 **optional** | ***RequestPyR6aUP5miOpts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a RequestPyR6aUP5miOpts struct


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **inlineObject6** | [**optional.Interface of InlineObject6**](InlineObject6.md)|  | 

### Return type

[**InlineResponse2025**](inline_response_202_5.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/hal+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## RequestQ0b3cbDW8S

> InlineResponse20010 RequestQ0b3cbDW8S(ctx, )

Get the list of Posture Checks

### Required Parameters

This endpoint does not need any parameter.

### Return type

[**InlineResponse20010**](inline_response_200_10.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/hal+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## RequestTeqMGeER5F

> InlineResponse20013 RequestTeqMGeER5F(ctx, networkId)

Get a Network

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**networkId** | **string**|  | 

### Return type

[**InlineResponse20013**](inline_response_200_13.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/hal+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## RequestTsyuwlAejK

> InlineResponse2007EmbeddedEndpointList RequestTsyuwlAejK(ctx, endpointId)

Get an Endpoint

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**endpointId** | **string**|  | 

### Return type

[**InlineResponse2007EmbeddedEndpointList**](inline_response_200_7__embedded_endpointList.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/hal+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## RequestVIzB1k6Uqb

> InlineResponse2023 RequestVIzB1k6Uqb(ctx, serviceId, optional)

Change some properties of a Service

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**serviceId** | **string**|  | 
 **optional** | ***RequestVIzB1k6UqbOpts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a RequestVIzB1k6UqbOpts struct


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------

 **inlineObject3** | [**optional.Interface of InlineObject3**](InlineObject3.md)|  | 

### Return type

[**InlineResponse2023**](inline_response_202_3.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/hal+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## RequestVeJCBUR9iO

> InlineResponse20011 RequestVeJCBUR9iO(ctx, networkGroupId)

Get a Network Group

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**networkGroupId** | **string**|  | 

### Return type

[**InlineResponse20011**](inline_response_200_11.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## RequestVfuaDMeTRP

> InlineResponse2002 RequestVfuaDMeTRP(ctx, )

Get the list of data centers

### Required Parameters

This endpoint does not need any parameter.

### Return type

[**InlineResponse2002**](inline_response_200_2.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/hal+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## RequestYLsf4m9TTT

> InlineResponse2005 RequestYLsf4m9TTT(ctx, serviceId)

Get a Service

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**serviceId** | **string**|  | 

### Return type

[**InlineResponse2005**](inline_response_200_5.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/hal+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## RequestYhzDAw1Ks4

> InlineResponse20018 RequestYhzDAw1Ks4(ctx, )

Get an Edge Router

### Required Parameters

This endpoint does not need any parameter.

### Return type

[**InlineResponse20018**](inline_response_200_18.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/hal+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)

