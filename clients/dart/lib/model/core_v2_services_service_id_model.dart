part of openapi.api;

class CoreV2ServicesServiceIdModel {
  
  List<String> bindEndpointAttributes = [];
  
  CoreV2ServicesServiceIdModelClientIngress clientIngress = null;
  
  List<String> edgeRouterAttributes = [];
  
  CoreV2ServicesServiceIdModelServerEgress serverEgress = null;
  CoreV2ServicesServiceIdModel();

  @override
  String toString() {
    return 'CoreV2ServicesServiceIdModel[bindEndpointAttributes=$bindEndpointAttributes, clientIngress=$clientIngress, edgeRouterAttributes=$edgeRouterAttributes, serverEgress=$serverEgress, ]';
  }

  CoreV2ServicesServiceIdModel.fromJson(Map<String, dynamic> json) {
    if (json == null) return;
    bindEndpointAttributes = (json['bindEndpointAttributes'] == null) ?
      null :
      (json['bindEndpointAttributes'] as List).cast<String>();
    clientIngress = (json['clientIngress'] == null) ?
      null :
      CoreV2ServicesServiceIdModelClientIngress.fromJson(json['clientIngress']);
    edgeRouterAttributes = (json['edgeRouterAttributes'] == null) ?
      null :
      (json['edgeRouterAttributes'] as List).cast<String>();
    serverEgress = (json['serverEgress'] == null) ?
      null :
      CoreV2ServicesServiceIdModelServerEgress.fromJson(json['serverEgress']);
  }

  Map<String, dynamic> toJson() {
    Map <String, dynamic> json = {};
    if (bindEndpointAttributes != null)
      json['bindEndpointAttributes'] = bindEndpointAttributes;
    if (clientIngress != null)
      json['clientIngress'] = clientIngress;
    if (edgeRouterAttributes != null)
      json['edgeRouterAttributes'] = edgeRouterAttributes;
    if (serverEgress != null)
      json['serverEgress'] = serverEgress;
    return json;
  }

  static List<CoreV2ServicesServiceIdModel> listFromJson(List<dynamic> json) {
    return json == null ? List<CoreV2ServicesServiceIdModel>() : json.map((value) => CoreV2ServicesServiceIdModel.fromJson(value)).toList();
  }

  static Map<String, CoreV2ServicesServiceIdModel> mapFromJson(Map<String, dynamic> json) {
    var map = Map<String, CoreV2ServicesServiceIdModel>();
    if (json != null && json.isNotEmpty) {
      json.forEach((String key, dynamic value) => map[key] = CoreV2ServicesServiceIdModel.fromJson(value));
    }
    return map;
  }

  // maps a json object with a list of CoreV2ServicesServiceIdModel-objects as value to a dart map
  static Map<String, List<CoreV2ServicesServiceIdModel>> mapListFromJson(Map<String, dynamic> json) {
    var map = Map<String, List<CoreV2ServicesServiceIdModel>>();
     if (json != null && json.isNotEmpty) {
       json.forEach((String key, dynamic value) {
         map[key] = CoreV2ServicesServiceIdModel.listFromJson(value);
       });
     }
     return map;
  }
}

