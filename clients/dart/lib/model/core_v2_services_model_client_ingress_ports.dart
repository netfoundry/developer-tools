part of openapi.api;

class CoreV2ServicesModelClientIngressPorts {
  
  String high = null;
  
  String low = null;
  CoreV2ServicesModelClientIngressPorts();

  @override
  String toString() {
    return 'CoreV2ServicesModelClientIngressPorts[high=$high, low=$low, ]';
  }

  CoreV2ServicesModelClientIngressPorts.fromJson(Map<String, dynamic> json) {
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

  static List<CoreV2ServicesModelClientIngressPorts> listFromJson(List<dynamic> json) {
    return json == null ? List<CoreV2ServicesModelClientIngressPorts>() : json.map((value) => CoreV2ServicesModelClientIngressPorts.fromJson(value)).toList();
  }

  static Map<String, CoreV2ServicesModelClientIngressPorts> mapFromJson(Map<String, dynamic> json) {
    var map = Map<String, CoreV2ServicesModelClientIngressPorts>();
    if (json != null && json.isNotEmpty) {
      json.forEach((String key, dynamic value) => map[key] = CoreV2ServicesModelClientIngressPorts.fromJson(value));
    }
    return map;
  }

  // maps a json object with a list of CoreV2ServicesModelClientIngressPorts-objects as value to a dart map
  static Map<String, List<CoreV2ServicesModelClientIngressPorts>> mapListFromJson(Map<String, dynamic> json) {
    var map = Map<String, List<CoreV2ServicesModelClientIngressPorts>>();
     if (json != null && json.isNotEmpty) {
       json.forEach((String key, dynamic value) {
         map[key] = CoreV2ServicesModelClientIngressPorts.listFromJson(value);
       });
     }
     return map;
  }
}

