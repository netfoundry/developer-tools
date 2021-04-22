# \DefaultApi

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**request4_q1q_u3c4dk**](DefaultApi.md#request4_q1q_u3c4dk) | **Get** /core/v2/edge-routers/{edgeRouterId} | Get an Edge Router
[**request9s_du_piz_ciu**](DefaultApi.md#request9s_du_piz_ciu) | **Post** /core/v2/endpoints | Create an Endpoint
[**request_a8syya_p_znw**](DefaultApi.md#request_a8syya_p_znw) | **Get** /product-metadata/v2/download-urls.json | Get the list of Network product versions
[**request_auar_cs_ihk_j**](DefaultApi.md#request_auar_cs_ihk_j) | **Post** /core/v2/edge-routers/{edgeRouterId}/registration-key | Get the registration information for an Edge Router
[**request_ay_fh_a_qd5pn**](DefaultApi.md#request_ay_fh_a_qd5pn) | **Get** /core/v2/endpoints | Get an Endpoint
[**request_btgg9_zl_c0e**](DefaultApi.md#request_btgg9_zl_c0e) | **Get** /core/v2/edge-router-policies/{edgeRouterPolicyId} | Get an Edge Router Policy
[**request_e1_iex_rfv_zg**](DefaultApi.md#request_e1_iex_rfv_zg) | **Get** /core/v2/services | Get the list of Services
[**request_f_wl_fmqidpx**](DefaultApi.md#request_f_wl_fmqidpx) | **Post** /core/v2/networks | Create a Network
[**request_gij_vc_eo_ml_m**](DefaultApi.md#request_gij_vc_eo_ml_m) | **Get** /core/v2/app-wans | Get the list of AppWANs
[**request_hp1b9_gi_lax**](DefaultApi.md#request_hp1b9_gi_lax) | **Get** /core/v2/edge-router-policies | Get an Edge Router Policy
[**request_iaj_vi_y_lviu**](DefaultApi.md#request_iaj_vi_y_lviu) | **Delete** /core/v2/networks/{networkId} | Delete a Network
[**request_k9aj_dj8v_us**](DefaultApi.md#request_k9aj_dj8v_us) | **Get** /rest/v1/network-groups | Get the list of Network Groups
[**request_kke_r9g_ny25**](DefaultApi.md#request_kke_r9g_ny25) | **Get** /core/v2/app-wans/{appWanId} | Get an AppWAN
[**request_lg_kx_u4ph9t**](DefaultApi.md#request_lg_kx_u4ph9t) | **Post** /core/v2/edge-router-policies | Create an Edge Router Policy
[**request_lo_xf_q_ss8_ge**](DefaultApi.md#request_lo_xf_q_ss8_ge) | **Get** /core/v2/network-configs | Get a Network Configuration profile
[**request_lopo_ftq4ih**](DefaultApi.md#request_lopo_ftq4ih) | **Post** /core/v2/services | Create a Service
[**request_mpy_yt_ii_s6x**](DefaultApi.md#request_mpy_yt_ii_s6x) | **Get** /identity/v1/api-account-identities/self | Get the identity of the caller's API account
[**request_n6_gjg_plo4v**](DefaultApi.md#request_n6_gjg_plo4v) | **Get** /identity/v1/organizations/{organizationId} | Get an Organization
[**request_n_xo_v6_k2f0_q**](DefaultApi.md#request_n_xo_v6_k2f0_q) | **Post** /core/v2/app-wans | Create an AppWAN
[**request_oi_i_af_x2_v_us**](DefaultApi.md#request_oi_i_af_x2_v_us) | **Get** /core/v2/networks | Get the list of Networks
[**request_p_baai_o3_b0d**](DefaultApi.md#request_p_baai_o3_b0d) | **Delete** /core/v2/services/{serviceId} | Delete a Service
[**request_py_r6a_up5mi**](DefaultApi.md#request_py_r6a_up5mi) | **Post** /core/v2/edge-routers | Create an Edge Router
[**request_q0b3cb_dw8_s**](DefaultApi.md#request_q0b3cb_dw8_s) | **Get** /core/v2/posture-checks | Get the list of Posture Checks
[**request_teq_m_ge_er5_f**](DefaultApi.md#request_teq_m_ge_er5_f) | **Get** /core/v2/networks/{networkId} | Get a Network
[**request_tsyuwl_aej_k**](DefaultApi.md#request_tsyuwl_aej_k) | **Get** /core/v2/endpoints/{endpointId} | Get an Endpoint
[**request_v_iz_b1k6_uqb**](DefaultApi.md#request_v_iz_b1k6_uqb) | **Patch** /core/v2/services/{serviceId} | Change some properties of a Service
[**request_ve_jcbur9i_o**](DefaultApi.md#request_ve_jcbur9i_o) | **Get** /rest/v1/network-groups/{networkGroupId} | Get a Network Group
[**request_vfua_d_me_trp**](DefaultApi.md#request_vfua_d_me_trp) | **Get** /core/v2/data-centers | Get the list of data centers
[**request_y_lsf4m9_ttt**](DefaultApi.md#request_y_lsf4m9_ttt) | **Get** /core/v2/services/{serviceId} | Get a Service
[**request_yhz_d_aw1_ks4**](DefaultApi.md#request_yhz_d_aw1_ks4) | **Get** /core/v2/edge-routers | Get an Edge Router



## request4_q1q_u3c4dk

> crate::models::InlineResponse20012 request4_q1q_u3c4dk(edge_router_id)
Get an Edge Router

### Parameters


Name | Type | Description  | Required | Notes
------------- | ------------- | ------------- | ------------- | -------------
**edge_router_id** | **String** |  | [required] |

### Return type

[**crate::models::InlineResponse20012**](inline_response_200_12.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/hal+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## request9s_du_piz_ciu

> crate::models::InlineResponse2008 request9s_du_piz_ciu(inline_object5)
Create an Endpoint

### Parameters


Name | Type | Description  | Required | Notes
------------- | ------------- | ------------- | ------------- | -------------
**inline_object5** | Option<[**InlineObject5**](InlineObject5.md)> |  |  |

### Return type

[**crate::models::InlineResponse2008**](inline_response_200_8.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/hal+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## request_a8syya_p_znw

> crate::models::InlineResponse20019 request_a8syya_p_znw()
Get the list of Network product versions

### Parameters

This endpoint does not need any parameter.

### Return type

[**crate::models::InlineResponse20019**](inline_response_200_19.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## request_auar_cs_ihk_j

> crate::models::InlineResponse2009 request_auar_cs_ihk_j(edge_router_id)
Get the registration information for an Edge Router

### Parameters


Name | Type | Description  | Required | Notes
------------- | ------------- | ------------- | ------------- | -------------
**edge_router_id** | **String** |  | [required] |

### Return type

[**crate::models::InlineResponse2009**](inline_response_200_9.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/hal+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## request_ay_fh_a_qd5pn

> crate::models::InlineResponse2007 request_ay_fh_a_qd5pn()
Get an Endpoint

### Parameters

This endpoint does not need any parameter.

### Return type

[**crate::models::InlineResponse2007**](inline_response_200_7.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/hal+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## request_btgg9_zl_c0e

> crate::models::InlineResponse2004EmbeddedEdgeRouterPolicyList request_btgg9_zl_c0e(edge_router_policy_id)
Get an Edge Router Policy

### Parameters


Name | Type | Description  | Required | Notes
------------- | ------------- | ------------- | ------------- | -------------
**edge_router_policy_id** | **String** |  | [required] |

### Return type

[**crate::models::InlineResponse2004EmbeddedEdgeRouterPolicyList**](inline_response_200_4__embedded_edgeRouterPolicyList.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/hal+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## request_e1_iex_rfv_zg

> crate::models::InlineResponse2003 request_e1_iex_rfv_zg()
Get the list of Services

### Parameters

This endpoint does not need any parameter.

### Return type

[**crate::models::InlineResponse2003**](inline_response_200_3.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/hal+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## request_f_wl_fmqidpx

> crate::models::InlineResponse202 request_f_wl_fmqidpx(inline_object)
Create a Network

### Parameters


Name | Type | Description  | Required | Notes
------------- | ------------- | ------------- | ------------- | -------------
**inline_object** | Option<[**InlineObject**](InlineObject.md)> |  |  |

### Return type

[**crate::models::InlineResponse202**](inline_response_202.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/hal+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## request_gij_vc_eo_ml_m

> crate::models::InlineResponse2006 request_gij_vc_eo_ml_m()
Get the list of AppWANs

### Parameters

This endpoint does not need any parameter.

### Return type

[**crate::models::InlineResponse2006**](inline_response_200_6.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/hal+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## request_hp1b9_gi_lax

> crate::models::InlineResponse2004 request_hp1b9_gi_lax()
Get an Edge Router Policy

### Parameters

This endpoint does not need any parameter.

### Return type

[**crate::models::InlineResponse2004**](inline_response_200_4.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/hal+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## request_iaj_vi_y_lviu

> crate::models::InlineResponse2024 request_iaj_vi_y_lviu(network_id)
Delete a Network

### Parameters


Name | Type | Description  | Required | Notes
------------- | ------------- | ------------- | ------------- | -------------
**network_id** | **String** |  | [required] |

### Return type

[**crate::models::InlineResponse2024**](inline_response_202_4.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/hal+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## request_k9aj_dj8v_us

> crate::models::InlineResponse20017 request_k9aj_dj8v_us()
Get the list of Network Groups

### Parameters

This endpoint does not need any parameter.

### Return type

[**crate::models::InlineResponse20017**](inline_response_200_17.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## request_kke_r9g_ny25

> crate::models::InlineResponse200 request_kke_r9g_ny25(app_wan_id)
Get an AppWAN

### Parameters


Name | Type | Description  | Required | Notes
------------- | ------------- | ------------- | ------------- | -------------
**app_wan_id** | **String** |  | [required] |

### Return type

[**crate::models::InlineResponse200**](inline_response_200.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/hal+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## request_lg_kx_u4ph9t

> crate::models::InlineResponse2004EmbeddedEdgeRouterPolicyList request_lg_kx_u4ph9t(inline_object2)
Create an Edge Router Policy

### Parameters


Name | Type | Description  | Required | Notes
------------- | ------------- | ------------- | ------------- | -------------
**inline_object2** | Option<[**InlineObject2**](InlineObject2.md)> |  |  |

### Return type

[**crate::models::InlineResponse2004EmbeddedEdgeRouterPolicyList**](inline_response_200_4__embedded_edgeRouterPolicyList.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/hal+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## request_lo_xf_q_ss8_ge

> crate::models::InlineResponse20015 request_lo_xf_q_ss8_ge()
Get a Network Configuration profile

e.g. small, medium, large

### Parameters

This endpoint does not need any parameter.

### Return type

[**crate::models::InlineResponse20015**](inline_response_200_15.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/hal+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## request_lopo_ftq4ih

> crate::models::InlineResponse2021 request_lopo_ftq4ih(inline_object1)
Create a Service

### Parameters


Name | Type | Description  | Required | Notes
------------- | ------------- | ------------- | ------------- | -------------
**inline_object1** | Option<[**InlineObject1**](InlineObject1.md)> |  |  |

### Return type

[**crate::models::InlineResponse2021**](inline_response_202_1.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/hal+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## request_mpy_yt_ii_s6x

> crate::models::InlineResponse20016 request_mpy_yt_ii_s6x()
Get the identity of the caller's API account

### Parameters

This endpoint does not need any parameter.

### Return type

[**crate::models::InlineResponse20016**](inline_response_200_16.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## request_n6_gjg_plo4v

> crate::models::InlineResponse20014 request_n6_gjg_plo4v(organization_id)
Get an Organization

### Parameters


Name | Type | Description  | Required | Notes
------------- | ------------- | ------------- | ------------- | -------------
**organization_id** | **String** |  | [required] |

### Return type

[**crate::models::InlineResponse20014**](inline_response_200_14.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## request_n_xo_v6_k2f0_q

> crate::models::InlineResponse200 request_n_xo_v6_k2f0_q(inline_object4)
Create an AppWAN

### Parameters


Name | Type | Description  | Required | Notes
------------- | ------------- | ------------- | ------------- | -------------
**inline_object4** | Option<[**InlineObject4**](InlineObject4.md)> |  |  |

### Return type

[**crate::models::InlineResponse200**](inline_response_200.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/hal+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## request_oi_i_af_x2_v_us

> crate::models::InlineResponse2001 request_oi_i_af_x2_v_us()
Get the list of Networks

### Parameters

This endpoint does not need any parameter.

### Return type

[**crate::models::InlineResponse2001**](inline_response_200_1.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/hal+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## request_p_baai_o3_b0d

> crate::models::InlineResponse2022 request_p_baai_o3_b0d(service_id)
Delete a Service

### Parameters


Name | Type | Description  | Required | Notes
------------- | ------------- | ------------- | ------------- | -------------
**service_id** | **String** |  | [required] |

### Return type

[**crate::models::InlineResponse2022**](inline_response_202_2.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/hal+json, application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## request_py_r6a_up5mi

> crate::models::InlineResponse2025 request_py_r6a_up5mi(inline_object6)
Create an Edge Router

### Parameters


Name | Type | Description  | Required | Notes
------------- | ------------- | ------------- | ------------- | -------------
**inline_object6** | Option<[**InlineObject6**](InlineObject6.md)> |  |  |

### Return type

[**crate::models::InlineResponse2025**](inline_response_202_5.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/hal+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## request_q0b3cb_dw8_s

> crate::models::InlineResponse20010 request_q0b3cb_dw8_s()
Get the list of Posture Checks

### Parameters

This endpoint does not need any parameter.

### Return type

[**crate::models::InlineResponse20010**](inline_response_200_10.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/hal+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## request_teq_m_ge_er5_f

> crate::models::InlineResponse20013 request_teq_m_ge_er5_f(network_id)
Get a Network

### Parameters


Name | Type | Description  | Required | Notes
------------- | ------------- | ------------- | ------------- | -------------
**network_id** | **String** |  | [required] |

### Return type

[**crate::models::InlineResponse20013**](inline_response_200_13.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/hal+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## request_tsyuwl_aej_k

> crate::models::InlineResponse2007EmbeddedEndpointList request_tsyuwl_aej_k(endpoint_id)
Get an Endpoint

### Parameters


Name | Type | Description  | Required | Notes
------------- | ------------- | ------------- | ------------- | -------------
**endpoint_id** | **String** |  | [required] |

### Return type

[**crate::models::InlineResponse2007EmbeddedEndpointList**](inline_response_200_7__embedded_endpointList.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/hal+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## request_v_iz_b1k6_uqb

> crate::models::InlineResponse2023 request_v_iz_b1k6_uqb(service_id, inline_object3)
Change some properties of a Service

### Parameters


Name | Type | Description  | Required | Notes
------------- | ------------- | ------------- | ------------- | -------------
**service_id** | **String** |  | [required] |
**inline_object3** | Option<[**InlineObject3**](InlineObject3.md)> |  |  |

### Return type

[**crate::models::InlineResponse2023**](inline_response_202_3.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/hal+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## request_ve_jcbur9i_o

> crate::models::InlineResponse20011 request_ve_jcbur9i_o(network_group_id)
Get a Network Group

### Parameters


Name | Type | Description  | Required | Notes
------------- | ------------- | ------------- | ------------- | -------------
**network_group_id** | **String** |  | [required] |

### Return type

[**crate::models::InlineResponse20011**](inline_response_200_11.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## request_vfua_d_me_trp

> crate::models::InlineResponse2002 request_vfua_d_me_trp()
Get the list of data centers

### Parameters

This endpoint does not need any parameter.

### Return type

[**crate::models::InlineResponse2002**](inline_response_200_2.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/hal+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## request_y_lsf4m9_ttt

> crate::models::InlineResponse2005 request_y_lsf4m9_ttt(service_id)
Get a Service

### Parameters


Name | Type | Description  | Required | Notes
------------- | ------------- | ------------- | ------------- | -------------
**service_id** | **String** |  | [required] |

### Return type

[**crate::models::InlineResponse2005**](inline_response_200_5.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/hal+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## request_yhz_d_aw1_ks4

> crate::models::InlineResponse20018 request_yhz_d_aw1_ks4()
Get an Edge Router

### Parameters

This endpoint does not need any parameter.

### Return type

[**crate::models::InlineResponse20018**](inline_response_200_18.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/hal+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

