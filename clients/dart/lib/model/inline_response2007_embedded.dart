part of openapi.api;

class InlineResponse2007Embedded {
  
  List<InlineResponse2007EmbeddedEndpointList> endpointList = [];
  InlineResponse2007Embedded();

  @override
  String toString() {
    return 'InlineResponse2007Embedded[endpointList=$endpointList, ]';
  }

  InlineResponse2007Embedded.fromJson(Map<String, dynamic> json) {
    if (json == null) return;
    endpointList = (json['endpointList'] == null) ?
      null :
      InlineResponse2007EmbeddedEndpointList.listFromJson(json['endpointList']);
  }

  Map<String, dynamic> toJson() {
    Map <String, dynamic> json = {};
    if (endpointList != null)
      json['endpointList'] = endpointList;
    return json;
  }

  static List<InlineResponse2007Embedded> listFromJson(List<dynamic> json) {
    return json == null ? List<InlineResponse2007Embedded>() : json.map((value) => InlineResponse2007Embedded.fromJson(value)).toList();
  }

  static Map<String, InlineResponse2007Embedded> mapFromJson(Map<String, dynamic> json) {
    var map = Map<String, InlineResponse2007Embedded>();
    if (json != null && json.isNotEmpty) {
      json.forEach((String key, dynamic value) => map[key] = InlineResponse2007Embedded.fromJson(value));
    }
    return map;
  }

  // maps a json object with a list of InlineResponse2007Embedded-objects as value to a dart map
  static Map<String, List<InlineResponse2007Embedded>> mapListFromJson(Map<String, dynamic> json) {
    var map = Map<String, List<InlineResponse2007Embedded>>();
     if (json != null && json.isNotEmpty) {
       json.forEach((String key, dynamic value) {
         map[key] = InlineResponse2007Embedded.listFromJson(value);
       });
     }
     return map;
  }
}

