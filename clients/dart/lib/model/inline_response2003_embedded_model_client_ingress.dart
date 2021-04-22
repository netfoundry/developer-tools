part of openapi.api;

class InlineResponse2003EmbeddedModelClientIngress {
  
  List<String> protocols = [];
  
  String host = null;
  
  List<InlineResponse2003EmbeddedModelClientIngressPorts> ports = [];
  
  num port = null;
  
  List<String> addresses = [];
  InlineResponse2003EmbeddedModelClientIngress();

  @override
  String toString() {
    return 'InlineResponse2003EmbeddedModelClientIngress[protocols=$protocols, host=$host, ports=$ports, port=$port, addresses=$addresses, ]';
  }

  InlineResponse2003EmbeddedModelClientIngress.fromJson(Map<String, dynamic> json) {
    if (json == null) return;
    protocols = (json['protocols'] == null) ?
      null :
      (json['protocols'] as List).cast<String>();
    host = json['host'];
    ports = (json['ports'] == null) ?
      null :
      InlineResponse2003EmbeddedModelClientIngressPorts.listFromJson(json['ports']);
    port = json['port'];
    addresses = (json['addresses'] == null) ?
      null :
      (json['addresses'] as List).cast<String>();
  }

  Map<String, dynamic> toJson() {
    Map <String, dynamic> json = {};
    if (protocols != null)
      json['protocols'] = protocols;
    if (host != null)
      json['host'] = host;
    if (ports != null)
      json['ports'] = ports;
    if (port != null)
      json['port'] = port;
    if (addresses != null)
      json['addresses'] = addresses;
    return json;
  }

  static List<InlineResponse2003EmbeddedModelClientIngress> listFromJson(List<dynamic> json) {
    return json == null ? List<InlineResponse2003EmbeddedModelClientIngress>() : json.map((value) => InlineResponse2003EmbeddedModelClientIngress.fromJson(value)).toList();
  }

  static Map<String, InlineResponse2003EmbeddedModelClientIngress> mapFromJson(Map<String, dynamic> json) {
    var map = Map<String, InlineResponse2003EmbeddedModelClientIngress>();
    if (json != null && json.isNotEmpty) {
      json.forEach((String key, dynamic value) => map[key] = InlineResponse2003EmbeddedModelClientIngress.fromJson(value));
    }
    return map;
  }

  // maps a json object with a list of InlineResponse2003EmbeddedModelClientIngress-objects as value to a dart map
  static Map<String, List<InlineResponse2003EmbeddedModelClientIngress>> mapListFromJson(Map<String, dynamic> json) {
    var map = Map<String, List<InlineResponse2003EmbeddedModelClientIngress>>();
     if (json != null && json.isNotEmpty) {
       json.forEach((String key, dynamic value) {
         map[key] = InlineResponse2003EmbeddedModelClientIngress.listFromJson(value);
       });
     }
     return map;
  }
}

