part of openapi.api;

class InlineResponse20017Embedded {
  
  List<InlineResponse20017EmbeddedOrganizations> organizations = [];
  InlineResponse20017Embedded();

  @override
  String toString() {
    return 'InlineResponse20017Embedded[organizations=$organizations, ]';
  }

  InlineResponse20017Embedded.fromJson(Map<String, dynamic> json) {
    if (json == null) return;
    organizations = (json['organizations'] == null) ?
      null :
      InlineResponse20017EmbeddedOrganizations.listFromJson(json['organizations']);
  }

  Map<String, dynamic> toJson() {
    Map <String, dynamic> json = {};
    if (organizations != null)
      json['organizations'] = organizations;
    return json;
  }

  static List<InlineResponse20017Embedded> listFromJson(List<dynamic> json) {
    return json == null ? List<InlineResponse20017Embedded>() : json.map((value) => InlineResponse20017Embedded.fromJson(value)).toList();
  }

  static Map<String, InlineResponse20017Embedded> mapFromJson(Map<String, dynamic> json) {
    var map = Map<String, InlineResponse20017Embedded>();
    if (json != null && json.isNotEmpty) {
      json.forEach((String key, dynamic value) => map[key] = InlineResponse20017Embedded.fromJson(value));
    }
    return map;
  }

  // maps a json object with a list of InlineResponse20017Embedded-objects as value to a dart map
  static Map<String, List<InlineResponse20017Embedded>> mapListFromJson(Map<String, dynamic> json) {
    var map = Map<String, List<InlineResponse20017Embedded>>();
     if (json != null && json.isNotEmpty) {
       json.forEach((String key, dynamic value) {
         map[key] = InlineResponse20017Embedded.listFromJson(value);
       });
     }
     return map;
  }
}

