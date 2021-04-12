part of openapi.api;

class CoreV2ServicesModelServerEgress {
  
  String host = null;
  
  AnyType port = null;
  
  String protocol = null;
  CoreV2ServicesModelServerEgress();

  @override
  String toString() {
    return 'CoreV2ServicesModelServerEgress[host=$host, port=$port, protocol=$protocol, ]';
  }

  CoreV2ServicesModelServerEgress.fromJson(Map<String, dynamic> json) {
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

  static List<CoreV2ServicesModelServerEgress> listFromJson(List<dynamic> json) {
    return json == null ? List<CoreV2ServicesModelServerEgress>() : json.map((value) => CoreV2ServicesModelServerEgress.fromJson(value)).toList();
  }

  static Map<String, CoreV2ServicesModelServerEgress> mapFromJson(Map<String, dynamic> json) {
    var map = Map<String, CoreV2ServicesModelServerEgress>();
    if (json != null && json.isNotEmpty) {
      json.forEach((String key, dynamic value) => map[key] = CoreV2ServicesModelServerEgress.fromJson(value));
    }
    return map;
  }

  // maps a json object with a list of CoreV2ServicesModelServerEgress-objects as value to a dart map
  static Map<String, List<CoreV2ServicesModelServerEgress>> mapListFromJson(Map<String, dynamic> json) {
    var map = Map<String, List<CoreV2ServicesModelServerEgress>>();
     if (json != null && json.isNotEmpty) {
       json.forEach((String key, dynamic value) {
         map[key] = CoreV2ServicesModelServerEgress.listFromJson(value);
       });
     }
     return map;
  }
}

