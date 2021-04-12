part of openapi.api;

class InlineResponse200Links {
  
  InlineResponse200LinksNetwork network = null;
  
  InlineResponse200LinksSelf self = null;
  InlineResponse200Links();

  @override
  String toString() {
    return 'InlineResponse200Links[network=$network, self=$self, ]';
  }

  InlineResponse200Links.fromJson(Map<String, dynamic> json) {
    if (json == null) return;
    network = (json['network'] == null) ?
      null :
      InlineResponse200LinksNetwork.fromJson(json['network']);
    self = (json['self'] == null) ?
      null :
      InlineResponse200LinksSelf.fromJson(json['self']);
  }

  Map<String, dynamic> toJson() {
    Map <String, dynamic> json = {};
    if (network != null)
      json['network'] = network;
    if (self != null)
      json['self'] = self;
    return json;
  }

  static List<InlineResponse200Links> listFromJson(List<dynamic> json) {
    return json == null ? List<InlineResponse200Links>() : json.map((value) => InlineResponse200Links.fromJson(value)).toList();
  }

  static Map<String, InlineResponse200Links> mapFromJson(Map<String, dynamic> json) {
    var map = Map<String, InlineResponse200Links>();
    if (json != null && json.isNotEmpty) {
      json.forEach((String key, dynamic value) => map[key] = InlineResponse200Links.fromJson(value));
    }
    return map;
  }

  // maps a json object with a list of InlineResponse200Links-objects as value to a dart map
  static Map<String, List<InlineResponse200Links>> mapListFromJson(Map<String, dynamic> json) {
    var map = Map<String, List<InlineResponse200Links>>();
     if (json != null && json.isNotEmpty) {
       json.forEach((String key, dynamic value) {
         map[key] = InlineResponse200Links.listFromJson(value);
       });
     }
     return map;
  }
}

