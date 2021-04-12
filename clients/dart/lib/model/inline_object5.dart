part of openapi.api;

class InlineObject5 {
  
  List<String> attributes = [];
  
  CoreV2EndpointsEnrollmentMethod enrollmentMethod = null;
  
  String name = null;
  
  String networkId = null;
  InlineObject5();

  @override
  String toString() {
    return 'InlineObject5[attributes=$attributes, enrollmentMethod=$enrollmentMethod, name=$name, networkId=$networkId, ]';
  }

  InlineObject5.fromJson(Map<String, dynamic> json) {
    if (json == null) return;
    attributes = (json['attributes'] == null) ?
      null :
      (json['attributes'] as List).cast<String>();
    enrollmentMethod = (json['enrollmentMethod'] == null) ?
      null :
      CoreV2EndpointsEnrollmentMethod.fromJson(json['enrollmentMethod']);
    name = json['name'];
    networkId = json['networkId'];
  }

  Map<String, dynamic> toJson() {
    Map <String, dynamic> json = {};
    if (attributes != null)
      json['attributes'] = attributes;
    if (enrollmentMethod != null)
      json['enrollmentMethod'] = enrollmentMethod;
    if (name != null)
      json['name'] = name;
    if (networkId != null)
      json['networkId'] = networkId;
    return json;
  }

  static List<InlineObject5> listFromJson(List<dynamic> json) {
    return json == null ? List<InlineObject5>() : json.map((value) => InlineObject5.fromJson(value)).toList();
  }

  static Map<String, InlineObject5> mapFromJson(Map<String, dynamic> json) {
    var map = Map<String, InlineObject5>();
    if (json != null && json.isNotEmpty) {
      json.forEach((String key, dynamic value) => map[key] = InlineObject5.fromJson(value));
    }
    return map;
  }

  // maps a json object with a list of InlineObject5-objects as value to a dart map
  static Map<String, List<InlineObject5>> mapListFromJson(Map<String, dynamic> json) {
    var map = Map<String, List<InlineObject5>>();
     if (json != null && json.isNotEmpty) {
       json.forEach((String key, dynamic value) {
         map[key] = InlineObject5.listFromJson(value);
       });
     }
     return map;
  }
}

