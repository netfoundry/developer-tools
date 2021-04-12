part of openapi.api;

class InlineResponse5001Status {
  
  num code = null;
  
  String label = null;
  InlineResponse5001Status();

  @override
  String toString() {
    return 'InlineResponse5001Status[code=$code, label=$label, ]';
  }

  InlineResponse5001Status.fromJson(Map<String, dynamic> json) {
    if (json == null) return;
    code = json['code'];
    label = json['label'];
  }

  Map<String, dynamic> toJson() {
    Map <String, dynamic> json = {};
    if (code != null)
      json['code'] = code;
    if (label != null)
      json['label'] = label;
    return json;
  }

  static List<InlineResponse5001Status> listFromJson(List<dynamic> json) {
    return json == null ? List<InlineResponse5001Status>() : json.map((value) => InlineResponse5001Status.fromJson(value)).toList();
  }

  static Map<String, InlineResponse5001Status> mapFromJson(Map<String, dynamic> json) {
    var map = Map<String, InlineResponse5001Status>();
    if (json != null && json.isNotEmpty) {
      json.forEach((String key, dynamic value) => map[key] = InlineResponse5001Status.fromJson(value));
    }
    return map;
  }

  // maps a json object with a list of InlineResponse5001Status-objects as value to a dart map
  static Map<String, List<InlineResponse5001Status>> mapListFromJson(Map<String, dynamic> json) {
    var map = Map<String, List<InlineResponse5001Status>>();
     if (json != null && json.isNotEmpty) {
       json.forEach((String key, dynamic value) {
         map[key] = InlineResponse5001Status.listFromJson(value);
       });
     }
     return map;
  }
}

