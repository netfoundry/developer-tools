part of openapi.api;

class CoreV2ServicesModel {
  
  List<String> edgeRouterAttributes = [];
  
  InlineResponse2003EmbeddedModelServerEgress serverEgress = null;
  
  List<String> bindEndpointAttributes = [];
  
  CoreV2ServicesModelClientIngress clientIngress = null;
  
  List<CoreV2ServicesModelEdgeRouterHosts> edgeRouterHosts = [];
  CoreV2ServicesModel();

  @override
  String toString() {
    return 'CoreV2ServicesModel[edgeRouterAttributes=$edgeRouterAttributes, serverEgress=$serverEgress, bindEndpointAttributes=$bindEndpointAttributes, clientIngress=$clientIngress, edgeRouterHosts=$edgeRouterHosts, ]';
  }

  CoreV2ServicesModel.fromJson(Map<String, dynamic> json) {
    if (json == null) return;
    edgeRouterAttributes = (json['edgeRouterAttributes'] == null) ?
      null :
      (json['edgeRouterAttributes'] as List).cast<String>();
    serverEgress = (json['serverEgress'] == null) ?
      null :
      InlineResponse2003EmbeddedModelServerEgress.fromJson(json['serverEgress']);
    bindEndpointAttributes = (json['bindEndpointAttributes'] == null) ?
      null :
      (json['bindEndpointAttributes'] as List).cast<String>();
    clientIngress = (json['clientIngress'] == null) ?
      null :
      CoreV2ServicesModelClientIngress.fromJson(json['clientIngress']);
    edgeRouterHosts = (json['edgeRouterHosts'] == null) ?
      null :
      CoreV2ServicesModelEdgeRouterHosts.listFromJson(json['edgeRouterHosts']);
  }

  Map<String, dynamic> toJson() {
    Map <String, dynamic> json = {};
    if (edgeRouterAttributes != null)
      json['edgeRouterAttributes'] = edgeRouterAttributes;
    if (serverEgress != null)
      json['serverEgress'] = serverEgress;
    if (bindEndpointAttributes != null)
      json['bindEndpointAttributes'] = bindEndpointAttributes;
    if (clientIngress != null)
      json['clientIngress'] = clientIngress;
    if (edgeRouterHosts != null)
      json['edgeRouterHosts'] = edgeRouterHosts;
    return json;
  }

  static List<CoreV2ServicesModel> listFromJson(List<dynamic> json) {
    return json == null ? List<CoreV2ServicesModel>() : json.map((value) => CoreV2ServicesModel.fromJson(value)).toList();
  }

  static Map<String, CoreV2ServicesModel> mapFromJson(Map<String, dynamic> json) {
    var map = Map<String, CoreV2ServicesModel>();
    if (json != null && json.isNotEmpty) {
      json.forEach((String key, dynamic value) => map[key] = CoreV2ServicesModel.fromJson(value));
    }
    return map;
  }

  // maps a json object with a list of CoreV2ServicesModel-objects as value to a dart map
  static Map<String, List<CoreV2ServicesModel>> mapListFromJson(Map<String, dynamic> json) {
    var map = Map<String, List<CoreV2ServicesModel>>();
     if (json != null && json.isNotEmpty) {
       json.forEach((String key, dynamic value) {
         map[key] = CoreV2ServicesModel.listFromJson(value);
       });
     }
     return map;
  }
}

