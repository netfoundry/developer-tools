part of openapi.api;

class InlineResponse5001 {
  
  List<String> errors = [];
  
  InlineResponse5001Status status = null;
  
  String traceId = null;
  InlineResponse5001();

  @override
  String toString() {
    return 'InlineResponse5001[errors=$errors, status=$status, traceId=$traceId, ]';
  }

  InlineResponse5001.fromJson(Map<String, dynamic> json) {
    if (json == null) return;
    errors = (json['errors'] == null) ?
      null :
      (json['errors'] as List).cast<String>();
    status = (json['status'] == null) ?
      null :
      InlineResponse5001Status.fromJson(json['status']);
    traceId = json['traceId'];
  }

  Map<String, dynamic> toJson() {
    Map <String, dynamic> json = {};
    if (errors != null)
      json['errors'] = errors;
    if (status != null)
      json['status'] = status;
    if (traceId != null)
      json['traceId'] = traceId;
    return json;
  }

  static List<InlineResponse5001> listFromJson(List<dynamic> json) {
    return json == null ? List<InlineResponse5001>() : json.map((value) => InlineResponse5001.fromJson(value)).toList();
  }

  static Map<String, InlineResponse5001> mapFromJson(Map<String, dynamic> json) {
    var map = Map<String, InlineResponse5001>();
    if (json != null && json.isNotEmpty) {
      json.forEach((String key, dynamic value) => map[key] = InlineResponse5001.fromJson(value));
    }
    return map;
  }

  // maps a json object with a list of InlineResponse5001-objects as value to a dart map
  static Map<String, List<InlineResponse5001>> mapListFromJson(Map<String, dynamic> json) {
    var map = Map<String, List<InlineResponse5001>>();
     if (json != null && json.isNotEmpty) {
       json.forEach((String key, dynamic value) {
         map[key] = InlineResponse5001.listFromJson(value);
       });
     }
     return map;
  }
}

