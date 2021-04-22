part of openapi.api;

class InlineResponse2023ModelClientIngress {
  
  List<String> addresses = [];
  
  List<InlineResponse2003EmbeddedModelClientIngressPorts> ports = [];
  
  List<String> protocols = [];
  InlineResponse2023ModelClientIngress();

  @override
  String toString() {
    return 'InlineResponse2023ModelClientIngress[addresses=$addresses, ports=$ports, protocols=$protocols, ]';
  }

  InlineResponse2023ModelClientIngress.fromJson(Map<String, dynamic> json) {
    if (json == null) return;
    addresses = (json['addresses'] == null) ?
      null :
      (json['addresses'] as List).cast<String>();
    ports = (json['ports'] == null) ?
      null :
      InlineResponse2003EmbeddedModelClientIngressPorts.listFromJson(json['ports']);
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

  static List<InlineResponse2023ModelClientIngress> listFromJson(List<dynamic> json) {
    return json == null ? List<InlineResponse2023ModelClientIngress>() : json.map((value) => InlineResponse2023ModelClientIngress.fromJson(value)).toList();
  }

  static Map<String, InlineResponse2023ModelClientIngress> mapFromJson(Map<String, dynamic> json) {
    var map = Map<String, InlineResponse2023ModelClientIngress>();
    if (json != null && json.isNotEmpty) {
      json.forEach((String key, dynamic value) => map[key] = InlineResponse2023ModelClientIngress.fromJson(value));
    }
    return map;
  }

  // maps a json object with a list of InlineResponse2023ModelClientIngress-objects as value to a dart map
  static Map<String, List<InlineResponse2023ModelClientIngress>> mapListFromJson(Map<String, dynamic> json) {
    var map = Map<String, List<InlineResponse2023ModelClientIngress>>();
     if (json != null && json.isNotEmpty) {
       json.forEach((String key, dynamic value) {
         map[key] = InlineResponse2023ModelClientIngress.listFromJson(value);
       });
     }
     return map;
  }
}

