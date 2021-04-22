part of openapi.api;

class InlineResponse20017 {
  
  InlineResponse20017Embedded embedded = null;
  
  InlineResponse20017Links links = null;
  
  InlineResponse2001Page page = null;
  InlineResponse20017();

  @override
  String toString() {
    return 'InlineResponse20017[embedded=$embedded, links=$links, page=$page, ]';
  }

  InlineResponse20017.fromJson(Map<String, dynamic> json) {
    if (json == null) return;
    embedded = (json['_embedded'] == null) ?
      null :
      InlineResponse20017Embedded.fromJson(json['_embedded']);
    links = (json['_links'] == null) ?
      null :
      InlineResponse20017Links.fromJson(json['_links']);
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

  static List<InlineResponse20017> listFromJson(List<dynamic> json) {
    return json == null ? List<InlineResponse20017>() : json.map((value) => InlineResponse20017.fromJson(value)).toList();
  }

  static Map<String, InlineResponse20017> mapFromJson(Map<String, dynamic> json) {
    var map = Map<String, InlineResponse20017>();
    if (json != null && json.isNotEmpty) {
      json.forEach((String key, dynamic value) => map[key] = InlineResponse20017.fromJson(value));
    }
    return map;
  }

  // maps a json object with a list of InlineResponse20017-objects as value to a dart map
  static Map<String, List<InlineResponse20017>> mapListFromJson(Map<String, dynamic> json) {
    var map = Map<String, List<InlineResponse20017>>();
     if (json != null && json.isNotEmpty) {
       json.forEach((String key, dynamic value) {
         map[key] = InlineResponse20017.listFromJson(value);
       });
     }
     return map;
  }
}

