part of openapi.api;

class InlineResponse2022ConfigIdByConfigTypeId {
  
  String aca7f7059f004ff68b8663a4d44bde8a = null;
  
  String n6cd51ae0Cfe4499d88d8D02a9e18b25f = null;
  
  String d28725c0977147d7A9daE408bd0adf4e = null;
  
  String n888d656543594d91B38d0a24124e4456 = null;
  
  String feb075cdDd2b47c5922c86ef3b06fb16 = null;
  InlineResponse2022ConfigIdByConfigTypeId();

  @override
  String toString() {
    return 'InlineResponse2022ConfigIdByConfigTypeId[aca7f7059f004ff68b8663a4d44bde8a=$aca7f7059f004ff68b8663a4d44bde8a, n6cd51ae0Cfe4499d88d8D02a9e18b25f=$n6cd51ae0Cfe4499d88d8D02a9e18b25f, d28725c0977147d7A9daE408bd0adf4e=$d28725c0977147d7A9daE408bd0adf4e, n888d656543594d91B38d0a24124e4456=$n888d656543594d91B38d0a24124e4456, feb075cdDd2b47c5922c86ef3b06fb16=$feb075cdDd2b47c5922c86ef3b06fb16, ]';
  }

  InlineResponse2022ConfigIdByConfigTypeId.fromJson(Map<String, dynamic> json) {
    if (json == null) return;
    aca7f7059f004ff68b8663a4d44bde8a = json['aca7f705-9f00-4ff6-8b86-63a4d44bde8a'];
    n6cd51ae0Cfe4499d88d8D02a9e18b25f = json['6cd51ae0-cfe4-499d-88d8-d02a9e18b25f'];
    d28725c0977147d7A9daE408bd0adf4e = json['d28725c0-9771-47d7-a9da-e408bd0adf4e'];
    n888d656543594d91B38d0a24124e4456 = json['888d6565-4359-4d91-b38d-0a24124e4456'];
    feb075cdDd2b47c5922c86ef3b06fb16 = json['feb075cd-dd2b-47c5-922c-86ef3b06fb16'];
  }

  Map<String, dynamic> toJson() {
    Map <String, dynamic> json = {};
    if (aca7f7059f004ff68b8663a4d44bde8a != null)
      json['aca7f705-9f00-4ff6-8b86-63a4d44bde8a'] = aca7f7059f004ff68b8663a4d44bde8a;
    if (n6cd51ae0Cfe4499d88d8D02a9e18b25f != null)
      json['6cd51ae0-cfe4-499d-88d8-d02a9e18b25f'] = n6cd51ae0Cfe4499d88d8D02a9e18b25f;
    if (d28725c0977147d7A9daE408bd0adf4e != null)
      json['d28725c0-9771-47d7-a9da-e408bd0adf4e'] = d28725c0977147d7A9daE408bd0adf4e;
    if (n888d656543594d91B38d0a24124e4456 != null)
      json['888d6565-4359-4d91-b38d-0a24124e4456'] = n888d656543594d91B38d0a24124e4456;
    if (feb075cdDd2b47c5922c86ef3b06fb16 != null)
      json['feb075cd-dd2b-47c5-922c-86ef3b06fb16'] = feb075cdDd2b47c5922c86ef3b06fb16;
    return json;
  }

  static List<InlineResponse2022ConfigIdByConfigTypeId> listFromJson(List<dynamic> json) {
    return json == null ? List<InlineResponse2022ConfigIdByConfigTypeId>() : json.map((value) => InlineResponse2022ConfigIdByConfigTypeId.fromJson(value)).toList();
  }

  static Map<String, InlineResponse2022ConfigIdByConfigTypeId> mapFromJson(Map<String, dynamic> json) {
    var map = Map<String, InlineResponse2022ConfigIdByConfigTypeId>();
    if (json != null && json.isNotEmpty) {
      json.forEach((String key, dynamic value) => map[key] = InlineResponse2022ConfigIdByConfigTypeId.fromJson(value));
    }
    return map;
  }

  // maps a json object with a list of InlineResponse2022ConfigIdByConfigTypeId-objects as value to a dart map
  static Map<String, List<InlineResponse2022ConfigIdByConfigTypeId>> mapListFromJson(Map<String, dynamic> json) {
    var map = Map<String, List<InlineResponse2022ConfigIdByConfigTypeId>>();
     if (json != null && json.isNotEmpty) {
       json.forEach((String key, dynamic value) {
         map[key] = InlineResponse2022ConfigIdByConfigTypeId.listFromJson(value);
       });
     }
     return map;
  }
}

