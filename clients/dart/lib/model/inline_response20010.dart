part of openapi.api;

class InlineResponse20010 {
  
  InlineResponse2002EmbeddedLinks links = null;
  
  InlineResponse2001Page page = null;
  InlineResponse20010();

  @override
  String toString() {
    return 'InlineResponse20010[links=$links, page=$page, ]';
  }

  InlineResponse20010.fromJson(Map<String, dynamic> json) {
    if (json == null) return;
    links = (json['_links'] == null) ?
      null :
      InlineResponse2002EmbeddedLinks.fromJson(json['_links']);
    page = (json['page'] == null) ?
      null :
      InlineResponse2001Page.fromJson(json['page']);
  }

  Map<String, dynamic> toJson() {
    Map <String, dynamic> json = {};
    if (links != null)
      json['_links'] = links;
    if (page != null)
      json['page'] = page;
    return json;
  }

  static List<InlineResponse20010> listFromJson(List<dynamic> json) {
    return json == null ? List<InlineResponse20010>() : json.map((value) => InlineResponse20010.fromJson(value)).toList();
  }

  static Map<String, InlineResponse20010> mapFromJson(Map<String, dynamic> json) {
    var map = Map<String, InlineResponse20010>();
    if (json != null && json.isNotEmpty) {
      json.forEach((String key, dynamic value) => map[key] = InlineResponse20010.fromJson(value));
    }
    return map;
  }

  // maps a json object with a list of InlineResponse20010-objects as value to a dart map
  static Map<String, List<InlineResponse20010>> mapListFromJson(Map<String, dynamic> json) {
    var map = Map<String, List<InlineResponse20010>>();
     if (json != null && json.isNotEmpty) {
       json.forEach((String key, dynamic value) {
         map[key] = InlineResponse20010.listFromJson(value);
       });
     }
     return map;
  }
}

