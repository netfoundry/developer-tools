part of openapi.api;

class InlineResponse2002Embedded {
  
  List<InlineResponse2002EmbeddedDataCenters> dataCenters = [];
  InlineResponse2002Embedded();

  @override
  String toString() {
    return 'InlineResponse2002Embedded[dataCenters=$dataCenters, ]';
  }

  InlineResponse2002Embedded.fromJson(Map<String, dynamic> json) {
    if (json == null) return;
    dataCenters = (json['dataCenters'] == null) ?
      null :
      InlineResponse2002EmbeddedDataCenters.listFromJson(json['dataCenters']);
  }

  Map<String, dynamic> toJson() {
    Map <String, dynamic> json = {};
    if (dataCenters != null)
      json['dataCenters'] = dataCenters;
    return json;
  }

  static List<InlineResponse2002Embedded> listFromJson(List<dynamic> json) {
    return json == null ? List<InlineResponse2002Embedded>() : json.map((value) => InlineResponse2002Embedded.fromJson(value)).toList();
  }

  static Map<String, InlineResponse2002Embedded> mapFromJson(Map<String, dynamic> json) {
    var map = Map<String, InlineResponse2002Embedded>();
    if (json != null && json.isNotEmpty) {
      json.forEach((String key, dynamic value) => map[key] = InlineResponse2002Embedded.fromJson(value));
    }
    return map;
  }

  // maps a json object with a list of InlineResponse2002Embedded-objects as value to a dart map
  static Map<String, List<InlineResponse2002Embedded>> mapListFromJson(Map<String, dynamic> json) {
    var map = Map<String, List<InlineResponse2002Embedded>>();
     if (json != null && json.isNotEmpty) {
       json.forEach((String key, dynamic value) {
         map[key] = InlineResponse2002Embedded.listFromJson(value);
       });
     }
     return map;
  }
}

