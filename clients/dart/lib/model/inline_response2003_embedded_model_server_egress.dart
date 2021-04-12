part of openapi.api;

class InlineResponse2003EmbeddedModelServerEgress {
  
  String host = null;
  
  AnyType dialInterceptAddress = null;
  
  AnyType dialInterceptPort = null;
  
  num port = null;
  
  bool dialInterceptProtocol = null;
  
  String address = null;
  
  AnyType protocol = null;
  InlineResponse2003EmbeddedModelServerEgress();

  @override
  String toString() {
    return 'InlineResponse2003EmbeddedModelServerEgress[host=$host, dialInterceptAddress=$dialInterceptAddress, dialInterceptPort=$dialInterceptPort, port=$port, dialInterceptProtocol=$dialInterceptProtocol, address=$address, protocol=$protocol, ]';
  }

  InlineResponse2003EmbeddedModelServerEgress.fromJson(Map<String, dynamic> json) {
    if (json == null) return;
    host = json['host'];
    dialInterceptAddress = json['dialInterceptAddress'];
    dialInterceptPort = json['dialInterceptPort'];
    port = json['port'];
    dialInterceptProtocol = json['dialInterceptProtocol'];
    address = json['address'];
    protocol = json['protocol'];
  }

  Map<String, dynamic> toJson() {
    Map <String, dynamic> json = {};
    if (host != null)
      json['host'] = host;
    if (dialInterceptAddress != null)
      json['dialInterceptAddress'] = dialInterceptAddress;
    if (dialInterceptPort != null)
      json['dialInterceptPort'] = dialInterceptPort;
    if (port != null)
      json['port'] = port;
    if (dialInterceptProtocol != null)
      json['dialInterceptProtocol'] = dialInterceptProtocol;
    if (address != null)
      json['address'] = address;
    if (protocol != null)
      json['protocol'] = protocol;
    return json;
  }

  static List<InlineResponse2003EmbeddedModelServerEgress> listFromJson(List<dynamic> json) {
    return json == null ? List<InlineResponse2003EmbeddedModelServerEgress>() : json.map((value) => InlineResponse2003EmbeddedModelServerEgress.fromJson(value)).toList();
  }

  static Map<String, InlineResponse2003EmbeddedModelServerEgress> mapFromJson(Map<String, dynamic> json) {
    var map = Map<String, InlineResponse2003EmbeddedModelServerEgress>();
    if (json != null && json.isNotEmpty) {
      json.forEach((String key, dynamic value) => map[key] = InlineResponse2003EmbeddedModelServerEgress.fromJson(value));
    }
    return map;
  }

  // maps a json object with a list of InlineResponse2003EmbeddedModelServerEgress-objects as value to a dart map
  static Map<String, List<InlineResponse2003EmbeddedModelServerEgress>> mapListFromJson(Map<String, dynamic> json) {
    var map = Map<String, List<InlineResponse2003EmbeddedModelServerEgress>>();
     if (json != null && json.isNotEmpty) {
       json.forEach((String key, dynamic value) {
         map[key] = InlineResponse2003EmbeddedModelServerEgress.listFromJson(value);
       });
     }
     return map;
  }
}

