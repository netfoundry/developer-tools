part of openapi.api;

class InlineResponse2001Embedded {
  
  List<InlineResponse2001EmbeddedNetworkList> networkList = [];
  InlineResponse2001Embedded();

  @override
  String toString() {
    return 'InlineResponse2001Embedded[networkList=$networkList, ]';
  }

  InlineResponse2001Embedded.fromJson(Map<String, dynamic> json) {
    if (json == null) return;
    networkList = (json['networkList'] == null) ?
      null :
      InlineResponse2001EmbeddedNetworkList.listFromJson(json['networkList']);
  }

  Map<String, dynamic> toJson() {
    Map <String, dynamic> json = {};
    if (networkList != null)
      json['networkList'] = networkList;
    return json;
  }

  static List<InlineResponse2001Embedded> listFromJson(List<dynamic> json) {
    return json == null ? List<InlineResponse2001Embedded>() : json.map((value) => InlineResponse2001Embedded.fromJson(value)).toList();
  }

  static Map<String, InlineResponse2001Embedded> mapFromJson(Map<String, dynamic> json) {
    var map = Map<String, InlineResponse2001Embedded>();
    if (json != null && json.isNotEmpty) {
      json.forEach((String key, dynamic value) => map[key] = InlineResponse2001Embedded.fromJson(value));
    }
    return map;
  }

  // maps a json object with a list of InlineResponse2001Embedded-objects as value to a dart map
  static Map<String, List<InlineResponse2001Embedded>> mapListFromJson(Map<String, dynamic> json) {
    var map = Map<String, List<InlineResponse2001Embedded>>();
     if (json != null && json.isNotEmpty) {
       json.forEach((String key, dynamic value) {
         map[key] = InlineResponse2001Embedded.listFromJson(value);
       });
     }
     return map;
  }
}

