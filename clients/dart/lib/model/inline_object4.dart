part of openapi.api;

class InlineObject4 {
  
  List<String> serviceAttributes = [];
  
  String networkId = null;
  
  String name = null;
  
  List<AnyType> postureCheckAttributes = [];
  
  List<String> endpointAttributes = [];
  InlineObject4();

  @override
  String toString() {
    return 'InlineObject4[serviceAttributes=$serviceAttributes, networkId=$networkId, name=$name, postureCheckAttributes=$postureCheckAttributes, endpointAttributes=$endpointAttributes, ]';
  }

  InlineObject4.fromJson(Map<String, dynamic> json) {
    if (json == null) return;
    serviceAttributes = (json['serviceAttributes'] == null) ?
      null :
      (json['serviceAttributes'] as List).cast<String>();
    networkId = json['networkId'];
    name = json['name'];
    postureCheckAttributes = (json['postureCheckAttributes'] == null) ?
      null :
      AnyType.listFromJson(json['postureCheckAttributes']);
    endpointAttributes = (json['endpointAttributes'] == null) ?
      null :
      (json['endpointAttributes'] as List).cast<String>();
  }

  Map<String, dynamic> toJson() {
    Map <String, dynamic> json = {};
    if (serviceAttributes != null)
      json['serviceAttributes'] = serviceAttributes;
    if (networkId != null)
      json['networkId'] = networkId;
    if (name != null)
      json['name'] = name;
    if (postureCheckAttributes != null)
      json['postureCheckAttributes'] = postureCheckAttributes;
    if (endpointAttributes != null)
      json['endpointAttributes'] = endpointAttributes;
    return json;
  }

  static List<InlineObject4> listFromJson(List<dynamic> json) {
    return json == null ? List<InlineObject4>() : json.map((value) => InlineObject4.fromJson(value)).toList();
  }

  static Map<String, InlineObject4> mapFromJson(Map<String, dynamic> json) {
    var map = Map<String, InlineObject4>();
    if (json != null && json.isNotEmpty) {
      json.forEach((String key, dynamic value) => map[key] = InlineObject4.fromJson(value));
    }
    return map;
  }

  // maps a json object with a list of InlineObject4-objects as value to a dart map
  static Map<String, List<InlineObject4>> mapListFromJson(Map<String, dynamic> json) {
    var map = Map<String, List<InlineObject4>>();
     if (json != null && json.isNotEmpty) {
       json.forEach((String key, dynamic value) {
         map[key] = InlineObject4.listFromJson(value);
       });
     }
     return map;
  }
}

