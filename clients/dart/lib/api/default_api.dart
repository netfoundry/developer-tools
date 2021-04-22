part of openapi.api;



class DefaultApi {
  final ApiClient apiClient;

  DefaultApi([ApiClient apiClient]) : apiClient = apiClient ?? defaultApiClient;

  /// Get an Edge Router with HTTP info returned
  ///
  /// 
  Future<Response> request4Q1qU3c4dkWithHttpInfo(String edgeRouterId) async {
    Object postBody;

    // verify required params are set
    if(edgeRouterId == null) {
     throw ApiException(400, "Missing required param: edgeRouterId");
    }

    // create path and map variables
    String path = "/core/v2/edge-routers/{edgeRouterId}".replaceAll("{format}","json").replaceAll("{" + "edgeRouterId" + "}", edgeRouterId.toString());

    // query params
    List<QueryParam> queryParams = [];
    Map<String, String> headerParams = {};
    Map<String, String> formParams = {};

    List<String> contentTypes = [];

    String nullableContentType = contentTypes.isNotEmpty ? contentTypes[0] : null;
    List<String> authNames = [];

    if(nullableContentType != null && nullableContentType.startsWith("multipart/form-data")) {
      bool hasFields = false;
      MultipartRequest mp = MultipartRequest(null, null);
      if(hasFields)
        postBody = mp;
    }
    else {
    }

    var response = await apiClient.invokeAPI(path,
                                             'GET',
                                             queryParams,
                                             postBody,
                                             headerParams,
                                             formParams,
                                             nullableContentType,
                                             authNames);
    return response;
  }

  /// Get an Edge Router
  ///
  /// 
  Future<InlineResponse20012> request4Q1qU3c4dk(String edgeRouterId) async {
    Response response = await request4Q1qU3c4dkWithHttpInfo(edgeRouterId);
    if(response.statusCode >= 400) {
      throw ApiException(response.statusCode, _decodeBodyBytes(response));
    } else if(response.body != null) {
      return apiClient.deserialize(_decodeBodyBytes(response), 'InlineResponse20012') as InlineResponse20012;
    } else {
      return null;
    }
  }

  /// Create an Endpoint with HTTP info returned
  ///
  /// 
  Future<Response> request9sDuPizCiuWithHttpInfo({ InlineObject5 inlineObject5 }) async {
    Object postBody = inlineObject5;

    // verify required params are set

    // create path and map variables
    String path = "/core/v2/endpoints".replaceAll("{format}","json");

    // query params
    List<QueryParam> queryParams = [];
    Map<String, String> headerParams = {};
    Map<String, String> formParams = {};

    List<String> contentTypes = ["application/json"];

    String nullableContentType = contentTypes.isNotEmpty ? contentTypes[0] : null;
    List<String> authNames = [];

    if(nullableContentType != null && nullableContentType.startsWith("multipart/form-data")) {
      bool hasFields = false;
      MultipartRequest mp = MultipartRequest(null, null);
      if(hasFields)
        postBody = mp;
    }
    else {
    }

    var response = await apiClient.invokeAPI(path,
                                             'POST',
                                             queryParams,
                                             postBody,
                                             headerParams,
                                             formParams,
                                             nullableContentType,
                                             authNames);
    return response;
  }

  /// Create an Endpoint
  ///
  /// 
  Future<InlineResponse2008> request9sDuPizCiu({ InlineObject5 inlineObject5 }) async {
    Response response = await request9sDuPizCiuWithHttpInfo( inlineObject5: inlineObject5 );
    if(response.statusCode >= 400) {
      throw ApiException(response.statusCode, _decodeBodyBytes(response));
    } else if(response.body != null) {
      return apiClient.deserialize(_decodeBodyBytes(response), 'InlineResponse2008') as InlineResponse2008;
    } else {
      return null;
    }
  }

  /// Get the list of Network product versions with HTTP info returned
  ///
  /// 
  Future<Response> requestA8syyaPZnwWithHttpInfo() async {
    Object postBody;

    // verify required params are set

    // create path and map variables
    String path = "/product-metadata/v2/download-urls.json".replaceAll("{format}","json");

    // query params
    List<QueryParam> queryParams = [];
    Map<String, String> headerParams = {};
    Map<String, String> formParams = {};

    List<String> contentTypes = [];

    String nullableContentType = contentTypes.isNotEmpty ? contentTypes[0] : null;
    List<String> authNames = [];

    if(nullableContentType != null && nullableContentType.startsWith("multipart/form-data")) {
      bool hasFields = false;
      MultipartRequest mp = MultipartRequest(null, null);
      if(hasFields)
        postBody = mp;
    }
    else {
    }

    var response = await apiClient.invokeAPI(path,
                                             'GET',
                                             queryParams,
                                             postBody,
                                             headerParams,
                                             formParams,
                                             nullableContentType,
                                             authNames);
    return response;
  }

  /// Get the list of Network product versions
  ///
  /// 
  Future<InlineResponse20019> requestA8syyaPZnw() async {
    Response response = await requestA8syyaPZnwWithHttpInfo();
    if(response.statusCode >= 400) {
      throw ApiException(response.statusCode, _decodeBodyBytes(response));
    } else if(response.body != null) {
      return apiClient.deserialize(_decodeBodyBytes(response), 'InlineResponse20019') as InlineResponse20019;
    } else {
      return null;
    }
  }

  /// Get an Endpoint with HTTP info returned
  ///
  /// 
  Future<Response> requestAYFhAQd5pnWithHttpInfo() async {
    Object postBody;

    // verify required params are set

    // create path and map variables
    String path = "/core/v2/endpoints".replaceAll("{format}","json");

    // query params
    List<QueryParam> queryParams = [];
    Map<String, String> headerParams = {};
    Map<String, String> formParams = {};

    List<String> contentTypes = [];

    String nullableContentType = contentTypes.isNotEmpty ? contentTypes[0] : null;
    List<String> authNames = [];

    if(nullableContentType != null && nullableContentType.startsWith("multipart/form-data")) {
      bool hasFields = false;
      MultipartRequest mp = MultipartRequest(null, null);
      if(hasFields)
        postBody = mp;
    }
    else {
    }

    var response = await apiClient.invokeAPI(path,
                                             'GET',
                                             queryParams,
                                             postBody,
                                             headerParams,
                                             formParams,
                                             nullableContentType,
                                             authNames);
    return response;
  }

  /// Get an Endpoint
  ///
  /// 
  Future<InlineResponse2007> requestAYFhAQd5pn() async {
    Response response = await requestAYFhAQd5pnWithHttpInfo();
    if(response.statusCode >= 400) {
      throw ApiException(response.statusCode, _decodeBodyBytes(response));
    } else if(response.body != null) {
      return apiClient.deserialize(_decodeBodyBytes(response), 'InlineResponse2007') as InlineResponse2007;
    } else {
      return null;
    }
  }

  /// Get the registration information for an Edge Router with HTTP info returned
  ///
  /// 
  Future<Response> requestAuarCsIhkJWithHttpInfo(String edgeRouterId) async {
    Object postBody;

    // verify required params are set
    if(edgeRouterId == null) {
     throw ApiException(400, "Missing required param: edgeRouterId");
    }

    // create path and map variables
    String path = "/core/v2/edge-routers/{edgeRouterId}/registration-key".replaceAll("{format}","json").replaceAll("{" + "edgeRouterId" + "}", edgeRouterId.toString());

    // query params
    List<QueryParam> queryParams = [];
    Map<String, String> headerParams = {};
    Map<String, String> formParams = {};

    List<String> contentTypes = [];

    String nullableContentType = contentTypes.isNotEmpty ? contentTypes[0] : null;
    List<String> authNames = [];

    if(nullableContentType != null && nullableContentType.startsWith("multipart/form-data")) {
      bool hasFields = false;
      MultipartRequest mp = MultipartRequest(null, null);
      if(hasFields)
        postBody = mp;
    }
    else {
    }

    var response = await apiClient.invokeAPI(path,
                                             'POST',
                                             queryParams,
                                             postBody,
                                             headerParams,
                                             formParams,
                                             nullableContentType,
                                             authNames);
    return response;
  }

  /// Get the registration information for an Edge Router
  ///
  /// 
  Future<InlineResponse2009> requestAuarCsIhkJ(String edgeRouterId) async {
    Response response = await requestAuarCsIhkJWithHttpInfo(edgeRouterId);
    if(response.statusCode >= 400) {
      throw ApiException(response.statusCode, _decodeBodyBytes(response));
    } else if(response.body != null) {
      return apiClient.deserialize(_decodeBodyBytes(response), 'InlineResponse2009') as InlineResponse2009;
    } else {
      return null;
    }
  }

  /// Get an Edge Router Policy with HTTP info returned
  ///
  /// 
  Future<Response> requestBtgg9ZlC0eWithHttpInfo(String edgeRouterPolicyId) async {
    Object postBody;

    // verify required params are set
    if(edgeRouterPolicyId == null) {
     throw ApiException(400, "Missing required param: edgeRouterPolicyId");
    }

    // create path and map variables
    String path = "/core/v2/edge-router-policies/{edgeRouterPolicyId}".replaceAll("{format}","json").replaceAll("{" + "edgeRouterPolicyId" + "}", edgeRouterPolicyId.toString());

    // query params
    List<QueryParam> queryParams = [];
    Map<String, String> headerParams = {};
    Map<String, String> formParams = {};

    List<String> contentTypes = [];

    String nullableContentType = contentTypes.isNotEmpty ? contentTypes[0] : null;
    List<String> authNames = [];

    if(nullableContentType != null && nullableContentType.startsWith("multipart/form-data")) {
      bool hasFields = false;
      MultipartRequest mp = MultipartRequest(null, null);
      if(hasFields)
        postBody = mp;
    }
    else {
    }

    var response = await apiClient.invokeAPI(path,
                                             'GET',
                                             queryParams,
                                             postBody,
                                             headerParams,
                                             formParams,
                                             nullableContentType,
                                             authNames);
    return response;
  }

  /// Get an Edge Router Policy
  ///
  /// 
  Future<InlineResponse2004EmbeddedEdgeRouterPolicyList> requestBtgg9ZlC0e(String edgeRouterPolicyId) async {
    Response response = await requestBtgg9ZlC0eWithHttpInfo(edgeRouterPolicyId);
    if(response.statusCode >= 400) {
      throw ApiException(response.statusCode, _decodeBodyBytes(response));
    } else if(response.body != null) {
      return apiClient.deserialize(_decodeBodyBytes(response), 'InlineResponse2004EmbeddedEdgeRouterPolicyList') as InlineResponse2004EmbeddedEdgeRouterPolicyList;
    } else {
      return null;
    }
  }

  /// Get the list of Services with HTTP info returned
  ///
  /// 
  Future<Response> requestE1IexRfvZgWithHttpInfo() async {
    Object postBody;

    // verify required params are set

    // create path and map variables
    String path = "/core/v2/services".replaceAll("{format}","json");

    // query params
    List<QueryParam> queryParams = [];
    Map<String, String> headerParams = {};
    Map<String, String> formParams = {};

    List<String> contentTypes = [];

    String nullableContentType = contentTypes.isNotEmpty ? contentTypes[0] : null;
    List<String> authNames = [];

    if(nullableContentType != null && nullableContentType.startsWith("multipart/form-data")) {
      bool hasFields = false;
      MultipartRequest mp = MultipartRequest(null, null);
      if(hasFields)
        postBody = mp;
    }
    else {
    }

    var response = await apiClient.invokeAPI(path,
                                             'GET',
                                             queryParams,
                                             postBody,
                                             headerParams,
                                             formParams,
                                             nullableContentType,
                                             authNames);
    return response;
  }

  /// Get the list of Services
  ///
  /// 
  Future<InlineResponse2003> requestE1IexRfvZg() async {
    Response response = await requestE1IexRfvZgWithHttpInfo();
    if(response.statusCode >= 400) {
      throw ApiException(response.statusCode, _decodeBodyBytes(response));
    } else if(response.body != null) {
      return apiClient.deserialize(_decodeBodyBytes(response), 'InlineResponse2003') as InlineResponse2003;
    } else {
      return null;
    }
  }

  /// Create a Network with HTTP info returned
  ///
  /// 
  Future<Response> requestFWlFMQIDPXWithHttpInfo({ InlineObject inlineObject }) async {
    Object postBody = inlineObject;

    // verify required params are set

    // create path and map variables
    String path = "/core/v2/networks".replaceAll("{format}","json");

    // query params
    List<QueryParam> queryParams = [];
    Map<String, String> headerParams = {};
    Map<String, String> formParams = {};

    List<String> contentTypes = ["application/json"];

    String nullableContentType = contentTypes.isNotEmpty ? contentTypes[0] : null;
    List<String> authNames = [];

    if(nullableContentType != null && nullableContentType.startsWith("multipart/form-data")) {
      bool hasFields = false;
      MultipartRequest mp = MultipartRequest(null, null);
      if(hasFields)
        postBody = mp;
    }
    else {
    }

    var response = await apiClient.invokeAPI(path,
                                             'POST',
                                             queryParams,
                                             postBody,
                                             headerParams,
                                             formParams,
                                             nullableContentType,
                                             authNames);
    return response;
  }

  /// Create a Network
  ///
  /// 
  Future<InlineResponse202> requestFWlFMQIDPX({ InlineObject inlineObject }) async {
    Response response = await requestFWlFMQIDPXWithHttpInfo( inlineObject: inlineObject );
    if(response.statusCode >= 400) {
      throw ApiException(response.statusCode, _decodeBodyBytes(response));
    } else if(response.body != null) {
      return apiClient.deserialize(_decodeBodyBytes(response), 'InlineResponse202') as InlineResponse202;
    } else {
      return null;
    }
  }

  /// Get the list of AppWANs with HTTP info returned
  ///
  /// 
  Future<Response> requestGijVCEoMlMWithHttpInfo() async {
    Object postBody;

    // verify required params are set

    // create path and map variables
    String path = "/core/v2/app-wans".replaceAll("{format}","json");

    // query params
    List<QueryParam> queryParams = [];
    Map<String, String> headerParams = {};
    Map<String, String> formParams = {};

    List<String> contentTypes = [];

    String nullableContentType = contentTypes.isNotEmpty ? contentTypes[0] : null;
    List<String> authNames = [];

    if(nullableContentType != null && nullableContentType.startsWith("multipart/form-data")) {
      bool hasFields = false;
      MultipartRequest mp = MultipartRequest(null, null);
      if(hasFields)
        postBody = mp;
    }
    else {
    }

    var response = await apiClient.invokeAPI(path,
                                             'GET',
                                             queryParams,
                                             postBody,
                                             headerParams,
                                             formParams,
                                             nullableContentType,
                                             authNames);
    return response;
  }

  /// Get the list of AppWANs
  ///
  /// 
  Future<InlineResponse2006> requestGijVCEoMlM() async {
    Response response = await requestGijVCEoMlMWithHttpInfo();
    if(response.statusCode >= 400) {
      throw ApiException(response.statusCode, _decodeBodyBytes(response));
    } else if(response.body != null) {
      return apiClient.deserialize(_decodeBodyBytes(response), 'InlineResponse2006') as InlineResponse2006;
    } else {
      return null;
    }
  }

  /// Get an Edge Router Policy with HTTP info returned
  ///
  /// 
  Future<Response> requestHp1b9GiLaxWithHttpInfo() async {
    Object postBody;

    // verify required params are set

    // create path and map variables
    String path = "/core/v2/edge-router-policies".replaceAll("{format}","json");

    // query params
    List<QueryParam> queryParams = [];
    Map<String, String> headerParams = {};
    Map<String, String> formParams = {};

    List<String> contentTypes = [];

    String nullableContentType = contentTypes.isNotEmpty ? contentTypes[0] : null;
    List<String> authNames = [];

    if(nullableContentType != null && nullableContentType.startsWith("multipart/form-data")) {
      bool hasFields = false;
      MultipartRequest mp = MultipartRequest(null, null);
      if(hasFields)
        postBody = mp;
    }
    else {
    }

    var response = await apiClient.invokeAPI(path,
                                             'GET',
                                             queryParams,
                                             postBody,
                                             headerParams,
                                             formParams,
                                             nullableContentType,
                                             authNames);
    return response;
  }

  /// Get an Edge Router Policy
  ///
  /// 
  Future<InlineResponse2004> requestHp1b9GiLax() async {
    Response response = await requestHp1b9GiLaxWithHttpInfo();
    if(response.statusCode >= 400) {
      throw ApiException(response.statusCode, _decodeBodyBytes(response));
    } else if(response.body != null) {
      return apiClient.deserialize(_decodeBodyBytes(response), 'InlineResponse2004') as InlineResponse2004;
    } else {
      return null;
    }
  }

  /// Delete a Network with HTTP info returned
  ///
  /// 
  Future<Response> requestIAJViYLviuWithHttpInfo(String networkId) async {
    Object postBody;

    // verify required params are set
    if(networkId == null) {
     throw ApiException(400, "Missing required param: networkId");
    }

    // create path and map variables
    String path = "/core/v2/networks/{networkId}".replaceAll("{format}","json").replaceAll("{" + "networkId" + "}", networkId.toString());

    // query params
    List<QueryParam> queryParams = [];
    Map<String, String> headerParams = {};
    Map<String, String> formParams = {};

    List<String> contentTypes = [];

    String nullableContentType = contentTypes.isNotEmpty ? contentTypes[0] : null;
    List<String> authNames = [];

    if(nullableContentType != null && nullableContentType.startsWith("multipart/form-data")) {
      bool hasFields = false;
      MultipartRequest mp = MultipartRequest(null, null);
      if(hasFields)
        postBody = mp;
    }
    else {
    }

    var response = await apiClient.invokeAPI(path,
                                             'DELETE',
                                             queryParams,
                                             postBody,
                                             headerParams,
                                             formParams,
                                             nullableContentType,
                                             authNames);
    return response;
  }

  /// Delete a Network
  ///
  /// 
  Future<InlineResponse2024> requestIAJViYLviu(String networkId) async {
    Response response = await requestIAJViYLviuWithHttpInfo(networkId);
    if(response.statusCode >= 400) {
      throw ApiException(response.statusCode, _decodeBodyBytes(response));
    } else if(response.body != null) {
      return apiClient.deserialize(_decodeBodyBytes(response), 'InlineResponse2024') as InlineResponse2024;
    } else {
      return null;
    }
  }

  /// Get the list of Network Groups with HTTP info returned
  ///
  /// 
  Future<Response> requestK9ajDJ8vUSWithHttpInfo() async {
    Object postBody;

    // verify required params are set

    // create path and map variables
    String path = "/rest/v1/network-groups".replaceAll("{format}","json");

    // query params
    List<QueryParam> queryParams = [];
    Map<String, String> headerParams = {};
    Map<String, String> formParams = {};

    List<String> contentTypes = [];

    String nullableContentType = contentTypes.isNotEmpty ? contentTypes[0] : null;
    List<String> authNames = [];

    if(nullableContentType != null && nullableContentType.startsWith("multipart/form-data")) {
      bool hasFields = false;
      MultipartRequest mp = MultipartRequest(null, null);
      if(hasFields)
        postBody = mp;
    }
    else {
    }

    var response = await apiClient.invokeAPI(path,
                                             'GET',
                                             queryParams,
                                             postBody,
                                             headerParams,
                                             formParams,
                                             nullableContentType,
                                             authNames);
    return response;
  }

  /// Get the list of Network Groups
  ///
  /// 
  Future<InlineResponse20017> requestK9ajDJ8vUS() async {
    Response response = await requestK9ajDJ8vUSWithHttpInfo();
    if(response.statusCode >= 400) {
      throw ApiException(response.statusCode, _decodeBodyBytes(response));
    } else if(response.body != null) {
      return apiClient.deserialize(_decodeBodyBytes(response), 'InlineResponse20017') as InlineResponse20017;
    } else {
      return null;
    }
  }

  /// Get an AppWAN with HTTP info returned
  ///
  /// 
  Future<Response> requestKkeR9gNy25WithHttpInfo(String appWanId) async {
    Object postBody;

    // verify required params are set
    if(appWanId == null) {
     throw ApiException(400, "Missing required param: appWanId");
    }

    // create path and map variables
    String path = "/core/v2/app-wans/{appWanId}".replaceAll("{format}","json").replaceAll("{" + "appWanId" + "}", appWanId.toString());

    // query params
    List<QueryParam> queryParams = [];
    Map<String, String> headerParams = {};
    Map<String, String> formParams = {};

    List<String> contentTypes = [];

    String nullableContentType = contentTypes.isNotEmpty ? contentTypes[0] : null;
    List<String> authNames = [];

    if(nullableContentType != null && nullableContentType.startsWith("multipart/form-data")) {
      bool hasFields = false;
      MultipartRequest mp = MultipartRequest(null, null);
      if(hasFields)
        postBody = mp;
    }
    else {
    }

    var response = await apiClient.invokeAPI(path,
                                             'GET',
                                             queryParams,
                                             postBody,
                                             headerParams,
                                             formParams,
                                             nullableContentType,
                                             authNames);
    return response;
  }

  /// Get an AppWAN
  ///
  /// 
  Future<InlineResponse200> requestKkeR9gNy25(String appWanId) async {
    Response response = await requestKkeR9gNy25WithHttpInfo(appWanId);
    if(response.statusCode >= 400) {
      throw ApiException(response.statusCode, _decodeBodyBytes(response));
    } else if(response.body != null) {
      return apiClient.deserialize(_decodeBodyBytes(response), 'InlineResponse200') as InlineResponse200;
    } else {
      return null;
    }
  }

  /// Get a Network Configuration profile with HTTP info returned
  ///
  /// e.g. small, medium, large
  Future<Response> requestLOXfQSs8GEWithHttpInfo() async {
    Object postBody;

    // verify required params are set

    // create path and map variables
    String path = "/core/v2/network-configs".replaceAll("{format}","json");

    // query params
    List<QueryParam> queryParams = [];
    Map<String, String> headerParams = {};
    Map<String, String> formParams = {};

    List<String> contentTypes = [];

    String nullableContentType = contentTypes.isNotEmpty ? contentTypes[0] : null;
    List<String> authNames = [];

    if(nullableContentType != null && nullableContentType.startsWith("multipart/form-data")) {
      bool hasFields = false;
      MultipartRequest mp = MultipartRequest(null, null);
      if(hasFields)
        postBody = mp;
    }
    else {
    }

    var response = await apiClient.invokeAPI(path,
                                             'GET',
                                             queryParams,
                                             postBody,
                                             headerParams,
                                             formParams,
                                             nullableContentType,
                                             authNames);
    return response;
  }

  /// Get a Network Configuration profile
  ///
  /// e.g. small, medium, large
  Future<InlineResponse20015> requestLOXfQSs8GE() async {
    Response response = await requestLOXfQSs8GEWithHttpInfo();
    if(response.statusCode >= 400) {
      throw ApiException(response.statusCode, _decodeBodyBytes(response));
    } else if(response.body != null) {
      return apiClient.deserialize(_decodeBodyBytes(response), 'InlineResponse20015') as InlineResponse20015;
    } else {
      return null;
    }
  }

  /// Create an Edge Router Policy with HTTP info returned
  ///
  /// 
  Future<Response> requestLgKxU4ph9tWithHttpInfo({ InlineObject2 inlineObject2 }) async {
    Object postBody = inlineObject2;

    // verify required params are set

    // create path and map variables
    String path = "/core/v2/edge-router-policies".replaceAll("{format}","json");

    // query params
    List<QueryParam> queryParams = [];
    Map<String, String> headerParams = {};
    Map<String, String> formParams = {};

    List<String> contentTypes = ["application/json"];

    String nullableContentType = contentTypes.isNotEmpty ? contentTypes[0] : null;
    List<String> authNames = [];

    if(nullableContentType != null && nullableContentType.startsWith("multipart/form-data")) {
      bool hasFields = false;
      MultipartRequest mp = MultipartRequest(null, null);
      if(hasFields)
        postBody = mp;
    }
    else {
    }

    var response = await apiClient.invokeAPI(path,
                                             'POST',
                                             queryParams,
                                             postBody,
                                             headerParams,
                                             formParams,
                                             nullableContentType,
                                             authNames);
    return response;
  }

  /// Create an Edge Router Policy
  ///
  /// 
  Future<InlineResponse2004EmbeddedEdgeRouterPolicyList> requestLgKxU4ph9t({ InlineObject2 inlineObject2 }) async {
    Response response = await requestLgKxU4ph9tWithHttpInfo( inlineObject2: inlineObject2 );
    if(response.statusCode >= 400) {
      throw ApiException(response.statusCode, _decodeBodyBytes(response));
    } else if(response.body != null) {
      return apiClient.deserialize(_decodeBodyBytes(response), 'InlineResponse2004EmbeddedEdgeRouterPolicyList') as InlineResponse2004EmbeddedEdgeRouterPolicyList;
    } else {
      return null;
    }
  }

  /// Create a Service with HTTP info returned
  ///
  /// 
  Future<Response> requestLopoFtq4ihWithHttpInfo({ InlineObject1 inlineObject1 }) async {
    Object postBody = inlineObject1;

    // verify required params are set

    // create path and map variables
    String path = "/core/v2/services".replaceAll("{format}","json");

    // query params
    List<QueryParam> queryParams = [];
    Map<String, String> headerParams = {};
    Map<String, String> formParams = {};

    List<String> contentTypes = ["application/json"];

    String nullableContentType = contentTypes.isNotEmpty ? contentTypes[0] : null;
    List<String> authNames = [];

    if(nullableContentType != null && nullableContentType.startsWith("multipart/form-data")) {
      bool hasFields = false;
      MultipartRequest mp = MultipartRequest(null, null);
      if(hasFields)
        postBody = mp;
    }
    else {
    }

    var response = await apiClient.invokeAPI(path,
                                             'POST',
                                             queryParams,
                                             postBody,
                                             headerParams,
                                             formParams,
                                             nullableContentType,
                                             authNames);
    return response;
  }

  /// Create a Service
  ///
  /// 
  Future<InlineResponse2021> requestLopoFtq4ih({ InlineObject1 inlineObject1 }) async {
    Response response = await requestLopoFtq4ihWithHttpInfo( inlineObject1: inlineObject1 );
    if(response.statusCode >= 400) {
      throw ApiException(response.statusCode, _decodeBodyBytes(response));
    } else if(response.body != null) {
      return apiClient.deserialize(_decodeBodyBytes(response), 'InlineResponse2021') as InlineResponse2021;
    } else {
      return null;
    }
  }

  /// Get the identity of the caller&#39;s API account with HTTP info returned
  ///
  /// 
  Future<Response> requestMpyYtIiS6xWithHttpInfo() async {
    Object postBody;

    // verify required params are set

    // create path and map variables
    String path = "/identity/v1/api-account-identities/self".replaceAll("{format}","json");

    // query params
    List<QueryParam> queryParams = [];
    Map<String, String> headerParams = {};
    Map<String, String> formParams = {};

    List<String> contentTypes = [];

    String nullableContentType = contentTypes.isNotEmpty ? contentTypes[0] : null;
    List<String> authNames = [];

    if(nullableContentType != null && nullableContentType.startsWith("multipart/form-data")) {
      bool hasFields = false;
      MultipartRequest mp = MultipartRequest(null, null);
      if(hasFields)
        postBody = mp;
    }
    else {
    }

    var response = await apiClient.invokeAPI(path,
                                             'GET',
                                             queryParams,
                                             postBody,
                                             headerParams,
                                             formParams,
                                             nullableContentType,
                                             authNames);
    return response;
  }

  /// Get the identity of the caller&#39;s API account
  ///
  /// 
  Future<InlineResponse20016> requestMpyYtIiS6x() async {
    Response response = await requestMpyYtIiS6xWithHttpInfo();
    if(response.statusCode >= 400) {
      throw ApiException(response.statusCode, _decodeBodyBytes(response));
    } else if(response.body != null) {
      return apiClient.deserialize(_decodeBodyBytes(response), 'InlineResponse20016') as InlineResponse20016;
    } else {
      return null;
    }
  }

  /// Get an Organization with HTTP info returned
  ///
  /// 
  Future<Response> requestN6GjgPLO4vWithHttpInfo(String organizationId) async {
    Object postBody;

    // verify required params are set
    if(organizationId == null) {
     throw ApiException(400, "Missing required param: organizationId");
    }

    // create path and map variables
    String path = "/identity/v1/organizations/{organizationId}".replaceAll("{format}","json").replaceAll("{" + "organizationId" + "}", organizationId.toString());

    // query params
    List<QueryParam> queryParams = [];
    Map<String, String> headerParams = {};
    Map<String, String> formParams = {};

    List<String> contentTypes = [];

    String nullableContentType = contentTypes.isNotEmpty ? contentTypes[0] : null;
    List<String> authNames = [];

    if(nullableContentType != null && nullableContentType.startsWith("multipart/form-data")) {
      bool hasFields = false;
      MultipartRequest mp = MultipartRequest(null, null);
      if(hasFields)
        postBody = mp;
    }
    else {
    }

    var response = await apiClient.invokeAPI(path,
                                             'GET',
                                             queryParams,
                                             postBody,
                                             headerParams,
                                             formParams,
                                             nullableContentType,
                                             authNames);
    return response;
  }

  /// Get an Organization
  ///
  /// 
  Future<InlineResponse20014> requestN6GjgPLO4v(String organizationId) async {
    Response response = await requestN6GjgPLO4vWithHttpInfo(organizationId);
    if(response.statusCode >= 400) {
      throw ApiException(response.statusCode, _decodeBodyBytes(response));
    } else if(response.body != null) {
      return apiClient.deserialize(_decodeBodyBytes(response), 'InlineResponse20014') as InlineResponse20014;
    } else {
      return null;
    }
  }

  /// Create an AppWAN with HTTP info returned
  ///
  /// 
  Future<Response> requestNXoV6K2f0QWithHttpInfo({ InlineObject4 inlineObject4 }) async {
    Object postBody = inlineObject4;

    // verify required params are set

    // create path and map variables
    String path = "/core/v2/app-wans".replaceAll("{format}","json");

    // query params
    List<QueryParam> queryParams = [];
    Map<String, String> headerParams = {};
    Map<String, String> formParams = {};

    List<String> contentTypes = ["application/json"];

    String nullableContentType = contentTypes.isNotEmpty ? contentTypes[0] : null;
    List<String> authNames = [];

    if(nullableContentType != null && nullableContentType.startsWith("multipart/form-data")) {
      bool hasFields = false;
      MultipartRequest mp = MultipartRequest(null, null);
      if(hasFields)
        postBody = mp;
    }
    else {
    }

    var response = await apiClient.invokeAPI(path,
                                             'POST',
                                             queryParams,
                                             postBody,
                                             headerParams,
                                             formParams,
                                             nullableContentType,
                                             authNames);
    return response;
  }

  /// Create an AppWAN
  ///
  /// 
  Future<InlineResponse200> requestNXoV6K2f0Q({ InlineObject4 inlineObject4 }) async {
    Response response = await requestNXoV6K2f0QWithHttpInfo( inlineObject4: inlineObject4 );
    if(response.statusCode >= 400) {
      throw ApiException(response.statusCode, _decodeBodyBytes(response));
    } else if(response.body != null) {
      return apiClient.deserialize(_decodeBodyBytes(response), 'InlineResponse200') as InlineResponse200;
    } else {
      return null;
    }
  }

  /// Get the list of Networks with HTTP info returned
  ///
  /// 
  Future<Response> requestOiIAfX2VUsWithHttpInfo() async {
    Object postBody;

    // verify required params are set

    // create path and map variables
    String path = "/core/v2/networks".replaceAll("{format}","json");

    // query params
    List<QueryParam> queryParams = [];
    Map<String, String> headerParams = {};
    Map<String, String> formParams = {};

    List<String> contentTypes = [];

    String nullableContentType = contentTypes.isNotEmpty ? contentTypes[0] : null;
    List<String> authNames = [];

    if(nullableContentType != null && nullableContentType.startsWith("multipart/form-data")) {
      bool hasFields = false;
      MultipartRequest mp = MultipartRequest(null, null);
      if(hasFields)
        postBody = mp;
    }
    else {
    }

    var response = await apiClient.invokeAPI(path,
                                             'GET',
                                             queryParams,
                                             postBody,
                                             headerParams,
                                             formParams,
                                             nullableContentType,
                                             authNames);
    return response;
  }

  /// Get the list of Networks
  ///
  /// 
  Future<InlineResponse2001> requestOiIAfX2VUs() async {
    Response response = await requestOiIAfX2VUsWithHttpInfo();
    if(response.statusCode >= 400) {
      throw ApiException(response.statusCode, _decodeBodyBytes(response));
    } else if(response.body != null) {
      return apiClient.deserialize(_decodeBodyBytes(response), 'InlineResponse2001') as InlineResponse2001;
    } else {
      return null;
    }
  }

  /// Delete a Service with HTTP info returned
  ///
  /// 
  Future<Response> requestPBaaiO3B0dWithHttpInfo(String serviceId) async {
    Object postBody;

    // verify required params are set
    if(serviceId == null) {
     throw ApiException(400, "Missing required param: serviceId");
    }

    // create path and map variables
    String path = "/core/v2/services/{serviceId}".replaceAll("{format}","json").replaceAll("{" + "serviceId" + "}", serviceId.toString());

    // query params
    List<QueryParam> queryParams = [];
    Map<String, String> headerParams = {};
    Map<String, String> formParams = {};

    List<String> contentTypes = [];

    String nullableContentType = contentTypes.isNotEmpty ? contentTypes[0] : null;
    List<String> authNames = [];

    if(nullableContentType != null && nullableContentType.startsWith("multipart/form-data")) {
      bool hasFields = false;
      MultipartRequest mp = MultipartRequest(null, null);
      if(hasFields)
        postBody = mp;
    }
    else {
    }

    var response = await apiClient.invokeAPI(path,
                                             'DELETE',
                                             queryParams,
                                             postBody,
                                             headerParams,
                                             formParams,
                                             nullableContentType,
                                             authNames);
    return response;
  }

  /// Delete a Service
  ///
  /// 
  Future<InlineResponse2022> requestPBaaiO3B0d(String serviceId) async {
    Response response = await requestPBaaiO3B0dWithHttpInfo(serviceId);
    if(response.statusCode >= 400) {
      throw ApiException(response.statusCode, _decodeBodyBytes(response));
    } else if(response.body != null) {
      return apiClient.deserialize(_decodeBodyBytes(response), 'InlineResponse2022') as InlineResponse2022;
    } else {
      return null;
    }
  }

  /// Create an Edge Router with HTTP info returned
  ///
  /// 
  Future<Response> requestPyR6aUP5miWithHttpInfo({ InlineObject6 inlineObject6 }) async {
    Object postBody = inlineObject6;

    // verify required params are set

    // create path and map variables
    String path = "/core/v2/edge-routers".replaceAll("{format}","json");

    // query params
    List<QueryParam> queryParams = [];
    Map<String, String> headerParams = {};
    Map<String, String> formParams = {};

    List<String> contentTypes = ["application/json"];

    String nullableContentType = contentTypes.isNotEmpty ? contentTypes[0] : null;
    List<String> authNames = [];

    if(nullableContentType != null && nullableContentType.startsWith("multipart/form-data")) {
      bool hasFields = false;
      MultipartRequest mp = MultipartRequest(null, null);
      if(hasFields)
        postBody = mp;
    }
    else {
    }

    var response = await apiClient.invokeAPI(path,
                                             'POST',
                                             queryParams,
                                             postBody,
                                             headerParams,
                                             formParams,
                                             nullableContentType,
                                             authNames);
    return response;
  }

  /// Create an Edge Router
  ///
  /// 
  Future<InlineResponse2025> requestPyR6aUP5mi({ InlineObject6 inlineObject6 }) async {
    Response response = await requestPyR6aUP5miWithHttpInfo( inlineObject6: inlineObject6 );
    if(response.statusCode >= 400) {
      throw ApiException(response.statusCode, _decodeBodyBytes(response));
    } else if(response.body != null) {
      return apiClient.deserialize(_decodeBodyBytes(response), 'InlineResponse2025') as InlineResponse2025;
    } else {
      return null;
    }
  }

  /// Get the list of Posture Checks with HTTP info returned
  ///
  /// 
  Future<Response> requestQ0b3cbDW8SWithHttpInfo() async {
    Object postBody;

    // verify required params are set

    // create path and map variables
    String path = "/core/v2/posture-checks".replaceAll("{format}","json");

    // query params
    List<QueryParam> queryParams = [];
    Map<String, String> headerParams = {};
    Map<String, String> formParams = {};

    List<String> contentTypes = [];

    String nullableContentType = contentTypes.isNotEmpty ? contentTypes[0] : null;
    List<String> authNames = [];

    if(nullableContentType != null && nullableContentType.startsWith("multipart/form-data")) {
      bool hasFields = false;
      MultipartRequest mp = MultipartRequest(null, null);
      if(hasFields)
        postBody = mp;
    }
    else {
    }

    var response = await apiClient.invokeAPI(path,
                                             'GET',
                                             queryParams,
                                             postBody,
                                             headerParams,
                                             formParams,
                                             nullableContentType,
                                             authNames);
    return response;
  }

  /// Get the list of Posture Checks
  ///
  /// 
  Future<InlineResponse20010> requestQ0b3cbDW8S() async {
    Response response = await requestQ0b3cbDW8SWithHttpInfo();
    if(response.statusCode >= 400) {
      throw ApiException(response.statusCode, _decodeBodyBytes(response));
    } else if(response.body != null) {
      return apiClient.deserialize(_decodeBodyBytes(response), 'InlineResponse20010') as InlineResponse20010;
    } else {
      return null;
    }
  }

  /// Get a Network with HTTP info returned
  ///
  /// 
  Future<Response> requestTeqMGeER5FWithHttpInfo(String networkId) async {
    Object postBody;

    // verify required params are set
    if(networkId == null) {
     throw ApiException(400, "Missing required param: networkId");
    }

    // create path and map variables
    String path = "/core/v2/networks/{networkId}".replaceAll("{format}","json").replaceAll("{" + "networkId" + "}", networkId.toString());

    // query params
    List<QueryParam> queryParams = [];
    Map<String, String> headerParams = {};
    Map<String, String> formParams = {};

    List<String> contentTypes = [];

    String nullableContentType = contentTypes.isNotEmpty ? contentTypes[0] : null;
    List<String> authNames = [];

    if(nullableContentType != null && nullableContentType.startsWith("multipart/form-data")) {
      bool hasFields = false;
      MultipartRequest mp = MultipartRequest(null, null);
      if(hasFields)
        postBody = mp;
    }
    else {
    }

    var response = await apiClient.invokeAPI(path,
                                             'GET',
                                             queryParams,
                                             postBody,
                                             headerParams,
                                             formParams,
                                             nullableContentType,
                                             authNames);
    return response;
  }

  /// Get a Network
  ///
  /// 
  Future<InlineResponse20013> requestTeqMGeER5F(String networkId) async {
    Response response = await requestTeqMGeER5FWithHttpInfo(networkId);
    if(response.statusCode >= 400) {
      throw ApiException(response.statusCode, _decodeBodyBytes(response));
    } else if(response.body != null) {
      return apiClient.deserialize(_decodeBodyBytes(response), 'InlineResponse20013') as InlineResponse20013;
    } else {
      return null;
    }
  }

  /// Get an Endpoint with HTTP info returned
  ///
  /// 
  Future<Response> requestTsyuwlAejKWithHttpInfo(String endpointId) async {
    Object postBody;

    // verify required params are set
    if(endpointId == null) {
     throw ApiException(400, "Missing required param: endpointId");
    }

    // create path and map variables
    String path = "/core/v2/endpoints/{endpointId}".replaceAll("{format}","json").replaceAll("{" + "endpointId" + "}", endpointId.toString());

    // query params
    List<QueryParam> queryParams = [];
    Map<String, String> headerParams = {};
    Map<String, String> formParams = {};

    List<String> contentTypes = [];

    String nullableContentType = contentTypes.isNotEmpty ? contentTypes[0] : null;
    List<String> authNames = [];

    if(nullableContentType != null && nullableContentType.startsWith("multipart/form-data")) {
      bool hasFields = false;
      MultipartRequest mp = MultipartRequest(null, null);
      if(hasFields)
        postBody = mp;
    }
    else {
    }

    var response = await apiClient.invokeAPI(path,
                                             'GET',
                                             queryParams,
                                             postBody,
                                             headerParams,
                                             formParams,
                                             nullableContentType,
                                             authNames);
    return response;
  }

  /// Get an Endpoint
  ///
  /// 
  Future<InlineResponse2007EmbeddedEndpointList> requestTsyuwlAejK(String endpointId) async {
    Response response = await requestTsyuwlAejKWithHttpInfo(endpointId);
    if(response.statusCode >= 400) {
      throw ApiException(response.statusCode, _decodeBodyBytes(response));
    } else if(response.body != null) {
      return apiClient.deserialize(_decodeBodyBytes(response), 'InlineResponse2007EmbeddedEndpointList') as InlineResponse2007EmbeddedEndpointList;
    } else {
      return null;
    }
  }

  /// Change some properties of a Service with HTTP info returned
  ///
  /// 
  Future<Response> requestVIzB1k6UqbWithHttpInfo(String serviceId, { InlineObject3 inlineObject3 }) async {
    Object postBody = inlineObject3;

    // verify required params are set
    if(serviceId == null) {
     throw ApiException(400, "Missing required param: serviceId");
    }

    // create path and map variables
    String path = "/core/v2/services/{serviceId}".replaceAll("{format}","json").replaceAll("{" + "serviceId" + "}", serviceId.toString());

    // query params
    List<QueryParam> queryParams = [];
    Map<String, String> headerParams = {};
    Map<String, String> formParams = {};

    List<String> contentTypes = ["application/json"];

    String nullableContentType = contentTypes.isNotEmpty ? contentTypes[0] : null;
    List<String> authNames = [];

    if(nullableContentType != null && nullableContentType.startsWith("multipart/form-data")) {
      bool hasFields = false;
      MultipartRequest mp = MultipartRequest(null, null);
      if(hasFields)
        postBody = mp;
    }
    else {
    }

    var response = await apiClient.invokeAPI(path,
                                             'PATCH',
                                             queryParams,
                                             postBody,
                                             headerParams,
                                             formParams,
                                             nullableContentType,
                                             authNames);
    return response;
  }

  /// Change some properties of a Service
  ///
  /// 
  Future<InlineResponse2023> requestVIzB1k6Uqb(String serviceId, { InlineObject3 inlineObject3 }) async {
    Response response = await requestVIzB1k6UqbWithHttpInfo(serviceId,  inlineObject3: inlineObject3 );
    if(response.statusCode >= 400) {
      throw ApiException(response.statusCode, _decodeBodyBytes(response));
    } else if(response.body != null) {
      return apiClient.deserialize(_decodeBodyBytes(response), 'InlineResponse2023') as InlineResponse2023;
    } else {
      return null;
    }
  }

  /// Get a Network Group with HTTP info returned
  ///
  /// 
  Future<Response> requestVeJCBUR9iOWithHttpInfo(String networkGroupId) async {
    Object postBody;

    // verify required params are set
    if(networkGroupId == null) {
     throw ApiException(400, "Missing required param: networkGroupId");
    }

    // create path and map variables
    String path = "/rest/v1/network-groups/{networkGroupId}".replaceAll("{format}","json").replaceAll("{" + "networkGroupId" + "}", networkGroupId.toString());

    // query params
    List<QueryParam> queryParams = [];
    Map<String, String> headerParams = {};
    Map<String, String> formParams = {};

    List<String> contentTypes = [];

    String nullableContentType = contentTypes.isNotEmpty ? contentTypes[0] : null;
    List<String> authNames = [];

    if(nullableContentType != null && nullableContentType.startsWith("multipart/form-data")) {
      bool hasFields = false;
      MultipartRequest mp = MultipartRequest(null, null);
      if(hasFields)
        postBody = mp;
    }
    else {
    }

    var response = await apiClient.invokeAPI(path,
                                             'GET',
                                             queryParams,
                                             postBody,
                                             headerParams,
                                             formParams,
                                             nullableContentType,
                                             authNames);
    return response;
  }

  /// Get a Network Group
  ///
  /// 
  Future<InlineResponse20011> requestVeJCBUR9iO(String networkGroupId) async {
    Response response = await requestVeJCBUR9iOWithHttpInfo(networkGroupId);
    if(response.statusCode >= 400) {
      throw ApiException(response.statusCode, _decodeBodyBytes(response));
    } else if(response.body != null) {
      return apiClient.deserialize(_decodeBodyBytes(response), 'InlineResponse20011') as InlineResponse20011;
    } else {
      return null;
    }
  }

  /// Get the list of data centers with HTTP info returned
  ///
  /// 
  Future<Response> requestVfuaDMeTRPWithHttpInfo() async {
    Object postBody;

    // verify required params are set

    // create path and map variables
    String path = "/core/v2/data-centers".replaceAll("{format}","json");

    // query params
    List<QueryParam> queryParams = [];
    Map<String, String> headerParams = {};
    Map<String, String> formParams = {};

    List<String> contentTypes = [];

    String nullableContentType = contentTypes.isNotEmpty ? contentTypes[0] : null;
    List<String> authNames = [];

    if(nullableContentType != null && nullableContentType.startsWith("multipart/form-data")) {
      bool hasFields = false;
      MultipartRequest mp = MultipartRequest(null, null);
      if(hasFields)
        postBody = mp;
    }
    else {
    }

    var response = await apiClient.invokeAPI(path,
                                             'GET',
                                             queryParams,
                                             postBody,
                                             headerParams,
                                             formParams,
                                             nullableContentType,
                                             authNames);
    return response;
  }

  /// Get the list of data centers
  ///
  /// 
  Future<InlineResponse2002> requestVfuaDMeTRP() async {
    Response response = await requestVfuaDMeTRPWithHttpInfo();
    if(response.statusCode >= 400) {
      throw ApiException(response.statusCode, _decodeBodyBytes(response));
    } else if(response.body != null) {
      return apiClient.deserialize(_decodeBodyBytes(response), 'InlineResponse2002') as InlineResponse2002;
    } else {
      return null;
    }
  }

  /// Get a Service with HTTP info returned
  ///
  /// 
  Future<Response> requestYLsf4m9TTTWithHttpInfo(String serviceId) async {
    Object postBody;

    // verify required params are set
    if(serviceId == null) {
     throw ApiException(400, "Missing required param: serviceId");
    }

    // create path and map variables
    String path = "/core/v2/services/{serviceId}".replaceAll("{format}","json").replaceAll("{" + "serviceId" + "}", serviceId.toString());

    // query params
    List<QueryParam> queryParams = [];
    Map<String, String> headerParams = {};
    Map<String, String> formParams = {};

    List<String> contentTypes = [];

    String nullableContentType = contentTypes.isNotEmpty ? contentTypes[0] : null;
    List<String> authNames = [];

    if(nullableContentType != null && nullableContentType.startsWith("multipart/form-data")) {
      bool hasFields = false;
      MultipartRequest mp = MultipartRequest(null, null);
      if(hasFields)
        postBody = mp;
    }
    else {
    }

    var response = await apiClient.invokeAPI(path,
                                             'GET',
                                             queryParams,
                                             postBody,
                                             headerParams,
                                             formParams,
                                             nullableContentType,
                                             authNames);
    return response;
  }

  /// Get a Service
  ///
  /// 
  Future<InlineResponse2005> requestYLsf4m9TTT(String serviceId) async {
    Response response = await requestYLsf4m9TTTWithHttpInfo(serviceId);
    if(response.statusCode >= 400) {
      throw ApiException(response.statusCode, _decodeBodyBytes(response));
    } else if(response.body != null) {
      return apiClient.deserialize(_decodeBodyBytes(response), 'InlineResponse2005') as InlineResponse2005;
    } else {
      return null;
    }
  }

  /// Get an Edge Router with HTTP info returned
  ///
  /// 
  Future<Response> requestYhzDAw1Ks4WithHttpInfo() async {
    Object postBody;

    // verify required params are set

    // create path and map variables
    String path = "/core/v2/edge-routers".replaceAll("{format}","json");

    // query params
    List<QueryParam> queryParams = [];
    Map<String, String> headerParams = {};
    Map<String, String> formParams = {};

    List<String> contentTypes = [];

    String nullableContentType = contentTypes.isNotEmpty ? contentTypes[0] : null;
    List<String> authNames = [];

    if(nullableContentType != null && nullableContentType.startsWith("multipart/form-data")) {
      bool hasFields = false;
      MultipartRequest mp = MultipartRequest(null, null);
      if(hasFields)
        postBody = mp;
    }
    else {
    }

    var response = await apiClient.invokeAPI(path,
                                             'GET',
                                             queryParams,
                                             postBody,
                                             headerParams,
                                             formParams,
                                             nullableContentType,
                                             authNames);
    return response;
  }

  /// Get an Edge Router
  ///
  /// 
  Future<InlineResponse20018> requestYhzDAw1Ks4() async {
    Response response = await requestYhzDAw1Ks4WithHttpInfo();
    if(response.statusCode >= 400) {
      throw ApiException(response.statusCode, _decodeBodyBytes(response));
    } else if(response.body != null) {
      return apiClient.deserialize(_decodeBodyBytes(response), 'InlineResponse20018') as InlineResponse20018;
    } else {
      return null;
    }
  }

}
