part of openapi.api;

class InlineResponse2003EmbeddedModelEdgeRouterHosts {
  
  String edgeRouterId = null;
  
  InlineResponse2003EmbeddedModelServerEgress1 serverEgress = null;
  InlineResponse2003EmbeddedModelEdgeRouterHosts();

  @override
  String toString() {
    return 'InlineResponse2003EmbeddedModelEdgeRouterHosts[edgeRouterId=$edgeRouterId, serverEgress=$serverEgress, ]';
  }

  InlineResponse2003EmbeddedModelEdgeRouterHosts.fromJson(Map<String, dynamic> json) {
    if (json == null) return;
    edgeRouterId = json['edgeRouterId'];
    serverEgress = (json['serverEgress'] == null) ?
      null :
      InlineResponse2003EmbeddedModelServerEgress1.fromJson(json['serverEgress']);
  }

  Map<String, dynamic> toJson() {
    Map <String, dynamic> json = {};
    if (edgeRouterId != null)
      json['edgeRouterId'] = edgeRouterId;
    if (serverEgress != null)
      json['serverEgress'] = serverEgress;
    return json;
  }

  static List<InlineResponse2003EmbeddedModelEdgeRouterHosts> listFromJson(List<dynamic> json) {
    return json == null ? List<InlineResponse2003EmbeddedModelEdgeRouterHosts>() : json.map((value) => InlineResponse2003EmbeddedModelEdgeRouterHosts.fromJson(value)).toList();
  }

  static Map<String, InlineResponse2003EmbeddedModelEdgeRouterHosts> mapFromJson(Map<String, dynamic> json) {
    var map = Map<String, InlineResponse2003EmbeddedModelEdgeRouterHosts>();
    if (json != null && json.isNotEmpty) {
      json.forEach((String key, dynamic value) => map[key] = InlineResponse2003EmbeddedModelEdgeRouterHosts.fromJson(value));
    }
    return map;
  }

  // maps a json object with a list of InlineResponse2003EmbeddedModelEdgeRouterHosts-objects as value to a dart map
  static Map<String, List<InlineResponse2003EmbeddedModelEdgeRouterHosts>> mapListFromJson(Map<String, dynamic> json) {
    var map = Map<String, List<InlineResponse2003EmbeddedModelEdgeRouterHosts>>();
     if (json != null && json.isNotEmpty) {
       json.forEach((String key, dynamic value) {
         map[key] = InlineResponse2003EmbeddedModelEdgeRouterHosts.listFromJson(value);
       });
     }
     return map;
  }
}

