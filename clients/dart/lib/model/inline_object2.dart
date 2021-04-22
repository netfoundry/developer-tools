part of openapi.api;

class InlineObject2 {
  
  List<String> edgeRouterAttributes = [];
  
  List<String> endpointAttributes = [];
  
  String name = null;
  
  String networkId = null;
  InlineObject2();

  @override
  String toString() {
    return 'InlineObject2[edgeRouterAttributes=$edgeRouterAttributes, endpointAttributes=$endpointAttributes, name=$name, networkId=$networkId, ]';
  }

  InlineObject2.fromJson(Map<String, dynamic> json) {
    if (json == null) return;
    edgeRouterAttributes = (json['edgeRouterAttributes'] == null) ?
      null :
      (json['edgeRouterAttributes'] as List).cast<String>();
    endpointAttributes = (json['endpointAttributes'] == null) ?
      null :
      (json['endpointAttributes'] as List).cast<String>();
    name = json['name'];
    networkId = json['networkId'];
  }

  Map<String, dynamic> toJson() {
    Map <String, dynamic> json = {};
    if (edgeRouterAttributes != null)
      json['edgeRouterAttributes'] = edgeRouterAttributes;
    if (endpointAttributes != null)
      json['endpointAttributes'] = endpointAttributes;
    if (name != null)
      json['name'] = name;
    if (networkId != null)
      json['networkId'] = networkId;
    return json;
  }

  static List<InlineObject2> listFromJson(List<dynamic> json) {
    return json == null ? List<InlineObject2>() : json.map((value) => InlineObject2.fromJson(value)).toList();
  }

  static Map<String, InlineObject2> mapFromJson(Map<String, dynamic> json) {
    var map = Map<String, InlineObject2>();
    if (json != null && json.isNotEmpty) {
      json.forEach((String key, dynamic value) => map[key] = InlineObject2.fromJson(value));
    }
    return map;
  }

  // maps a json object with a list of InlineObject2-objects as value to a dart map
  static Map<String, List<InlineObject2>> mapListFromJson(Map<String, dynamic> json) {
    var map = Map<String, List<InlineObject2>>();
     if (json != null && json.isNotEmpty) {
       json.forEach((String key, dynamic value) {
         map[key] = InlineObject2.listFromJson(value);
       });
     }
     return map;
  }
}

