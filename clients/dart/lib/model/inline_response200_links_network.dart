part of openapi.api;

class InlineResponse200LinksNetwork {
  
  String href = null;
  
  String profile = null;
  InlineResponse200LinksNetwork();

  @override
  String toString() {
    return 'InlineResponse200LinksNetwork[href=$href, profile=$profile, ]';
  }

  InlineResponse200LinksNetwork.fromJson(Map<String, dynamic> json) {
    if (json == null) return;
    href = json['href'];
    profile = json['profile'];
  }

  Map<String, dynamic> toJson() {
    Map <String, dynamic> json = {};
    if (href != null)
      json['href'] = href;
    if (profile != null)
      json['profile'] = profile;
    return json;
  }

  static List<InlineResponse200LinksNetwork> listFromJson(List<dynamic> json) {
    return json == null ? List<InlineResponse200LinksNetwork>() : json.map((value) => InlineResponse200LinksNetwork.fromJson(value)).toList();
  }

  static Map<String, InlineResponse200LinksNetwork> mapFromJson(Map<String, dynamic> json) {
    var map = Map<String, InlineResponse200LinksNetwork>();
    if (json != null && json.isNotEmpty) {
      json.forEach((String key, dynamic value) => map[key] = InlineResponse200LinksNetwork.fromJson(value));
    }
    return map;
  }

  // maps a json object with a list of InlineResponse200LinksNetwork-objects as value to a dart map
  static Map<String, List<InlineResponse200LinksNetwork>> mapListFromJson(Map<String, dynamic> json) {
    var map = Map<String, List<InlineResponse200LinksNetwork>>();
     if (json != null && json.isNotEmpty) {
       json.forEach((String key, dynamic value) {
         map[key] = InlineResponse200LinksNetwork.listFromJson(value);
       });
     }
     return map;
  }
}

