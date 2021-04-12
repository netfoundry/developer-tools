part of openapi.api;

class InlineResponse2006Embedded {
  
  List<InlineResponse200> appWanList = [];
  InlineResponse2006Embedded();

  @override
  String toString() {
    return 'InlineResponse2006Embedded[appWanList=$appWanList, ]';
  }

  InlineResponse2006Embedded.fromJson(Map<String, dynamic> json) {
    if (json == null) return;
    appWanList = (json['appWanList'] == null) ?
      null :
      InlineResponse200.listFromJson(json['appWanList']);
  }

  Map<String, dynamic> toJson() {
    Map <String, dynamic> json = {};
    if (appWanList != null)
      json['appWanList'] = appWanList;
    return json;
  }

  static List<InlineResponse2006Embedded> listFromJson(List<dynamic> json) {
    return json == null ? List<InlineResponse2006Embedded>() : json.map((value) => InlineResponse2006Embedded.fromJson(value)).toList();
  }

  static Map<String, InlineResponse2006Embedded> mapFromJson(Map<String, dynamic> json) {
    var map = Map<String, InlineResponse2006Embedded>();
    if (json != null && json.isNotEmpty) {
      json.forEach((String key, dynamic value) => map[key] = InlineResponse2006Embedded.fromJson(value));
    }
    return map;
  }

  // maps a json object with a list of InlineResponse2006Embedded-objects as value to a dart map
  static Map<String, List<InlineResponse2006Embedded>> mapListFromJson(Map<String, dynamic> json) {
    var map = Map<String, List<InlineResponse2006Embedded>>();
     if (json != null && json.isNotEmpty) {
       json.forEach((String key, dynamic value) {
         map[key] = InlineResponse2006Embedded.listFromJson(value);
       });
     }
     return map;
  }
}

