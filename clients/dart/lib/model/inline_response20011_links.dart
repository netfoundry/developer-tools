part of openapi.api;

class InlineResponse20011Links {
  
  InlineResponse200LinksSelf azureSubscription = null;
  
  InlineResponse200LinksSelf networks = null;
  
  InlineResponse200LinksSelf self = null;
  InlineResponse20011Links();

  @override
  String toString() {
    return 'InlineResponse20011Links[azureSubscription=$azureSubscription, networks=$networks, self=$self, ]';
  }

  InlineResponse20011Links.fromJson(Map<String, dynamic> json) {
    if (json == null) return;
    azureSubscription = (json['azureSubscription'] == null) ?
      null :
      InlineResponse200LinksSelf.fromJson(json['azureSubscription']);
    networks = (json['networks'] == null) ?
      null :
      InlineResponse200LinksSelf.fromJson(json['networks']);
    self = (json['self'] == null) ?
      null :
      InlineResponse200LinksSelf.fromJson(json['self']);
  }

  Map<String, dynamic> toJson() {
    Map <String, dynamic> json = {};
    if (azureSubscription != null)
      json['azureSubscription'] = azureSubscription;
    if (networks != null)
      json['networks'] = networks;
    if (self != null)
      json['self'] = self;
    return json;
  }

  static List<InlineResponse20011Links> listFromJson(List<dynamic> json) {
    return json == null ? List<InlineResponse20011Links>() : json.map((value) => InlineResponse20011Links.fromJson(value)).toList();
  }

  static Map<String, InlineResponse20011Links> mapFromJson(Map<String, dynamic> json) {
    var map = Map<String, InlineResponse20011Links>();
    if (json != null && json.isNotEmpty) {
      json.forEach((String key, dynamic value) => map[key] = InlineResponse20011Links.fromJson(value));
    }
    return map;
  }

  // maps a json object with a list of InlineResponse20011Links-objects as value to a dart map
  static Map<String, List<InlineResponse20011Links>> mapListFromJson(Map<String, dynamic> json) {
    var map = Map<String, List<InlineResponse20011Links>>();
     if (json != null && json.isNotEmpty) {
       json.forEach((String key, dynamic value) {
         map[key] = InlineResponse20011Links.listFromJson(value);
       });
     }
     return map;
  }
}

