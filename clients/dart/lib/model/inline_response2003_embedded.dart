part of openapi.api;

class InlineResponse2003Embedded {
  
  List<InlineResponse2003EmbeddedServiceList> serviceList = [];
  InlineResponse2003Embedded();

  @override
  String toString() {
    return 'InlineResponse2003Embedded[serviceList=$serviceList, ]';
  }

  InlineResponse2003Embedded.fromJson(Map<String, dynamic> json) {
    if (json == null) return;
    serviceList = (json['serviceList'] == null) ?
      null :
      InlineResponse2003EmbeddedServiceList.listFromJson(json['serviceList']);
  }

  Map<String, dynamic> toJson() {
    Map <String, dynamic> json = {};
    if (serviceList != null)
      json['serviceList'] = serviceList;
    return json;
  }

  static List<InlineResponse2003Embedded> listFromJson(List<dynamic> json) {
    return json == null ? List<InlineResponse2003Embedded>() : json.map((value) => InlineResponse2003Embedded.fromJson(value)).toList();
  }

  static Map<String, InlineResponse2003Embedded> mapFromJson(Map<String, dynamic> json) {
    var map = Map<String, InlineResponse2003Embedded>();
    if (json != null && json.isNotEmpty) {
      json.forEach((String key, dynamic value) => map[key] = InlineResponse2003Embedded.fromJson(value));
    }
    return map;
  }

  // maps a json object with a list of InlineResponse2003Embedded-objects as value to a dart map
  static Map<String, List<InlineResponse2003Embedded>> mapListFromJson(Map<String, dynamic> json) {
    var map = Map<String, List<InlineResponse2003Embedded>>();
     if (json != null && json.isNotEmpty) {
       json.forEach((String key, dynamic value) {
         map[key] = InlineResponse2003Embedded.listFromJson(value);
       });
     }
     return map;
  }
}

