part of openapi.api;

class InlineResponse2003EmbeddedModelClientIngressPorts {
  
  num high = null;
  
  num low = null;
  InlineResponse2003EmbeddedModelClientIngressPorts();

  @override
  String toString() {
    return 'InlineResponse2003EmbeddedModelClientIngressPorts[high=$high, low=$low, ]';
  }

  InlineResponse2003EmbeddedModelClientIngressPorts.fromJson(Map<String, dynamic> json) {
    if (json == null) return;
    high = json['high'];
    low = json['low'];
  }

  Map<String, dynamic> toJson() {
    Map <String, dynamic> json = {};
    if (high != null)
      json['high'] = high;
    if (low != null)
      json['low'] = low;
    return json;
  }

  static List<InlineResponse2003EmbeddedModelClientIngressPorts> listFromJson(List<dynamic> json) {
    return json == null ? List<InlineResponse2003EmbeddedModelClientIngressPorts>() : json.map((value) => InlineResponse2003EmbeddedModelClientIngressPorts.fromJson(value)).toList();
  }

  static Map<String, InlineResponse2003EmbeddedModelClientIngressPorts> mapFromJson(Map<String, dynamic> json) {
    var map = Map<String, InlineResponse2003EmbeddedModelClientIngressPorts>();
    if (json != null && json.isNotEmpty) {
      json.forEach((String key, dynamic value) => map[key] = InlineResponse2003EmbeddedModelClientIngressPorts.fromJson(value));
    }
    return map;
  }

  // maps a json object with a list of InlineResponse2003EmbeddedModelClientIngressPorts-objects as value to a dart map
  static Map<String, List<InlineResponse2003EmbeddedModelClientIngressPorts>> mapListFromJson(Map<String, dynamic> json) {
    var map = Map<String, List<InlineResponse2003EmbeddedModelClientIngressPorts>>();
     if (json != null && json.isNotEmpty) {
       json.forEach((String key, dynamic value) {
         map[key] = InlineResponse2003EmbeddedModelClientIngressPorts.listFromJson(value);
       });
     }
     return map;
  }
}

