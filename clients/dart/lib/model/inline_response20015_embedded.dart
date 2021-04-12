part of openapi.api;

class InlineResponse20015Embedded {
  
  List<InlineResponse20015EmbeddedNetworkConfigMetadataList> networkConfigMetadataList = [];
  InlineResponse20015Embedded();

  @override
  String toString() {
    return 'InlineResponse20015Embedded[networkConfigMetadataList=$networkConfigMetadataList, ]';
  }

  InlineResponse20015Embedded.fromJson(Map<String, dynamic> json) {
    if (json == null) return;
    networkConfigMetadataList = (json['networkConfigMetadataList'] == null) ?
      null :
      InlineResponse20015EmbeddedNetworkConfigMetadataList.listFromJson(json['networkConfigMetadataList']);
  }

  Map<String, dynamic> toJson() {
    Map <String, dynamic> json = {};
    if (networkConfigMetadataList != null)
      json['networkConfigMetadataList'] = networkConfigMetadataList;
    return json;
  }

  static List<InlineResponse20015Embedded> listFromJson(List<dynamic> json) {
    return json == null ? List<InlineResponse20015Embedded>() : json.map((value) => InlineResponse20015Embedded.fromJson(value)).toList();
  }

  static Map<String, InlineResponse20015Embedded> mapFromJson(Map<String, dynamic> json) {
    var map = Map<String, InlineResponse20015Embedded>();
    if (json != null && json.isNotEmpty) {
      json.forEach((String key, dynamic value) => map[key] = InlineResponse20015Embedded.fromJson(value));
    }
    return map;
  }

  // maps a json object with a list of InlineResponse20015Embedded-objects as value to a dart map
  static Map<String, List<InlineResponse20015Embedded>> mapListFromJson(Map<String, dynamic> json) {
    var map = Map<String, List<InlineResponse20015Embedded>>();
     if (json != null && json.isNotEmpty) {
       json.forEach((String key, dynamic value) {
         map[key] = InlineResponse20015Embedded.listFromJson(value);
       });
     }
     return map;
  }
}

