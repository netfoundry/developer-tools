part of openapi.api;

class CoreV2ServicesServiceIdModelClientIngress {
  
  List<String> addresses = [];
  
  List<CoreV2ServicesModelClientIngressPorts> ports = [];
  
  List<String> protocols = [];
  CoreV2ServicesServiceIdModelClientIngress();

  @override
  String toString() {
    return 'CoreV2ServicesServiceIdModelClientIngress[addresses=$addresses, ports=$ports, protocols=$protocols, ]';
  }

  CoreV2ServicesServiceIdModelClientIngress.fromJson(Map<String, dynamic> json) {
    if (json == null) return;
    addresses = (json['addresses'] == null) ?
      null :
      (json['addresses'] as List).cast<String>();
    ports = (json['ports'] == null) ?
      null :
      CoreV2ServicesModelClientIngressPorts.listFromJson(json['ports']);
    protocols = (json['protocols'] == null) ?
      null :
      (json['protocols'] as List).cast<String>();
  }

  Map<String, dynamic> toJson() {
    Map <String, dynamic> json = {};
    if (addresses != null)
      json['addresses'] = addresses;
    if (ports != null)
      json['ports'] = ports;
    if (protocols != null)
      json['protocols'] = protocols;
    return json;
  }

  static List<CoreV2ServicesServiceIdModelClientIngress> listFromJson(List<dynamic> json) {
    return json == null ? List<CoreV2ServicesServiceIdModelClientIngress>() : json.map((value) => CoreV2ServicesServiceIdModelClientIngress.fromJson(value)).toList();
  }

  static Map<String, CoreV2ServicesServiceIdModelClientIngress> mapFromJson(Map<String, dynamic> json) {
    var map = Map<String, CoreV2ServicesServiceIdModelClientIngress>();
    if (json != null && json.isNotEmpty) {
      json.forEach((String key, dynamic value) => map[key] = CoreV2ServicesServiceIdModelClientIngress.fromJson(value));
    }
    return map;
  }

  // maps a json object with a list of CoreV2ServicesServiceIdModelClientIngress-objects as value to a dart map
  static Map<String, List<CoreV2ServicesServiceIdModelClientIngress>> mapListFromJson(Map<String, dynamic> json) {
    var map = Map<String, List<CoreV2ServicesServiceIdModelClientIngress>>();
     if (json != null && json.isNotEmpty) {
       json.forEach((String key, dynamic value) {
         map[key] = CoreV2ServicesServiceIdModelClientIngress.listFromJson(value);
       });
     }
     return map;
  }
}

