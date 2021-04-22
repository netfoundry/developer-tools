part of openapi.api;

class InlineResponse2021ConfigIdByConfigTypeId {
  
  String n6fa5c2bcB7f747f89229E927722adb27 = null;
  
  String n7491e52d97e847598a63C8ea8a75f822 = null;
  
  String b1582680Ab7b45d0Ac36B00f82df8e79 = null;
  
  String e7f6ef8dDa57444cB677F03974f5d8be = null;
  InlineResponse2021ConfigIdByConfigTypeId();

  @override
  String toString() {
    return 'InlineResponse2021ConfigIdByConfigTypeId[n6fa5c2bcB7f747f89229E927722adb27=$n6fa5c2bcB7f747f89229E927722adb27, n7491e52d97e847598a63C8ea8a75f822=$n7491e52d97e847598a63C8ea8a75f822, b1582680Ab7b45d0Ac36B00f82df8e79=$b1582680Ab7b45d0Ac36B00f82df8e79, e7f6ef8dDa57444cB677F03974f5d8be=$e7f6ef8dDa57444cB677F03974f5d8be, ]';
  }

  InlineResponse2021ConfigIdByConfigTypeId.fromJson(Map<String, dynamic> json) {
    if (json == null) return;
    n6fa5c2bcB7f747f89229E927722adb27 = json['6fa5c2bc-b7f7-47f8-9229-e927722adb27'];
    n7491e52d97e847598a63C8ea8a75f822 = json['7491e52d-97e8-4759-8a63-c8ea8a75f822'];
    b1582680Ab7b45d0Ac36B00f82df8e79 = json['b1582680-ab7b-45d0-ac36-b00f82df8e79'];
    e7f6ef8dDa57444cB677F03974f5d8be = json['e7f6ef8d-da57-444c-b677-f03974f5d8be'];
  }

  Map<String, dynamic> toJson() {
    Map <String, dynamic> json = {};
    if (n6fa5c2bcB7f747f89229E927722adb27 != null)
      json['6fa5c2bc-b7f7-47f8-9229-e927722adb27'] = n6fa5c2bcB7f747f89229E927722adb27;
    if (n7491e52d97e847598a63C8ea8a75f822 != null)
      json['7491e52d-97e8-4759-8a63-c8ea8a75f822'] = n7491e52d97e847598a63C8ea8a75f822;
    if (b1582680Ab7b45d0Ac36B00f82df8e79 != null)
      json['b1582680-ab7b-45d0-ac36-b00f82df8e79'] = b1582680Ab7b45d0Ac36B00f82df8e79;
    if (e7f6ef8dDa57444cB677F03974f5d8be != null)
      json['e7f6ef8d-da57-444c-b677-f03974f5d8be'] = e7f6ef8dDa57444cB677F03974f5d8be;
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

