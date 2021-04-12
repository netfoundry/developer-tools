part of openapi.api;

class InlineResponse2001 {
  
  InlineResponse2001Embedded embedded = null;
  
  InlineResponse2001Links links = null;
  
  InlineResponse2001Page page = null;
  InlineResponse2001();

  @override
  String toString() {
    return 'InlineResponse2001[embedded=$embedded, links=$links, page=$page, ]';
  }

  InlineResponse2001.fromJson(Map<String, dynamic> json) {
    if (json == null) return;
    embedded = (json['_embedded'] == null) ?
      null :
      InlineResponse2001Embedded.fromJson(json['_embedded']);
    links = (json['_links'] == null) ?
      null :
      InlineResponse2001Links.fromJson(json['_links']);
    page = (json['page'] == null) ?
      null :
      InlineResponse2001Page.fromJson(json['page']);
  }

  Map<String, dynamic> toJson() {
    Map <String, dynamic> json = {};
    if (embedded != null)
      json['_embedded'] = embedded;
    if (links != null)
      json['_links'] = links;
    if (page != null)
      json['page'] = page;
    return json;
  }

  static List<InlineResponse2001> listFromJson(List<dynamic> json) {
    return json == null ? List<InlineResponse2001>() : json.map((value) => InlineResponse2001.fromJson(value)).toList();
  }

  static Map<String, InlineResponse2001> mapFromJson(Map<String, dynamic> json) {
    var map = Map<String, InlineResponse2001>();
    if (json != null && json.isNotEmpty) {
      json.forEach((String key, dynamic value) => map[key] = InlineResponse2001.fromJson(value));
    }
    return map;
  }

  // maps a json object with a list of InlineResponse2001-objects as value to a dart map
  static Map<String, List<InlineResponse2001>> mapListFromJson(Map<String, dynamic> json) {
    var map = Map<String, List<InlineResponse2001>>();
     if (json != null && json.isNotEmpty) {
       json.forEach((String key, dynamic value) {
         map[key] = InlineResponse2001.listFromJson(value);
       });
     }
     return map;
  }
}

