part of openapi.api;

class QueryParam {
  String name;
  String value;

  QueryParam(this.name, this.value);
}

class ApiClient {

  String basePath;
  var client = Client();

  Map<String, String> _defaultHeaderMap = {};
  Map<String, Authentication> _authentications = {};

  final _regList = RegExp(r'^List<(.*)>$');
  final _regMap = RegExp(r'^Map<String,(.*)>$');

  ApiClient({this.basePath = "http://localhost"}) {
  }

  void addDefaultHeader(String key, String value) {
     _defaultHeaderMap[key] = value;
  }

  dynamic _deserialize(dynamic value, String targetType) {
    try {
      switch (targetType) {
        case 'String':
          return '$value';
        case 'int':
          return value is int ? value : int.parse('$value');
        case 'bool':
          return value is bool ? value : '$value'.toLowerCase() == 'true';
        case 'double':
          return value is double ? value : double.parse('$value');
        case 'CoreV2EndpointsEnrollmentMethod':
          return CoreV2EndpointsEnrollmentMethod.fromJson(value);
        case 'CoreV2ServicesModel':
          return CoreV2ServicesModel.fromJson(value);
        case 'CoreV2ServicesModelClientIngress':
          return CoreV2ServicesModelClientIngress.fromJson(value);
        case 'CoreV2ServicesModelClientIngressPorts':
          return CoreV2ServicesModelClientIngressPorts.fromJson(value);
        case 'CoreV2ServicesModelEdgeRouterHosts':
          return CoreV2ServicesModelEdgeRouterHosts.fromJson(value);
        case 'CoreV2ServicesModelServerEgress':
          return CoreV2ServicesModelServerEgress.fromJson(value);
        case 'CoreV2ServicesServiceIdModel':
          return CoreV2ServicesServiceIdModel.fromJson(value);
        case 'CoreV2ServicesServiceIdModelClientIngress':
          return CoreV2ServicesServiceIdModelClientIngress.fromJson(value);
        case 'CoreV2ServicesServiceIdModelServerEgress':
          return CoreV2ServicesServiceIdModelServerEgress.fromJson(value);
        case 'InlineObject':
          return InlineObject.fromJson(value);
        case 'InlineObject1':
          return InlineObject1.fromJson(value);
        case 'InlineObject2':
          return InlineObject2.fromJson(value);
        case 'InlineObject3':
          return InlineObject3.fromJson(value);
        case 'InlineObject4':
          return InlineObject4.fromJson(value);
        case 'InlineObject5':
          return InlineObject5.fromJson(value);
        case 'InlineObject6':
          return InlineObject6.fromJson(value);
        case 'InlineResponse200':
          return InlineResponse200.fromJson(value);
        case 'InlineResponse2001':
          return InlineResponse2001.fromJson(value);
        case 'InlineResponse20010':
          return InlineResponse20010.fromJson(value);
        case 'InlineResponse20011':
          return InlineResponse20011.fromJson(value);
        case 'InlineResponse20011Links':
          return InlineResponse20011Links.fromJson(value);
        case 'InlineResponse20012':
          return InlineResponse20012.fromJson(value);
        case 'InlineResponse20013':
          return InlineResponse20013.fromJson(value);
        case 'InlineResponse20014':
          return InlineResponse20014.fromJson(value);
        case 'InlineResponse20014IdentityProviders':
          return InlineResponse20014IdentityProviders.fromJson(value);
        case 'InlineResponse20014UpdatedAt':
          return InlineResponse20014UpdatedAt.fromJson(value);
        case 'InlineResponse20015':
          return InlineResponse20015.fromJson(value);
        case 'InlineResponse20015Embedded':
          return InlineResponse20015Embedded.fromJson(value);
        case 'InlineResponse20015EmbeddedNetworkConfigMetadataList':
          return InlineResponse20015EmbeddedNetworkConfigMetadataList.fromJson(value);
        case 'InlineResponse20016':
          return InlineResponse20016.fromJson(value);
        case 'InlineResponse20017':
          return InlineResponse20017.fromJson(value);
        case 'InlineResponse20017Embedded':
          return InlineResponse20017Embedded.fromJson(value);
        case 'InlineResponse20017EmbeddedOrganizations':
          return InlineResponse20017EmbeddedOrganizations.fromJson(value);
        case 'InlineResponse20017Links':
          return InlineResponse20017Links.fromJson(value);
        case 'InlineResponse20018':
          return InlineResponse20018.fromJson(value);
        case 'InlineResponse20018Embedded':
          return InlineResponse20018Embedded.fromJson(value);
        case 'InlineResponse20019':
          return InlineResponse20019.fromJson(value);
        case 'InlineResponse20019710':
          return InlineResponse20019710.fromJson(value);
        case 'InlineResponse200197316':
          return InlineResponse200197316.fromJson(value);
        case 'InlineResponse20019734':
          return InlineResponse20019734.fromJson(value);
        case 'InlineResponse2001Embedded':
          return InlineResponse2001Embedded.fromJson(value);
        case 'InlineResponse2001EmbeddedLinks':
          return InlineResponse2001EmbeddedLinks.fromJson(value);
        case 'InlineResponse2001EmbeddedNetworkList':
          return InlineResponse2001EmbeddedNetworkList.fromJson(value);
        case 'InlineResponse2001Links':
          return InlineResponse2001Links.fromJson(value);
        case 'InlineResponse2001LinksSelf':
          return InlineResponse2001LinksSelf.fromJson(value);
        case 'InlineResponse2001Page':
          return InlineResponse2001Page.fromJson(value);
        case 'InlineResponse2002':
          return InlineResponse2002.fromJson(value);
        case 'InlineResponse2002Embedded':
          return InlineResponse2002Embedded.fromJson(value);
        case 'InlineResponse2002EmbeddedDataCenters':
          return InlineResponse2002EmbeddedDataCenters.fromJson(value);
        case 'InlineResponse2002EmbeddedLinks':
          return InlineResponse2002EmbeddedLinks.fromJson(value);
        case 'InlineResponse2003':
          return InlineResponse2003.fromJson(value);
        case 'InlineResponse2003Embedded':
          return InlineResponse2003Embedded.fromJson(value);
        case 'InlineResponse2003EmbeddedConfigIdByConfigTypeId':
          return InlineResponse2003EmbeddedConfigIdByConfigTypeId.fromJson(value);
        case 'InlineResponse2003EmbeddedModel':
          return InlineResponse2003EmbeddedModel.fromJson(value);
        case 'InlineResponse2003EmbeddedModelClientIngress':
          return InlineResponse2003EmbeddedModelClientIngress.fromJson(value);
        case 'InlineResponse2003EmbeddedModelClientIngressPorts':
          return InlineResponse2003EmbeddedModelClientIngressPorts.fromJson(value);
        case 'InlineResponse2003EmbeddedModelEdgeRouterHosts':
          return InlineResponse2003EmbeddedModelEdgeRouterHosts.fromJson(value);
        case 'InlineResponse2003EmbeddedModelServerEgress':
          return InlineResponse2003EmbeddedModelServerEgress.fromJson(value);
        case 'InlineResponse2003EmbeddedModelServerEgress1':
          return InlineResponse2003EmbeddedModelServerEgress1.fromJson(value);
        case 'InlineResponse2003EmbeddedServiceList':
          return InlineResponse2003EmbeddedServiceList.fromJson(value);
        case 'InlineResponse2004':
          return InlineResponse2004.fromJson(value);
        case 'InlineResponse2004Embedded':
          return InlineResponse2004Embedded.fromJson(value);
        case 'InlineResponse2004EmbeddedEdgeRouterPolicyList':
          return InlineResponse2004EmbeddedEdgeRouterPolicyList.fromJson(value);
        case 'InlineResponse2005':
          return InlineResponse2005.fromJson(value);
        case 'InlineResponse2005ConfigIdByConfigTypeId':
          return InlineResponse2005ConfigIdByConfigTypeId.fromJson(value);
        case 'InlineResponse2006':
          return InlineResponse2006.fromJson(value);
        case 'InlineResponse2006Embedded':
          return InlineResponse2006Embedded.fromJson(value);
        case 'InlineResponse2007':
          return InlineResponse2007.fromJson(value);
        case 'InlineResponse2007Embedded':
          return InlineResponse2007Embedded.fromJson(value);
        case 'InlineResponse2007EmbeddedEndpointList':
          return InlineResponse2007EmbeddedEndpointList.fromJson(value);
        case 'InlineResponse2008':
          return InlineResponse2008.fromJson(value);
        case 'InlineResponse2009':
          return InlineResponse2009.fromJson(value);
        case 'InlineResponse200Links':
          return InlineResponse200Links.fromJson(value);
        case 'InlineResponse200LinksNetwork':
          return InlineResponse200LinksNetwork.fromJson(value);
        case 'InlineResponse200LinksSelf':
          return InlineResponse200LinksSelf.fromJson(value);
        case 'InlineResponse202':
          return InlineResponse202.fromJson(value);
        case 'InlineResponse2021':
          return InlineResponse2021.fromJson(value);
        case 'InlineResponse2021ConfigIdByConfigTypeId':
          return InlineResponse2021ConfigIdByConfigTypeId.fromJson(value);
        case 'InlineResponse2021Links':
          return InlineResponse2021Links.fromJson(value);
        case 'InlineResponse2022':
          return InlineResponse2022.fromJson(value);
        case 'InlineResponse2022ConfigIdByConfigTypeId':
          return InlineResponse2022ConfigIdByConfigTypeId.fromJson(value);
        case 'InlineResponse2023':
          return InlineResponse2023.fromJson(value);
        case 'InlineResponse2023ConfigIdByConfigTypeId':
          return InlineResponse2023ConfigIdByConfigTypeId.fromJson(value);
        case 'InlineResponse2023Model':
          return InlineResponse2023Model.fromJson(value);
        case 'InlineResponse2023ModelClientIngress':
          return InlineResponse2023ModelClientIngress.fromJson(value);
        case 'InlineResponse2024':
          return InlineResponse2024.fromJson(value);
        case 'InlineResponse2024Links':
          return InlineResponse2024Links.fromJson(value);
        case 'InlineResponse2024NetworkController':
          return InlineResponse2024NetworkController.fromJson(value);
        case 'InlineResponse2025':
          return InlineResponse2025.fromJson(value);
        case 'InlineResponse202Links':
          return InlineResponse202Links.fromJson(value);
        case 'InlineResponse500':
          return InlineResponse500.fromJson(value);
        case 'InlineResponse5001':
          return InlineResponse5001.fromJson(value);
        case 'InlineResponse5001Status':
          return InlineResponse5001Status.fromJson(value);
        default:
          {
            Match match;
            if (value is List &&
                (match = _regList.firstMatch(targetType)) != null) {
              var newTargetType = match[1];
              return value.map((v) => _deserialize(v, newTargetType)).toList();
            } else if (value is Map &&
                (match = _regMap.firstMatch(targetType)) != null) {
              var newTargetType = match[1];
              return Map.fromIterables(value.keys,
                  value.values.map((v) => _deserialize(v, newTargetType)));
            }
          }
      }
    } on Exception catch (e, stack) {
      throw ApiException.withInner(500, 'Exception during deserialization.', e, stack);
    }
    throw ApiException(500, 'Could not find a suitable class for deserialization');
  }

  dynamic deserialize(String json, String targetType) {
    // Remove all spaces.  Necessary for reg expressions as well.
    targetType = targetType.replaceAll(' ', '');

    if (targetType == 'String') return json;

    var decodedJson = jsonDecode(json);
    return _deserialize(decodedJson, targetType);
  }

  String serialize(Object obj) {
    String serialized = '';
    if (obj == null) {
      serialized = '';
    } else {
      serialized = json.encode(obj);
    }
    return serialized;
  }

  // We don't use a Map<String, String> for queryParams.
  // If collectionFormat is 'multi' a key might appear multiple times.
  Future<Response> invokeAPI(String path,
                             String method,
                             Iterable<QueryParam> queryParams,
                             Object body,
                             Map<String, String> headerParams,
                             Map<String, String> formParams,
                             String nullableContentType,
                             List<String> authNames) async {

    _updateParamsForAuth(authNames, queryParams, headerParams);

    var ps = queryParams
      .where((p) => p.value != null)
      .map((p) => '${p.name}=${Uri.encodeQueryComponent(p.value)}');

    String queryString = ps.isNotEmpty ?
                         '?' + ps.join('&') :
                         '';

    String url = basePath + path + queryString;

    headerParams.addAll(_defaultHeaderMap);
    if (nullableContentType != null) {
      final contentType = nullableContentType;
      headerParams['Content-Type'] = contentType;
    }

    if(body is MultipartRequest) {
      var request = MultipartRequest(method, Uri.parse(url));
      request.fields.addAll(body.fields);
      request.files.addAll(body.files);
      request.headers.addAll(body.headers);
      request.headers.addAll(headerParams);
      var response = await client.send(request);
      return Response.fromStream(response);
    } else {
      var msgBody = nullableContentType == "application/x-www-form-urlencoded" ? formParams : serialize(body);
      final nullableHeaderParams = (headerParams.isEmpty)? null: headerParams;
      switch(method) {
        case "POST":
          return client.post(url, headers: nullableHeaderParams, body: msgBody);
        case "PUT":
          return client.put(url, headers: nullableHeaderParams, body: msgBody);
        case "DELETE":
          return client.delete(url, headers: nullableHeaderParams);
        case "PATCH":
          return client.patch(url, headers: nullableHeaderParams, body: msgBody);
        case "HEAD":
          return client.head(url, headers: nullableHeaderParams);
        default:
          return client.get(url, headers: nullableHeaderParams);
      }
    }
  }

  /// Update query and header parameters based on authentication settings.
  /// @param authNames The authentications to apply
  void _updateParamsForAuth(List<String> authNames, List<QueryParam> queryParams, Map<String, String> headerParams) {
    authNames.forEach((authName) {
      Authentication auth = _authentications[authName];
      if (auth == null) throw ArgumentError("Authentication undefined: " + authName);
      auth.applyToParams(queryParams, headerParams);
    });
  }

  T getAuthentication<T extends Authentication>(String name) {
    var authentication = _authentications[name];

    return authentication is T ? authentication : null;
  }
}
