part of openapi.api;

class InlineResponse2003EmbeddedModel {
  
  List<String> edgeRouterAttributes = [];
  
  InlineResponse2003EmbeddedModelServerEgress serverEgress = null;
  
  List<String> bindEndpointAttributes = [];
  
  InlineResponse2003EmbeddedModelClientIngress clientIngress = null;
  
  List<InlineResponse2003EmbeddedModelEdgeRouterHosts> edgeRouterHosts = [];
  InlineResponse2003EmbeddedModel();

  @override
  String toString() {
    return 'InlineResponse2003EmbeddedModel[edgeRouterAttributes=$edgeRouterAttributes, serverEgress=$serverEgress, bindEndpointAttributes=$bindEndpointAttributes, clientIngress=$clientIngress, edgeRouterHosts=$edgeRouterHosts, ]';
  }

  InlineResponse2003EmbeddedModel.fromJson(Map<String, dynamic> json) {
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
      InlineResponse2003EmbeddedModelClientIngress.fromJson(json['clientIngress']);
    edgeRouterHosts = (json['edgeRouterHosts'] == null) ?
      null :
      InlineResponse2003EmbeddedModelEdgeRouterHosts.listFromJson(json['edgeRouterHosts']);
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

  static List<InlineResponse2003EmbeddedModel> listFromJson(List<dynamic> json) {
    return json == null ? List<InlineResponse2003EmbeddedModel>() : json.map((value) => InlineResponse2003EmbeddedModel.fromJson(value)).toList();
  }

  static Map<String, InlineResponse2003EmbeddedModel> mapFromJson(Map<String, dynamic> json) {
    var map = Map<String, InlineResponse2003EmbeddedModel>();
    if (json != null && json.isNotEmpty) {
      json.forEach((String key, dynamic value) => map[key] = InlineResponse2003EmbeddedModel.fromJson(value));
    }
    return map;
  }

  // maps a json object with a list of InlineResponse2003EmbeddedModel-objects as value to a dart map
  static Map<String, List<InlineResponse2003EmbeddedModel>> mapListFromJson(Map<String, dynamic> json) {
    var map = Map<String, List<InlineResponse2003EmbeddedModel>>();
     if (json != null && json.isNotEmpty) {
       json.forEach((String key, dynamic value) {
         map[key] = InlineResponse2003EmbeddedModel.listFromJson(value);
       });
     }
     return map;
  }
}

