part of openapi.api;

class InlineResponse2004Embedded {
  
  List<InlineResponse2004EmbeddedEdgeRouterPolicyList> edgeRouterPolicyList = [];
  InlineResponse2004Embedded();

  @override
  String toString() {
    return 'InlineResponse2004Embedded[edgeRouterPolicyList=$edgeRouterPolicyList, ]';
  }

  InlineResponse2004Embedded.fromJson(Map<String, dynamic> json) {
    if (json == null) return;
    edgeRouterPolicyList = (json['edgeRouterPolicyList'] == null) ?
      null :
      InlineResponse2004EmbeddedEdgeRouterPolicyList.listFromJson(json['edgeRouterPolicyList']);
  }

  Map<String, dynamic> toJson() {
    Map <String, dynamic> json = {};
    if (edgeRouterPolicyList != null)
      json['edgeRouterPolicyList'] = edgeRouterPolicyList;
    return json;
  }

  static List<InlineResponse2004Embedded> listFromJson(List<dynamic> json) {
    return json == null ? List<InlineResponse2004Embedded>() : json.map((value) => InlineResponse2004Embedded.fromJson(value)).toList();
  }

  static Map<String, InlineResponse2004Embedded> mapFromJson(Map<String, dynamic> json) {
    var map = Map<String, InlineResponse2004Embedded>();
    if (json != null && json.isNotEmpty) {
      json.forEach((String key, dynamic value) => map[key] = InlineResponse2004Embedded.fromJson(value));
    }
    return map;
  }

  // maps a json object with a list of InlineResponse2004Embedded-objects as value to a dart map
  static Map<String, List<InlineResponse2004Embedded>> mapListFromJson(Map<String, dynamic> json) {
    var map = Map<String, List<InlineResponse2004Embedded>>();
     if (json != null && json.isNotEmpty) {
       json.forEach((String key, dynamic value) {
         map[key] = InlineResponse2004Embedded.listFromJson(value);
       });
     }
     return map;
  }
}

