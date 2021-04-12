part of openapi.api;

class CoreV2ServicesServiceIdModelServerEgress {
  
  AnyType dialInterceptAddress = null;
  
  AnyType dialInterceptPort = null;
  
  num port = null;
  
  bool dialInterceptProtocol = null;
  
  String address = null;
  
  AnyType protocol = null;
  CoreV2ServicesServiceIdModelServerEgress();

  @override
  String toString() {
    return 'CoreV2ServicesServiceIdModelServerEgress[dialInterceptAddress=$dialInterceptAddress, dialInterceptPort=$dialInterceptPort, port=$port, dialInterceptProtocol=$dialInterceptProtocol, address=$address, protocol=$protocol, ]';
  }

  CoreV2ServicesServiceIdModelServerEgress.fromJson(Map<String, dynamic> json) {
    if (json == null) return;
    dialInterceptAddress = json['dialInterceptAddress'];
    dialInterceptPort = json['dialInterceptPort'];
    port = json['port'];
    dialInterceptProtocol = json['dialInterceptProtocol'];
    address = json['address'];
    protocol = json['protocol'];
  }

  Map<String, dynamic> toJson() {
    Map <String, dynamic> json = {};
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

  static List<CoreV2ServicesServiceIdModelServerEgress> listFromJson(List<dynamic> json) {
    return json == null ? List<CoreV2ServicesServiceIdModelServerEgress>() : json.map((value) => CoreV2ServicesServiceIdModelServerEgress.fromJson(value)).toList();
  }

  static Map<String, CoreV2ServicesServiceIdModelServerEgress> mapFromJson(Map<String, dynamic> json) {
    var map = Map<String, CoreV2ServicesServiceIdModelServerEgress>();
    if (json != null && json.isNotEmpty) {
      json.forEach((String key, dynamic value) => map[key] = CoreV2ServicesServiceIdModelServerEgress.fromJson(value));
    }
    return map;
  }

  // maps a json object with a list of CoreV2ServicesServiceIdModelServerEgress-objects as value to a dart map
  static Map<String, List<CoreV2ServicesServiceIdModelServerEgress>> mapListFromJson(Map<String, dynamic> json) {
    var map = Map<String, List<CoreV2ServicesServiceIdModelServerEgress>>();
     if (json != null && json.isNotEmpty) {
       json.forEach((String key, dynamic value) {
         map[key] = CoreV2ServicesServiceIdModelServerEgress.listFromJson(value);
       });
     }
     return map;
  }
}

