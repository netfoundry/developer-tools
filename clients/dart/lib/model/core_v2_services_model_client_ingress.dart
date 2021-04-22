part of openapi.api;

class CoreV2ServicesModelClientIngress {
  
  List<String> protocols = [];
  
  String host = null;
  
  List<CoreV2ServicesModelClientIngressPorts> ports = [];
  
  AnyType port = null;
  
  List<String> addresses = [];
  CoreV2ServicesModelClientIngress();

  @override
  String toString() {
    return 'CoreV2ServicesModelClientIngress[protocols=$protocols, host=$host, ports=$ports, port=$port, addresses=$addresses, ]';
  }

  CoreV2ServicesModelClientIngress.fromJson(Map<String, dynamic> json) {
    if (json == null) return;
    protocols = (json['protocols'] == null) ?
      null :
      (json['protocols'] as List).cast<String>();
    host = json['host'];
    ports = (json['ports'] == null) ?
      null :
      CoreV2ServicesModelClientIngressPorts.listFromJson(json['ports']);
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

  static List<CoreV2ServicesModelClientIngress> listFromJson(List<dynamic> json) {
    return json == null ? List<CoreV2ServicesModelClientIngress>() : json.map((value) => CoreV2ServicesModelClientIngress.fromJson(value)).toList();
  }

  static Map<String, CoreV2ServicesModelClientIngress> mapFromJson(Map<String, dynamic> json) {
    var map = Map<String, CoreV2ServicesModelClientIngress>();
    if (json != null && json.isNotEmpty) {
      json.forEach((String key, dynamic value) => map[key] = CoreV2ServicesModelClientIngress.fromJson(value));
    }
    return map;
  }

  // maps a json object with a list of CoreV2ServicesModelClientIngress-objects as value to a dart map
  static Map<String, List<CoreV2ServicesModelClientIngress>> mapListFromJson(Map<String, dynamic> json) {
    var map = Map<String, List<CoreV2ServicesModelClientIngress>>();
     if (json != null && json.isNotEmpty) {
       json.forEach((String key, dynamic value) {
         map[key] = CoreV2ServicesModelClientIngress.listFromJson(value);
       });
     }
     return map;
  }
}

