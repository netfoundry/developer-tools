part of openapi.api;

class InlineResponse200LinksSelf {
  
  String href = null;
  InlineResponse200LinksSelf();

  @override
  String toString() {
    return 'InlineResponse200LinksSelf[href=$href, ]';
  }

  InlineResponse200LinksSelf.fromJson(Map<String, dynamic> json) {
    if (json == null) return;
    href = json['href'];
  }

  Map<String, dynamic> toJson() {
    Map <String, dynamic> json = {};
    if (href != null)
      json['href'] = href;
    return json;
  }

  static List<InlineResponse200LinksSelf> listFromJson(List<dynamic> json) {
    return json == null ? List<InlineResponse200LinksSelf>() : json.map((value) => InlineResponse200LinksSelf.fromJson(value)).toList();
  }

  static Map<String, InlineResponse200LinksSelf> mapFromJson(Map<String, dynamic> json) {
    var map = Map<String, InlineResponse200LinksSelf>();
    if (json != null && json.isNotEmpty) {
      json.forEach((String key, dynamic value) => map[key] = InlineResponse200LinksSelf.fromJson(value));
    }
    return map;
  }

  // maps a json object with a list of InlineResponse200LinksSelf-objects as value to a dart map
  static Map<String, List<InlineResponse200LinksSelf>> mapListFromJson(Map<String, dynamic> json) {
    var map = Map<String, List<InlineResponse200LinksSelf>>();
     if (json != null && json.isNotEmpty) {
       json.forEach((String key, dynamic value) {
         map[key] = InlineResponse200LinksSelf.listFromJson(value);
       });
     }
     return map;
  }
}

