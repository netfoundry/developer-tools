part of openapi.api;

class InlineResponse20018Embedded {
  
  List<InlineResponse20012> edgeRouterList = [];
  InlineResponse20018Embedded();

  @override
  String toString() {
    return 'InlineResponse20018Embedded[edgeRouterList=$edgeRouterList, ]';
  }

  InlineResponse20018Embedded.fromJson(Map<String, dynamic> json) {
    if (json == null) return;
    edgeRouterList = (json['edgeRouterList'] == null) ?
      null :
      InlineResponse20012.listFromJson(json['edgeRouterList']);
  }

  Map<String, dynamic> toJson() {
    Map <String, dynamic> json = {};
    if (edgeRouterList != null)
      json['edgeRouterList'] = edgeRouterList;
    return json;
  }

  static List<InlineResponse20018Embedded> listFromJson(List<dynamic> json) {
    return json == null ? List<InlineResponse20018Embedded>() : json.map((value) => InlineResponse20018Embedded.fromJson(value)).toList();
  }

  static Map<String, InlineResponse20018Embedded> mapFromJson(Map<String, dynamic> json) {
    var map = Map<String, InlineResponse20018Embedded>();
    if (json != null && json.isNotEmpty) {
      json.forEach((String key, dynamic value) => map[key] = InlineResponse20018Embedded.fromJson(value));
    }
    return map;
  }

  // maps a json object with a list of InlineResponse20018Embedded-objects as value to a dart map
  static Map<String, List<InlineResponse20018Embedded>> mapListFromJson(Map<String, dynamic> json) {
    var map = Map<String, List<InlineResponse20018Embedded>>();
     if (json != null && json.isNotEmpty) {
       json.forEach((String key, dynamic value) {
         map[key] = InlineResponse20018Embedded.listFromJson(value);
       });
     }
     return map;
  }
}

