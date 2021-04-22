part of openapi.api;

class InlineResponse2004 {
  
  InlineResponse2004Embedded embedded = null;
  
  InlineResponse2002EmbeddedLinks links = null;
  
  InlineResponse2001Page page = null;
  InlineResponse2004();

  @override
  String toString() {
    return 'InlineResponse2004[embedded=$embedded, links=$links, page=$page, ]';
  }

  InlineResponse2004.fromJson(Map<String, dynamic> json) {
    if (json == null) return;
    embedded = (json['_embedded'] == null) ?
      null :
      InlineResponse2004Embedded.fromJson(json['_embedded']);
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

  static List<InlineResponse2004> listFromJson(List<dynamic> json) {
    return json == null ? List<InlineResponse2004>() : json.map((value) => InlineResponse2004.fromJson(value)).toList();
  }

  static Map<String, InlineResponse2004> mapFromJson(Map<String, dynamic> json) {
    var map = Map<String, InlineResponse2004>();
    if (json != null && json.isNotEmpty) {
      json.forEach((String key, dynamic value) => map[key] = InlineResponse2004.fromJson(value));
    }
    return map;
  }

  // maps a json object with a list of InlineResponse2004-objects as value to a dart map
  static Map<String, List<InlineResponse2004>> mapListFromJson(Map<String, dynamic> json) {
    var map = Map<String, List<InlineResponse2004>>();
     if (json != null && json.isNotEmpty) {
       json.forEach((String key, dynamic value) {
         map[key] = InlineResponse2004.listFromJson(value);
       });
     }
     return map;
  }
}

