part of openapi.api;

class InlineResponse2002EmbeddedLinks {
  
  InlineResponse200LinksSelf self = null;
  InlineResponse2002EmbeddedLinks();

  @override
  String toString() {
    return 'InlineResponse2002EmbeddedLinks[self=$self, ]';
  }

  InlineResponse2002EmbeddedLinks.fromJson(Map<String, dynamic> json) {
    if (json == null) return;
    self = (json['self'] == null) ?
      null :
      InlineResponse200LinksSelf.fromJson(json['self']);
  }

  Map<String, dynamic> toJson() {
    Map <String, dynamic> json = {};
    if (self != null)
      json['self'] = self;
    return json;
  }

  static List<InlineResponse2002EmbeddedLinks> listFromJson(List<dynamic> json) {
    return json == null ? List<InlineResponse2002EmbeddedLinks>() : json.map((value) => InlineResponse2002EmbeddedLinks.fromJson(value)).toList();
  }

  static Map<String, InlineResponse2002EmbeddedLinks> mapFromJson(Map<String, dynamic> json) {
    var map = Map<String, InlineResponse2002EmbeddedLinks>();
    if (json != null && json.isNotEmpty) {
      json.forEach((String key, dynamic value) => map[key] = InlineResponse2002EmbeddedLinks.fromJson(value));
    }
    return map;
  }

  // maps a json object with a list of InlineResponse2002EmbeddedLinks-objects as value to a dart map
  static Map<String, List<InlineResponse2002EmbeddedLinks>> mapListFromJson(Map<String, dynamic> json) {
    var map = Map<String, List<InlineResponse2002EmbeddedLinks>>();
     if (json != null && json.isNotEmpty) {
       json.forEach((String key, dynamic value) {
         map[key] = InlineResponse2002EmbeddedLinks.listFromJson(value);
       });
     }
     return map;
  }
}

