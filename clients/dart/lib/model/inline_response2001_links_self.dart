part of openapi.api;

class InlineResponse2001LinksSelf {
  
  String href = null;
  
  bool templated = null;
  InlineResponse2001LinksSelf();

  @override
  String toString() {
    return 'InlineResponse2001LinksSelf[href=$href, templated=$templated, ]';
  }

  InlineResponse2001LinksSelf.fromJson(Map<String, dynamic> json) {
    if (json == null) return;
    href = json['href'];
    templated = json['templated'];
  }

  Map<String, dynamic> toJson() {
    Map <String, dynamic> json = {};
    if (href != null)
      json['href'] = href;
    if (templated != null)
      json['templated'] = templated;
    return json;
  }

  static List<InlineResponse2001LinksSelf> listFromJson(List<dynamic> json) {
    return json == null ? List<InlineResponse2001LinksSelf>() : json.map((value) => InlineResponse2001LinksSelf.fromJson(value)).toList();
  }

  static Map<String, InlineResponse2001LinksSelf> mapFromJson(Map<String, dynamic> json) {
    var map = Map<String, InlineResponse2001LinksSelf>();
    if (json != null && json.isNotEmpty) {
      json.forEach((String key, dynamic value) => map[key] = InlineResponse2001LinksSelf.fromJson(value));
    }
    return map;
  }

  // maps a json object with a list of InlineResponse2001LinksSelf-objects as value to a dart map
  static Map<String, List<InlineResponse2001LinksSelf>> mapListFromJson(Map<String, dynamic> json) {
    var map = Map<String, List<InlineResponse2001LinksSelf>>();
     if (json != null && json.isNotEmpty) {
       json.forEach((String key, dynamic value) {
         map[key] = InlineResponse2001LinksSelf.listFromJson(value);
       });
     }
     return map;
  }
}

