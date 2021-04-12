part of openapi.api;

class InlineResponse2023Model {
  
  List<String> bindEndpointAttributes = [];
  
  InlineResponse2023ModelClientIngress clientIngress = null;
  
  List<String> edgeRouterAttributes = [];
  
  CoreV2ServicesServiceIdModelServerEgress serverEgress = null;
  InlineResponse2023Model();

  @override
  String toString() {
    return 'InlineResponse2023Model[bindEndpointAttributes=$bindEndpointAttributes, clientIngress=$clientIngress, edgeRouterAttributes=$edgeRouterAttributes, serverEgress=$serverEgress, ]';
  }

  InlineResponse2023Model.fromJson(Map<String, dynamic> json) {
    if (json == null) return;
    bindEndpointAttributes = (json['bindEndpointAttributes'] == null) ?
      null :
      (json['bindEndpointAttributes'] as List).cast<String>();
    clientIngress = (json['clientIngress'] == null) ?
      null :
      InlineResponse2023ModelClientIngress.fromJson(json['clientIngress']);
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

  static List<InlineResponse2023Model> listFromJson(List<dynamic> json) {
    return json == null ? List<InlineResponse2023Model>() : json.map((value) => InlineResponse2023Model.fromJson(value)).toList();
  }

  static Map<String, InlineResponse2023Model> mapFromJson(Map<String, dynamic> json) {
    var map = Map<String, InlineResponse2023Model>();
    if (json != null && json.isNotEmpty) {
      json.forEach((String key, dynamic value) => map[key] = InlineResponse2023Model.fromJson(value));
    }
    return map;
  }

  // maps a json object with a list of InlineResponse2023Model-objects as value to a dart map
  static Map<String, List<InlineResponse2023Model>> mapListFromJson(Map<String, dynamic> json) {
    var map = Map<String, List<InlineResponse2023Model>>();
     if (json != null && json.isNotEmpty) {
       json.forEach((String key, dynamic value) {
         map[key] = InlineResponse2023Model.listFromJson(value);
       });
     }
     return map;
  }
}

