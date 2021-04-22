part of openapi.api;

class InlineResponse2021Links {
  
  InlineResponse200LinksNetwork network = null;
  
  InlineResponse200LinksNetwork process = null;
  
  InlineResponse200LinksSelf self = null;
  InlineResponse2021Links();

  @override
  String toString() {
    return 'InlineResponse2021Links[network=$network, process=$process, self=$self, ]';
  }

  InlineResponse2021Links.fromJson(Map<String, dynamic> json) {
    if (json == null) return;
    network = (json['network'] == null) ?
      null :
      InlineResponse200LinksNetwork.fromJson(json['network']);
    process = (json['process'] == null) ?
      null :
      InlineResponse200LinksNetwork.fromJson(json['process']);
    self = (json['self'] == null) ?
      null :
      InlineResponse200LinksSelf.fromJson(json['self']);
  }

  Map<String, dynamic> toJson() {
    Map <String, dynamic> json = {};
    if (network != null)
      json['network'] = network;
    if (process != null)
      json['process'] = process;
    if (self != null)
      json['self'] = self;
    return json;
  }

  static List<InlineResponse2021Links> listFromJson(List<dynamic> json) {
    return json == null ? List<InlineResponse2021Links>() : json.map((value) => InlineResponse2021Links.fromJson(value)).toList();
  }

  static Map<String, InlineResponse2021Links> mapFromJson(Map<String, dynamic> json) {
    var map = Map<String, InlineResponse2021Links>();
    if (json != null && json.isNotEmpty) {
      json.forEach((String key, dynamic value) => map[key] = InlineResponse2021Links.fromJson(value));
    }
    return map;
  }

  // maps a json object with a list of InlineResponse2021Links-objects as value to a dart map
  static Map<String, List<InlineResponse2021Links>> mapListFromJson(Map<String, dynamic> json) {
    var map = Map<String, List<InlineResponse2021Links>>();
     if (json != null && json.isNotEmpty) {
       json.forEach((String key, dynamic value) {
         map[key] = InlineResponse2021Links.listFromJson(value);
       });
     }
     return map;
  }
}

