part of openapi.api;

class InlineResponse2002 {
  
  InlineResponse2002Embedded embedded = null;
  
  InlineResponse2002EmbeddedLinks links = null;
  
  InlineResponse2001Page page = null;
  InlineResponse2002();

  @override
  String toString() {
    return 'InlineResponse2002[embedded=$embedded, links=$links, page=$page, ]';
  }

  InlineResponse2002.fromJson(Map<String, dynamic> json) {
    if (json == null) return;
    embedded = (json['_embedded'] == null) ?
      null :
      InlineResponse2002Embedded.fromJson(json['_embedded']);
    links = (json['_links'] == null) ?
      null :
      InlineResponse2002EmbeddedLinks.fromJson(json['_links']);
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

  static List<InlineResponse2002> listFromJson(List<dynamic> json) {
    return json == null ? List<InlineResponse2002>() : json.map((value) => InlineResponse2002.fromJson(value)).toList();
  }

  static Map<String, InlineResponse2002> mapFromJson(Map<String, dynamic> json) {
    var map = Map<String, InlineResponse2002>();
    if (json != null && json.isNotEmpty) {
      json.forEach((String key, dynamic value) => map[key] = InlineResponse2002.fromJson(value));
    }
    return map;
  }

  // maps a json object with a list of InlineResponse2002-objects as value to a dart map
  static Map<String, List<InlineResponse2002>> mapListFromJson(Map<String, dynamic> json) {
    var map = Map<String, List<InlineResponse2002>>();
     if (json != null && json.isNotEmpty) {
       json.forEach((String key, dynamic value) {
         map[key] = InlineResponse2002.listFromJson(value);
       });
     }
     return map;
  }
}

