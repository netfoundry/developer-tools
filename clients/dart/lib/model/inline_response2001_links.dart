part of openapi.api;

class InlineResponse2001Links {
  
  InlineResponse2001LinksSelf self = null;
  InlineResponse2001Links();

  @override
  String toString() {
    return 'InlineResponse2001Links[self=$self, ]';
  }

  InlineResponse2001Links.fromJson(Map<String, dynamic> json) {
    if (json == null) return;
    self = (json['self'] == null) ?
      null :
      InlineResponse2001LinksSelf.fromJson(json['self']);
  }

  Map<String, dynamic> toJson() {
    Map <String, dynamic> json = {};
    if (self != null)
      json['self'] = self;
    return json;
  }

  static List<InlineResponse2001Links> listFromJson(List<dynamic> json) {
    return json == null ? List<InlineResponse2001Links>() : json.map((value) => InlineResponse2001Links.fromJson(value)).toList();
  }

  static Map<String, InlineResponse2001Links> mapFromJson(Map<String, dynamic> json) {
    var map = Map<String, InlineResponse2001Links>();
    if (json != null && json.isNotEmpty) {
      json.forEach((String key, dynamic value) => map[key] = InlineResponse2001Links.fromJson(value));
    }
    return map;
  }

  // maps a json object with a list of InlineResponse2001Links-objects as value to a dart map
  static Map<String, List<InlineResponse2001Links>> mapListFromJson(Map<String, dynamic> json) {
    var map = Map<String, List<InlineResponse2001Links>>();
     if (json != null && json.isNotEmpty) {
       json.forEach((String key, dynamic value) {
         map[key] = InlineResponse2001Links.listFromJson(value);
       });
     }
     return map;
  }
}

