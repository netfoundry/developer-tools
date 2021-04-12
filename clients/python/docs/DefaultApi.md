# openapi_client.DefaultApi

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**request4_q1q_u3c4dk**](DefaultApi.md#request4_q1q_u3c4dk) | **GET** /core/v2/edge-routers/{edgeRouterId} | Get an Edge Router
[**request9s_du_piz_ciu**](DefaultApi.md#request9s_du_piz_ciu) | **POST** /core/v2/endpoints | Create an Endpoint
[**request_a8syya_p_znw**](DefaultApi.md#request_a8syya_p_znw) | **GET** /product-metadata/v2/download-urls.json | Get the list of Network product versions
[**request_auar_cs_ihk_j**](DefaultApi.md#request_auar_cs_ihk_j) | **POST** /core/v2/edge-routers/{edgeRouterId}/registration-key | Get the registration information for an Edge Router
[**request_ay_fh_a_qd5pn**](DefaultApi.md#request_ay_fh_a_qd5pn) | **GET** /core/v2/endpoints | Get an Endpoint
[**request_btgg9_zl_c0e**](DefaultApi.md#request_btgg9_zl_c0e) | **GET** /core/v2/edge-router-policies/{edgeRouterPolicyId} | Get an Edge Router Policy
[**request_e1_iex_rfv_zg**](DefaultApi.md#request_e1_iex_rfv_zg) | **GET** /core/v2/services | Get the list of Services
[**request_f_wl_fmqidpx**](DefaultApi.md#request_f_wl_fmqidpx) | **POST** /core/v2/networks | Create a Network
[**request_gij_vc_eo_ml_m**](DefaultApi.md#request_gij_vc_eo_ml_m) | **GET** /core/v2/app-wans | Get the list of AppWANs
[**request_hp1b9_gi_lax**](DefaultApi.md#request_hp1b9_gi_lax) | **GET** /core/v2/edge-router-policies | Get an Edge Router Policy
[**request_iaj_vi_y_lviu**](DefaultApi.md#request_iaj_vi_y_lviu) | **DELETE** /core/v2/networks/{networkId} | Delete a Network
[**request_k9aj_dj8v_us**](DefaultApi.md#request_k9aj_dj8v_us) | **GET** /rest/v1/network-groups | Get the list of Network Groups
[**request_kke_r9g_ny25**](DefaultApi.md#request_kke_r9g_ny25) | **GET** /core/v2/app-wans/{appWanId} | Get an AppWAN
[**request_lg_kx_u4ph9t**](DefaultApi.md#request_lg_kx_u4ph9t) | **POST** /core/v2/edge-router-policies | Create an Edge Router Policy
[**request_lo_xf_q_ss8_ge**](DefaultApi.md#request_lo_xf_q_ss8_ge) | **GET** /core/v2/network-configs | Get a Network Configuration profile
[**request_lopo_ftq4ih**](DefaultApi.md#request_lopo_ftq4ih) | **POST** /core/v2/services | Create a Service
[**request_mpy_yt_ii_s6x**](DefaultApi.md#request_mpy_yt_ii_s6x) | **GET** /identity/v1/api-account-identities/self | Get the identity of the caller&#39;s API account
[**request_n6_gjg_plo4v**](DefaultApi.md#request_n6_gjg_plo4v) | **GET** /identity/v1/organizations/{organizationId} | Get an Organization
[**request_n_xo_v6_k2f0_q**](DefaultApi.md#request_n_xo_v6_k2f0_q) | **POST** /core/v2/app-wans | Create an AppWAN
[**request_oi_i_af_x2_v_us**](DefaultApi.md#request_oi_i_af_x2_v_us) | **GET** /core/v2/networks | Get the list of Networks
[**request_p_baai_o3_b0d**](DefaultApi.md#request_p_baai_o3_b0d) | **DELETE** /core/v2/services/{serviceId} | Delete a Service
[**request_py_r6a_up5mi**](DefaultApi.md#request_py_r6a_up5mi) | **POST** /core/v2/edge-routers | Create an Edge Router
[**request_q0b3cb_dw8_s**](DefaultApi.md#request_q0b3cb_dw8_s) | **GET** /core/v2/posture-checks | Get the list of Posture Checks
[**request_teq_m_ge_er5_f**](DefaultApi.md#request_teq_m_ge_er5_f) | **GET** /core/v2/networks/{networkId} | Get a Network
[**request_tsyuwl_aej_k**](DefaultApi.md#request_tsyuwl_aej_k) | **GET** /core/v2/endpoints/{endpointId} | Get an Endpoint
[**request_v_iz_b1k6_uqb**](DefaultApi.md#request_v_iz_b1k6_uqb) | **PATCH** /core/v2/services/{serviceId} | Change some properties of a Service
[**request_ve_jcbur9i_o**](DefaultApi.md#request_ve_jcbur9i_o) | **GET** /rest/v1/network-groups/{networkGroupId} | Get a Network Group
[**request_vfua_d_me_trp**](DefaultApi.md#request_vfua_d_me_trp) | **GET** /core/v2/data-centers | Get the list of data centers
[**request_y_lsf4m9_ttt**](DefaultApi.md#request_y_lsf4m9_ttt) | **GET** /core/v2/services/{serviceId} | Get a Service
[**request_yhz_d_aw1_ks4**](DefaultApi.md#request_yhz_d_aw1_ks4) | **GET** /core/v2/edge-routers | Get an Edge Router


# **request4_q1q_u3c4dk**
> InlineResponse20012 request4_q1q_u3c4dk(edge_router_id)

Get an Edge Router

### Example

```python
from __future__ import print_function
import time
import openapi_client
from openapi_client.rest import ApiException
from pprint import pprint
# Defining the host is optional and defaults to http://localhost
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "http://localhost"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = openapi_client.DefaultApi(api_client)
    edge_router_id = 'edge_router_id_example' # str | 

    try:
        # Get an Edge Router
        api_response = api_instance.request4_q1q_u3c4dk(edge_router_id)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling DefaultApi->request4_q1q_u3c4dk: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **edge_router_id** | **str**|  | 

### Return type

[**InlineResponse20012**](InlineResponse20012.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/hal+json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** |  |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **request9s_du_piz_ciu**
> InlineResponse2008 request9s_du_piz_ciu(inline_object5=inline_object5)

Create an Endpoint

### Example

```python
from __future__ import print_function
import time
import openapi_client
from openapi_client.rest import ApiException
from pprint import pprint
# Defining the host is optional and defaults to http://localhost
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "http://localhost"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = openapi_client.DefaultApi(api_client)
    inline_object5 = openapi_client.InlineObject5() # InlineObject5 |  (optional)

    try:
        # Create an Endpoint
        api_response = api_instance.request9s_du_piz_ciu(inline_object5=inline_object5)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling DefaultApi->request9s_du_piz_ciu: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **inline_object5** | [**InlineObject5**](InlineObject5.md)|  | [optional] 

### Return type

[**InlineResponse2008**](InlineResponse2008.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/hal+json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** |  |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **request_a8syya_p_znw**
> InlineResponse20019 request_a8syya_p_znw()

Get the list of Network product versions

### Example

```python
from __future__ import print_function
import time
import openapi_client
from openapi_client.rest import ApiException
from pprint import pprint
# Defining the host is optional and defaults to http://localhost
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "http://localhost"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = openapi_client.DefaultApi(api_client)
    
    try:
        # Get the list of Network product versions
        api_response = api_instance.request_a8syya_p_znw()
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling DefaultApi->request_a8syya_p_znw: %s\n" % e)
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

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** |  |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **request_auar_cs_ihk_j**
> InlineResponse2009 request_auar_cs_ihk_j(edge_router_id)

Get the registration information for an Edge Router

### Example

```python
from __future__ import print_function
import time
import openapi_client
from openapi_client.rest import ApiException
from pprint import pprint
# Defining the host is optional and defaults to http://localhost
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "http://localhost"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = openapi_client.DefaultApi(api_client)
    edge_router_id = 'edge_router_id_example' # str | 

    try:
        # Get the registration information for an Edge Router
        api_response = api_instance.request_auar_cs_ihk_j(edge_router_id)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling DefaultApi->request_auar_cs_ihk_j: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **edge_router_id** | **str**|  | 

### Return type

[**InlineResponse2009**](InlineResponse2009.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/hal+json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** |  |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **request_ay_fh_a_qd5pn**
> InlineResponse2007 request_ay_fh_a_qd5pn()

Get an Endpoint

### Example

```python
from __future__ import print_function
import time
import openapi_client
from openapi_client.rest import ApiException
from pprint import pprint
# Defining the host is optional and defaults to http://localhost
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "http://localhost"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = openapi_client.DefaultApi(api_client)
    
    try:
        # Get an Endpoint
        api_response = api_instance.request_ay_fh_a_qd5pn()
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling DefaultApi->request_ay_fh_a_qd5pn: %s\n" % e)
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

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** |  |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **request_btgg9_zl_c0e**
> InlineResponse2004EmbeddedEdgeRouterPolicyList request_btgg9_zl_c0e(edge_router_policy_id)

Get an Edge Router Policy

### Example

```python
from __future__ import print_function
import time
import openapi_client
from openapi_client.rest import ApiException
from pprint import pprint
# Defining the host is optional and defaults to http://localhost
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "http://localhost"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = openapi_client.DefaultApi(api_client)
    edge_router_policy_id = 'edge_router_policy_id_example' # str | 

    try:
        # Get an Edge Router Policy
        api_response = api_instance.request_btgg9_zl_c0e(edge_router_policy_id)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling DefaultApi->request_btgg9_zl_c0e: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **edge_router_policy_id** | **str**|  | 

### Return type

[**InlineResponse2004EmbeddedEdgeRouterPolicyList**](InlineResponse2004EmbeddedEdgeRouterPolicyList.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/hal+json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** |  |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **request_e1_iex_rfv_zg**
> InlineResponse2003 request_e1_iex_rfv_zg()

Get the list of Services

### Example

```python
from __future__ import print_function
import time
import openapi_client
from openapi_client.rest import ApiException
from pprint import pprint
# Defining the host is optional and defaults to http://localhost
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "http://localhost"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = openapi_client.DefaultApi(api_client)
    
    try:
        # Get the list of Services
        api_response = api_instance.request_e1_iex_rfv_zg()
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling DefaultApi->request_e1_iex_rfv_zg: %s\n" % e)
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

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** |  |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **request_f_wl_fmqidpx**
> InlineResponse202 request_f_wl_fmqidpx(inline_object=inline_object)

Create a Network

### Example

```python
from __future__ import print_function
import time
import openapi_client
from openapi_client.rest import ApiException
from pprint import pprint
# Defining the host is optional and defaults to http://localhost
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "http://localhost"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = openapi_client.DefaultApi(api_client)
    inline_object = openapi_client.InlineObject() # InlineObject |  (optional)

    try:
        # Create a Network
        api_response = api_instance.request_f_wl_fmqidpx(inline_object=inline_object)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling DefaultApi->request_f_wl_fmqidpx: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **inline_object** | [**InlineObject**](InlineObject.md)|  | [optional] 

### Return type

[**InlineResponse202**](InlineResponse202.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/hal+json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**202** |  |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **request_gij_vc_eo_ml_m**
> InlineResponse2006 request_gij_vc_eo_ml_m()

Get the list of AppWANs

### Example

```python
from __future__ import print_function
import time
import openapi_client
from openapi_client.rest import ApiException
from pprint import pprint
# Defining the host is optional and defaults to http://localhost
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "http://localhost"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = openapi_client.DefaultApi(api_client)
    
    try:
        # Get the list of AppWANs
        api_response = api_instance.request_gij_vc_eo_ml_m()
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling DefaultApi->request_gij_vc_eo_ml_m: %s\n" % e)
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

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** |  |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **request_hp1b9_gi_lax**
> InlineResponse2004 request_hp1b9_gi_lax()

Get an Edge Router Policy

### Example

```python
from __future__ import print_function
import time
import openapi_client
from openapi_client.rest import ApiException
from pprint import pprint
# Defining the host is optional and defaults to http://localhost
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "http://localhost"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = openapi_client.DefaultApi(api_client)
    
    try:
        # Get an Edge Router Policy
        api_response = api_instance.request_hp1b9_gi_lax()
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling DefaultApi->request_hp1b9_gi_lax: %s\n" % e)
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

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** |  |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **request_iaj_vi_y_lviu**
> InlineResponse2024 request_iaj_vi_y_lviu(network_id)

Delete a Network

### Example

```python
from __future__ import print_function
import time
import openapi_client
from openapi_client.rest import ApiException
from pprint import pprint
# Defining the host is optional and defaults to http://localhost
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "http://localhost"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = openapi_client.DefaultApi(api_client)
    network_id = 'network_id_example' # str | 

    try:
        # Delete a Network
        api_response = api_instance.request_iaj_vi_y_lviu(network_id)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling DefaultApi->request_iaj_vi_y_lviu: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **network_id** | **str**|  | 

### Return type

[**InlineResponse2024**](InlineResponse2024.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/hal+json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**202** |  |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **request_k9aj_dj8v_us**
> InlineResponse20017 request_k9aj_dj8v_us()

Get the list of Network Groups

### Example

```python
from __future__ import print_function
import time
import openapi_client
from openapi_client.rest import ApiException
from pprint import pprint
# Defining the host is optional and defaults to http://localhost
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "http://localhost"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = openapi_client.DefaultApi(api_client)
    
    try:
        # Get the list of Network Groups
        api_response = api_instance.request_k9aj_dj8v_us()
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling DefaultApi->request_k9aj_dj8v_us: %s\n" % e)
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

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** |  |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **request_kke_r9g_ny25**
> InlineResponse200 request_kke_r9g_ny25(app_wan_id)

Get an AppWAN

### Example

```python
from __future__ import print_function
import time
import openapi_client
from openapi_client.rest import ApiException
from pprint import pprint
# Defining the host is optional and defaults to http://localhost
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "http://localhost"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = openapi_client.DefaultApi(api_client)
    app_wan_id = 'app_wan_id_example' # str | 

    try:
        # Get an AppWAN
        api_response = api_instance.request_kke_r9g_ny25(app_wan_id)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling DefaultApi->request_kke_r9g_ny25: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **app_wan_id** | **str**|  | 

### Return type

[**InlineResponse200**](InlineResponse200.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/hal+json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** |  |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **request_lg_kx_u4ph9t**
> InlineResponse2004EmbeddedEdgeRouterPolicyList request_lg_kx_u4ph9t(inline_object2=inline_object2)

Create an Edge Router Policy

### Example

```python
from __future__ import print_function
import time
import openapi_client
from openapi_client.rest import ApiException
from pprint import pprint
# Defining the host is optional and defaults to http://localhost
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "http://localhost"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = openapi_client.DefaultApi(api_client)
    inline_object2 = openapi_client.InlineObject2() # InlineObject2 |  (optional)

    try:
        # Create an Edge Router Policy
        api_response = api_instance.request_lg_kx_u4ph9t(inline_object2=inline_object2)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling DefaultApi->request_lg_kx_u4ph9t: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **inline_object2** | [**InlineObject2**](InlineObject2.md)|  | [optional] 

### Return type

[**InlineResponse2004EmbeddedEdgeRouterPolicyList**](InlineResponse2004EmbeddedEdgeRouterPolicyList.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/hal+json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**202** |  |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **request_lo_xf_q_ss8_ge**
> InlineResponse20015 request_lo_xf_q_ss8_ge()

Get a Network Configuration profile

e.g. small, medium, large

### Example

```python
from __future__ import print_function
import time
import openapi_client
from openapi_client.rest import ApiException
from pprint import pprint
# Defining the host is optional and defaults to http://localhost
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "http://localhost"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = openapi_client.DefaultApi(api_client)
    
    try:
        # Get a Network Configuration profile
        api_response = api_instance.request_lo_xf_q_ss8_ge()
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling DefaultApi->request_lo_xf_q_ss8_ge: %s\n" % e)
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

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** |  |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **request_lopo_ftq4ih**
> InlineResponse2021 request_lopo_ftq4ih(inline_object1=inline_object1)

Create a Service

### Example

```python
from __future__ import print_function
import time
import openapi_client
from openapi_client.rest import ApiException
from pprint import pprint
# Defining the host is optional and defaults to http://localhost
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "http://localhost"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = openapi_client.DefaultApi(api_client)
    inline_object1 = openapi_client.InlineObject1() # InlineObject1 |  (optional)

    try:
        # Create a Service
        api_response = api_instance.request_lopo_ftq4ih(inline_object1=inline_object1)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling DefaultApi->request_lopo_ftq4ih: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **inline_object1** | [**InlineObject1**](InlineObject1.md)|  | [optional] 

### Return type

[**InlineResponse2021**](InlineResponse2021.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/hal+json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**202** |  |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **request_mpy_yt_ii_s6x**
> InlineResponse20016 request_mpy_yt_ii_s6x()

Get the identity of the caller's API account

### Example

```python
from __future__ import print_function
import time
import openapi_client
from openapi_client.rest import ApiException
from pprint import pprint
# Defining the host is optional and defaults to http://localhost
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "http://localhost"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = openapi_client.DefaultApi(api_client)
    
    try:
        # Get the identity of the caller's API account
        api_response = api_instance.request_mpy_yt_ii_s6x()
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling DefaultApi->request_mpy_yt_ii_s6x: %s\n" % e)
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

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** |  |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **request_n6_gjg_plo4v**
> InlineResponse20014 request_n6_gjg_plo4v(organization_id)

Get an Organization

### Example

```python
from __future__ import print_function
import time
import openapi_client
from openapi_client.rest import ApiException
from pprint import pprint
# Defining the host is optional and defaults to http://localhost
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "http://localhost"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = openapi_client.DefaultApi(api_client)
    organization_id = 'organization_id_example' # str | 

    try:
        # Get an Organization
        api_response = api_instance.request_n6_gjg_plo4v(organization_id)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling DefaultApi->request_n6_gjg_plo4v: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **organization_id** | **str**|  | 

### Return type

[**InlineResponse20014**](InlineResponse20014.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** |  |  -  |
**502** |  |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **request_n_xo_v6_k2f0_q**
> InlineResponse200 request_n_xo_v6_k2f0_q(inline_object4=inline_object4)

Create an AppWAN

### Example

```python
from __future__ import print_function
import time
import openapi_client
from openapi_client.rest import ApiException
from pprint import pprint
# Defining the host is optional and defaults to http://localhost
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "http://localhost"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = openapi_client.DefaultApi(api_client)
    inline_object4 = openapi_client.InlineObject4() # InlineObject4 |  (optional)

    try:
        # Create an AppWAN
        api_response = api_instance.request_n_xo_v6_k2f0_q(inline_object4=inline_object4)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling DefaultApi->request_n_xo_v6_k2f0_q: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **inline_object4** | [**InlineObject4**](InlineObject4.md)|  | [optional] 

### Return type

[**InlineResponse200**](InlineResponse200.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/hal+json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** |  |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **request_oi_i_af_x2_v_us**
> InlineResponse2001 request_oi_i_af_x2_v_us()

Get the list of Networks

### Example

```python
from __future__ import print_function
import time
import openapi_client
from openapi_client.rest import ApiException
from pprint import pprint
# Defining the host is optional and defaults to http://localhost
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "http://localhost"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = openapi_client.DefaultApi(api_client)
    
    try:
        # Get the list of Networks
        api_response = api_instance.request_oi_i_af_x2_v_us()
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling DefaultApi->request_oi_i_af_x2_v_us: %s\n" % e)
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

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** |  |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **request_p_baai_o3_b0d**
> InlineResponse2022 request_p_baai_o3_b0d(service_id)

Delete a Service

### Example

```python
from __future__ import print_function
import time
import openapi_client
from openapi_client.rest import ApiException
from pprint import pprint
# Defining the host is optional and defaults to http://localhost
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "http://localhost"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = openapi_client.DefaultApi(api_client)
    service_id = 'service_id_example' # str | 

    try:
        # Delete a Service
        api_response = api_instance.request_p_baai_o3_b0d(service_id)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling DefaultApi->request_p_baai_o3_b0d: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **service_id** | **str**|  | 

### Return type

[**InlineResponse2022**](InlineResponse2022.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/hal+json, application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**202** |  |  -  |
**500** |  |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **request_py_r6a_up5mi**
> InlineResponse2025 request_py_r6a_up5mi(inline_object6=inline_object6)

Create an Edge Router

### Example

```python
from __future__ import print_function
import time
import openapi_client
from openapi_client.rest import ApiException
from pprint import pprint
# Defining the host is optional and defaults to http://localhost
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "http://localhost"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = openapi_client.DefaultApi(api_client)
    inline_object6 = openapi_client.InlineObject6() # InlineObject6 |  (optional)

    try:
        # Create an Edge Router
        api_response = api_instance.request_py_r6a_up5mi(inline_object6=inline_object6)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling DefaultApi->request_py_r6a_up5mi: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **inline_object6** | [**InlineObject6**](InlineObject6.md)|  | [optional] 

### Return type

[**InlineResponse2025**](InlineResponse2025.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/hal+json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**202** |  |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **request_q0b3cb_dw8_s**
> InlineResponse20010 request_q0b3cb_dw8_s()

Get the list of Posture Checks

### Example

```python
from __future__ import print_function
import time
import openapi_client
from openapi_client.rest import ApiException
from pprint import pprint
# Defining the host is optional and defaults to http://localhost
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "http://localhost"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = openapi_client.DefaultApi(api_client)
    
    try:
        # Get the list of Posture Checks
        api_response = api_instance.request_q0b3cb_dw8_s()
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling DefaultApi->request_q0b3cb_dw8_s: %s\n" % e)
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

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** |  |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **request_teq_m_ge_er5_f**
> InlineResponse20013 request_teq_m_ge_er5_f(network_id)

Get a Network

### Example

```python
from __future__ import print_function
import time
import openapi_client
from openapi_client.rest import ApiException
from pprint import pprint
# Defining the host is optional and defaults to http://localhost
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "http://localhost"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = openapi_client.DefaultApi(api_client)
    network_id = 'network_id_example' # str | 

    try:
        # Get a Network
        api_response = api_instance.request_teq_m_ge_er5_f(network_id)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling DefaultApi->request_teq_m_ge_er5_f: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **network_id** | **str**|  | 

### Return type

[**InlineResponse20013**](InlineResponse20013.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/hal+json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** |  |  -  |
**500** |  |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **request_tsyuwl_aej_k**
> InlineResponse2007EmbeddedEndpointList request_tsyuwl_aej_k(endpoint_id)

Get an Endpoint

### Example

```python
from __future__ import print_function
import time
import openapi_client
from openapi_client.rest import ApiException
from pprint import pprint
# Defining the host is optional and defaults to http://localhost
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "http://localhost"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = openapi_client.DefaultApi(api_client)
    endpoint_id = 'endpoint_id_example' # str | 

    try:
        # Get an Endpoint
        api_response = api_instance.request_tsyuwl_aej_k(endpoint_id)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling DefaultApi->request_tsyuwl_aej_k: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **endpoint_id** | **str**|  | 

### Return type

[**InlineResponse2007EmbeddedEndpointList**](InlineResponse2007EmbeddedEndpointList.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/hal+json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** |  |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **request_v_iz_b1k6_uqb**
> InlineResponse2023 request_v_iz_b1k6_uqb(service_id, inline_object3=inline_object3)

Change some properties of a Service

### Example

```python
from __future__ import print_function
import time
import openapi_client
from openapi_client.rest import ApiException
from pprint import pprint
# Defining the host is optional and defaults to http://localhost
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "http://localhost"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = openapi_client.DefaultApi(api_client)
    service_id = 'service_id_example' # str | 
inline_object3 = openapi_client.InlineObject3() # InlineObject3 |  (optional)

    try:
        # Change some properties of a Service
        api_response = api_instance.request_v_iz_b1k6_uqb(service_id, inline_object3=inline_object3)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling DefaultApi->request_v_iz_b1k6_uqb: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **service_id** | **str**|  | 
 **inline_object3** | [**InlineObject3**](InlineObject3.md)|  | [optional] 

### Return type

[**InlineResponse2023**](InlineResponse2023.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/hal+json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**202** |  |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **request_ve_jcbur9i_o**
> InlineResponse20011 request_ve_jcbur9i_o(network_group_id)

Get a Network Group

### Example

```python
from __future__ import print_function
import time
import openapi_client
from openapi_client.rest import ApiException
from pprint import pprint
# Defining the host is optional and defaults to http://localhost
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "http://localhost"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = openapi_client.DefaultApi(api_client)
    network_group_id = 'network_group_id_example' # str | 

    try:
        # Get a Network Group
        api_response = api_instance.request_ve_jcbur9i_o(network_group_id)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling DefaultApi->request_ve_jcbur9i_o: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **network_group_id** | **str**|  | 

### Return type

[**InlineResponse20011**](InlineResponse20011.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** |  |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **request_vfua_d_me_trp**
> InlineResponse2002 request_vfua_d_me_trp()

Get the list of data centers

### Example

```python
from __future__ import print_function
import time
import openapi_client
from openapi_client.rest import ApiException
from pprint import pprint
# Defining the host is optional and defaults to http://localhost
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "http://localhost"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = openapi_client.DefaultApi(api_client)
    
    try:
        # Get the list of data centers
        api_response = api_instance.request_vfua_d_me_trp()
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling DefaultApi->request_vfua_d_me_trp: %s\n" % e)
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

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** |  |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **request_y_lsf4m9_ttt**
> InlineResponse2005 request_y_lsf4m9_ttt(service_id)

Get a Service

### Example

```python
from __future__ import print_function
import time
import openapi_client
from openapi_client.rest import ApiException
from pprint import pprint
# Defining the host is optional and defaults to http://localhost
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "http://localhost"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = openapi_client.DefaultApi(api_client)
    service_id = 'service_id_example' # str | 

    try:
        # Get a Service
        api_response = api_instance.request_y_lsf4m9_ttt(service_id)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling DefaultApi->request_y_lsf4m9_ttt: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **service_id** | **str**|  | 

### Return type

[**InlineResponse2005**](InlineResponse2005.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/hal+json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** |  |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **request_yhz_d_aw1_ks4**
> InlineResponse20018 request_yhz_d_aw1_ks4()

Get an Edge Router

### Example

```python
from __future__ import print_function
import time
import openapi_client
from openapi_client.rest import ApiException
from pprint import pprint
# Defining the host is optional and defaults to http://localhost
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "http://localhost"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = openapi_client.DefaultApi(api_client)
    
    try:
        # Get an Edge Router
        api_response = api_instance.request_yhz_d_aw1_ks4()
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling DefaultApi->request_yhz_d_aw1_ks4: %s\n" % e)
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

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** |  |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

