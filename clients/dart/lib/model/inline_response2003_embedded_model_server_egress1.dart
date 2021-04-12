part of openapi.api;

class InlineResponse2003EmbeddedModelServerEgress1 {
  
  String host = null;
  
  num port = null;
  
  String protocol = null;
  InlineResponse2003EmbeddedModelServerEgress1();

  @override
  String toString() {
    return 'InlineResponse2003EmbeddedModelServerEgress1[host=$host, port=$port, protocol=$protocol, ]';
  }

  InlineResponse2003EmbeddedModelServerEgress1.fromJson(Map<String, dynamic> json) {
    if (json == null) return;
    host = json['host'];
    port = json['port'];
    protocol = json['protocol'];
  }

  Map<String, dynamic> toJson() {
    Map <String, dynamic> json = {};
    if (host != null)
      json['host'] = host;
    if (port != null)
      json['port'] = port;
    if (protocol != null)
      json['protocol'] = protocol;
    return json;
  }

  static List<InlineResponse2003EmbeddedModelServerEgress1> listFromJson(List<dynamic> json) {
    return json == null ? List<InlineResponse2003EmbeddedModelServerEgress1>() : json.map((value) => InlineResponse2003EmbeddedModelServerEgress1.fromJson(value)).toList();
  }

  static Map<String, InlineResponse2003EmbeddedModelServerEgress1> mapFromJson(Map<String, dynamic> json) {
    var map = Map<String, InlineResponse2003EmbeddedModelServerEgress1>();
    if (json != null && json.isNotEmpty) {
      json.forEach((String key, dynamic value) => map[key] = InlineResponse2003EmbeddedModelServerEgress1.fromJson(value));
    }
    return map;
  }

  // maps a json object with a list of InlineResponse2003EmbeddedModelServerEgress1-objects as value to a dart map
  static Map<String, List<InlineResponse2003EmbeddedModelServerEgress1>> mapListFromJson(Map<String, dynamic> json) {
    var map = Map<String, List<InlineResponse2003EmbeddedModelServerEgress1>>();
     if (json != null && json.isNotEmpty) {
       json.forEach((String key, dynamic value) {
         map[key] = InlineResponse2003EmbeddedModelServerEgress1.listFromJson(value);
       });
     }
     return map;
  }
}

