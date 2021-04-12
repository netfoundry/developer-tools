part of openapi.api;

class InlineResponse20014UpdatedAt {
  
  num epochSecond = null;
  
  num nano = null;
  InlineResponse20014UpdatedAt();

  @override
  String toString() {
    return 'InlineResponse20014UpdatedAt[epochSecond=$epochSecond, nano=$nano, ]';
  }

  InlineResponse20014UpdatedAt.fromJson(Map<String, dynamic> json) {
    if (json == null) return;
    epochSecond = json['epochSecond'];
    nano = json['nano'];
  }

  Map<String, dynamic> toJson() {
    Map <String, dynamic> json = {};
    if (epochSecond != null)
      json['epochSecond'] = epochSecond;
    if (nano != null)
      json['nano'] = nano;
    return json;
  }

  static List<InlineResponse20014UpdatedAt> listFromJson(List<dynamic> json) {
    return json == null ? List<InlineResponse20014UpdatedAt>() : json.map((value) => InlineResponse20014UpdatedAt.fromJson(value)).toList();
  }

  static Map<String, InlineResponse20014UpdatedAt> mapFromJson(Map<String, dynamic> json) {
    var map = Map<String, InlineResponse20014UpdatedAt>();
    if (json != null && json.isNotEmpty) {
      json.forEach((String key, dynamic value) => map[key] = InlineResponse20014UpdatedAt.fromJson(value));
    }
    return map;
  }

  // maps a json object with a list of InlineResponse20014UpdatedAt-objects as value to a dart map
  static Map<String, List<InlineResponse20014UpdatedAt>> mapListFromJson(Map<String, dynamic> json) {
    var map = Map<String, List<InlineResponse20014UpdatedAt>>();
     if (json != null && json.isNotEmpty) {
       json.forEach((String key, dynamic value) {
         map[key] = InlineResponse20014UpdatedAt.listFromJson(value);
       });
     }
     return map;
  }
}

