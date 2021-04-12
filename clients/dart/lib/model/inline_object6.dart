part of openapi.api;

class InlineObject6 {
  
  String networkId = null;
  
  String name = null;
  
  List<String> attributes = [];
  
  bool linkListener = null;
  
  String dataCenterId = null;
  InlineObject6();

  @override
  String toString() {
    return 'InlineObject6[networkId=$networkId, name=$name, attributes=$attributes, linkListener=$linkListener, dataCenterId=$dataCenterId, ]';
  }

  InlineObject6.fromJson(Map<String, dynamic> json) {
    if (json == null) return;
    networkId = json['networkId'];
    name = json['name'];
    attributes = (json['attributes'] == null) ?
      null :
      (json['attributes'] as List).cast<String>();
    linkListener = json['linkListener'];
    dataCenterId = json['dataCenterId'];
  }

  Map<String, dynamic> toJson() {
    Map <String, dynamic> json = {};
    if (networkId != null)
      json['networkId'] = networkId;
    if (name != null)
      json['name'] = name;
    if (attributes != null)
      json['attributes'] = attributes;
    if (linkListener != null)
      json['linkListener'] = linkListener;
    if (dataCenterId != null)
      json['dataCenterId'] = dataCenterId;
    return json;
  }

  static List<InlineObject6> listFromJson(List<dynamic> json) {
    return json == null ? List<InlineObject6>() : json.map((value) => InlineObject6.fromJson(value)).toList();
  }

  static Map<String, InlineObject6> mapFromJson(Map<String, dynamic> json) {
    var map = Map<String, InlineObject6>();
    if (json != null && json.isNotEmpty) {
      json.forEach((String key, dynamic value) => map[key] = InlineObject6.fromJson(value));
    }
    return map;
  }

  // maps a json object with a list of InlineObject6-objects as value to a dart map
  static Map<String, List<InlineObject6>> mapListFromJson(Map<String, dynamic> json) {
    var map = Map<String, List<InlineObject6>>();
     if (json != null && json.isNotEmpty) {
       json.forEach((String key, dynamic value) {
         map[key] = InlineObject6.listFromJson(value);
       });
     }
     return map;
  }
}

