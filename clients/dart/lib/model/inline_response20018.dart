part of openapi.api;

class InlineResponse20018 {
  
  InlineResponse20018Embedded embedded = null;
  
  InlineResponse2002EmbeddedLinks links = null;
  
  InlineResponse2001Page page = null;
  InlineResponse20018();

  @override
  String toString() {
    return 'InlineResponse20018[embedded=$embedded, links=$links, page=$page, ]';
  }

  InlineResponse20018.fromJson(Map<String, dynamic> json) {
    if (json == null) return;
    embedded = (json['_embedded'] == null) ?
      null :
      InlineResponse20018Embedded.fromJson(json['_embedded']);
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

  static List<InlineResponse20018> listFromJson(List<dynamic> json) {
    return json == null ? List<InlineResponse20018>() : json.map((value) => InlineResponse20018.fromJson(value)).toList();
  }

  static Map<String, InlineResponse20018> mapFromJson(Map<String, dynamic> json) {
    var map = Map<String, InlineResponse20018>();
    if (json != null && json.isNotEmpty) {
      json.forEach((String key, dynamic value) => map[key] = InlineResponse20018.fromJson(value));
    }
    return map;
  }

  // maps a json object with a list of InlineResponse20018-objects as value to a dart map
  static Map<String, List<InlineResponse20018>> mapListFromJson(Map<String, dynamic> json) {
    var map = Map<String, List<InlineResponse20018>>();
     if (json != null && json.isNotEmpty) {
       json.forEach((String key, dynamic value) {
         map[key] = InlineResponse20018.listFromJson(value);
       });
     }
     return map;
  }
}

