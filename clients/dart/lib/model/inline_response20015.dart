part of openapi.api;

class InlineResponse20015 {
  
  InlineResponse20015Embedded embedded = null;
  
  InlineResponse2002EmbeddedLinks links = null;
  
  InlineResponse2001Page page = null;
  InlineResponse20015();

  @override
  String toString() {
    return 'InlineResponse20015[embedded=$embedded, links=$links, page=$page, ]';
  }

  InlineResponse20015.fromJson(Map<String, dynamic> json) {
    if (json == null) return;
    embedded = (json['_embedded'] == null) ?
      null :
      InlineResponse20015Embedded.fromJson(json['_embedded']);
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

  static List<InlineResponse20015> listFromJson(List<dynamic> json) {
    return json == null ? List<InlineResponse20015>() : json.map((value) => InlineResponse20015.fromJson(value)).toList();
  }

  static Map<String, InlineResponse20015> mapFromJson(Map<String, dynamic> json) {
    var map = Map<String, InlineResponse20015>();
    if (json != null && json.isNotEmpty) {
      json.forEach((String key, dynamic value) => map[key] = InlineResponse20015.fromJson(value));
    }
    return map;
  }

  // maps a json object with a list of InlineResponse20015-objects as value to a dart map
  static Map<String, List<InlineResponse20015>> mapListFromJson(Map<String, dynamic> json) {
    var map = Map<String, List<InlineResponse20015>>();
     if (json != null && json.isNotEmpty) {
       json.forEach((String key, dynamic value) {
         map[key] = InlineResponse20015.listFromJson(value);
       });
     }
     return map;
  }
}

