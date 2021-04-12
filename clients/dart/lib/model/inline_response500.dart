part of openapi.api;

class InlineResponse500 {
  
  String error = null;
  
  String message = null;
  
  num status = null;
  
  String timestamp = null;
  InlineResponse500();

  @override
  String toString() {
    return 'InlineResponse500[error=$error, message=$message, status=$status, timestamp=$timestamp, ]';
  }

  InlineResponse500.fromJson(Map<String, dynamic> json) {
    if (json == null) return;
    error = json['error'];
    message = json['message'];
    status = json['status'];
    timestamp = json['timestamp'];
  }

  Map<String, dynamic> toJson() {
    Map <String, dynamic> json = {};
    if (error != null)
      json['error'] = error;
    if (message != null)
      json['message'] = message;
    if (status != null)
      json['status'] = status;
    if (timestamp != null)
      json['timestamp'] = timestamp;
    return json;
  }

  static List<InlineResponse500> listFromJson(List<dynamic> json) {
    return json == null ? List<InlineResponse500>() : json.map((value) => InlineResponse500.fromJson(value)).toList();
  }

  static Map<String, InlineResponse500> mapFromJson(Map<String, dynamic> json) {
    var map = Map<String, InlineResponse500>();
    if (json != null && json.isNotEmpty) {
      json.forEach((String key, dynamic value) => map[key] = InlineResponse500.fromJson(value));
    }
    return map;
  }

  // maps a json object with a list of InlineResponse500-objects as value to a dart map
  static Map<String, List<InlineResponse500>> mapListFromJson(Map<String, dynamic> json) {
    var map = Map<String, List<InlineResponse500>>();
     if (json != null && json.isNotEmpty) {
       json.forEach((String key, dynamic value) {
         map[key] = InlineResponse500.listFromJson(value);
       });
     }
     return map;
  }
}

