part of openapi.api;

class InlineResponse2021ConfigIdByConfigTypeId {
  
  String n6fa5c2bcB7f747f89229E927722adb27 = null;
  
  String b1582680Ab7b45d0Ac36B00f82df8e79 = null;
  InlineResponse2021ConfigIdByConfigTypeId();

  @override
  String toString() {
    return 'InlineResponse2021ConfigIdByConfigTypeId[n6fa5c2bcB7f747f89229E927722adb27=$n6fa5c2bcB7f747f89229E927722adb27, b1582680Ab7b45d0Ac36B00f82df8e79=$b1582680Ab7b45d0Ac36B00f82df8e79, ]';
  }

  InlineResponse2021ConfigIdByConfigTypeId.fromJson(Map<String, dynamic> json) {
    if (json == null) return;
    n6fa5c2bcB7f747f89229E927722adb27 = json['6fa5c2bc-b7f7-47f8-9229-e927722adb27'];
    b1582680Ab7b45d0Ac36B00f82df8e79 = json['b1582680-ab7b-45d0-ac36-b00f82df8e79'];
  }

  Map<String, dynamic> toJson() {
    Map <String, dynamic> json = {};
    if (n6fa5c2bcB7f747f89229E927722adb27 != null)
      json['6fa5c2bc-b7f7-47f8-9229-e927722adb27'] = n6fa5c2bcB7f747f89229E927722adb27;
    if (b1582680Ab7b45d0Ac36B00f82df8e79 != null)
      json['b1582680-ab7b-45d0-ac36-b00f82df8e79'] = b1582680Ab7b45d0Ac36B00f82df8e79;
    return json;
  }

  static List<InlineResponse2021ConfigIdByConfigTypeId> listFromJson(List<dynamic> json) {
    return json == null ? List<InlineResponse2021ConfigIdByConfigTypeId>() : json.map((value) => InlineResponse2021ConfigIdByConfigTypeId.fromJson(value)).toList();
  }

  static Map<String, InlineResponse2021ConfigIdByConfigTypeId> mapFromJson(Map<String, dynamic> json) {
    var map = Map<String, InlineResponse2021ConfigIdByConfigTypeId>();
    if (json != null && json.isNotEmpty) {
      json.forEach((String key, dynamic value) => map[key] = InlineResponse2021ConfigIdByConfigTypeId.fromJson(value));
    }
    return map;
  }

  // maps a json object with a list of InlineResponse2021ConfigIdByConfigTypeId-objects as value to a dart map
  static Map<String, List<InlineResponse2021ConfigIdByConfigTypeId>> mapListFromJson(Map<String, dynamic> json) {
    var map = Map<String, List<InlineResponse2021ConfigIdByConfigTypeId>>();
     if (json != null && json.isNotEmpty) {
       json.forEach((String key, dynamic value) {
         map[key] = InlineResponse2021ConfigIdByConfigTypeId.listFromJson(value);
       });
     }
     return map;
  }
}

