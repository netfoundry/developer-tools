part of openapi.api;

class InlineResponse20017Links {
  
  InlineResponse200LinksSelf first = null;
  
  InlineResponse200LinksSelf last = null;
  InlineResponse20017Links();

  @override
  String toString() {
    return 'InlineResponse20017Links[first=$first, last=$last, ]';
  }

  InlineResponse20017Links.fromJson(Map<String, dynamic> json) {
    if (json == null) return;
    first = (json['first'] == null) ?
      null :
      InlineResponse200LinksSelf.fromJson(json['first']);
    last = (json['last'] == null) ?
      null :
      InlineResponse200LinksSelf.fromJson(json['last']);
  }

  Map<String, dynamic> toJson() {
    Map <String, dynamic> json = {};
    if (first != null)
      json['first'] = first;
    if (last != null)
      json['last'] = last;
    return json;
  }

  static List<InlineResponse20017Links> listFromJson(List<dynamic> json) {
    return json == null ? List<InlineResponse20017Links>() : json.map((value) => InlineResponse20017Links.fromJson(value)).toList();
  }

  static Map<String, InlineResponse20017Links> mapFromJson(Map<String, dynamic> json) {
    var map = Map<String, InlineResponse20017Links>();
    if (json != null && json.isNotEmpty) {
      json.forEach((String key, dynamic value) => map[key] = InlineResponse20017Links.fromJson(value));
    }
    return map;
  }

  // maps a json object with a list of InlineResponse20017Links-objects as value to a dart map
  static Map<String, List<InlineResponse20017Links>> mapListFromJson(Map<String, dynamic> json) {
    var map = Map<String, List<InlineResponse20017Links>>();
     if (json != null && json.isNotEmpty) {
       json.forEach((String key, dynamic value) {
         map[key] = InlineResponse20017Links.listFromJson(value);
       });
     }
     return map;
  }
}

