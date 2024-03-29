part of openapi.api;

class InlineResponse2023ConfigIdByConfigTypeId {
  
  String d75e27f0Ebab45678440C24f02f2eca5 = null;
  
  String cf3962b1A98e4adeAe25Cdc388e7feb3 = null;
  
  String n7cafedc517b84c1e8b6f0d9bc1b4b7bc = null;
  
  String n714a918a79354b4f82c3Afbadcd9e59b = null;
  
  String n64a39300B672413b9d8c42175f7e84dd = null;
  
  String ea6e632bD8e1420fBd8fAd50b067bad6 = null;
  InlineResponse2023ConfigIdByConfigTypeId();

  @override
  String toString() {
    return 'InlineResponse2023ConfigIdByConfigTypeId[d75e27f0Ebab45678440C24f02f2eca5=$d75e27f0Ebab45678440C24f02f2eca5, cf3962b1A98e4adeAe25Cdc388e7feb3=$cf3962b1A98e4adeAe25Cdc388e7feb3, n7cafedc517b84c1e8b6f0d9bc1b4b7bc=$n7cafedc517b84c1e8b6f0d9bc1b4b7bc, n714a918a79354b4f82c3Afbadcd9e59b=$n714a918a79354b4f82c3Afbadcd9e59b, n64a39300B672413b9d8c42175f7e84dd=$n64a39300B672413b9d8c42175f7e84dd, ea6e632bD8e1420fBd8fAd50b067bad6=$ea6e632bD8e1420fBd8fAd50b067bad6, ]';
  }

  InlineResponse2023ConfigIdByConfigTypeId.fromJson(Map<String, dynamic> json) {
    if (json == null) return;
    d75e27f0Ebab45678440C24f02f2eca5 = json['d75e27f0-ebab-4567-8440-c24f02f2eca5'];
    cf3962b1A98e4adeAe25Cdc388e7feb3 = json['cf3962b1-a98e-4ade-ae25-cdc388e7feb3'];
    n7cafedc517b84c1e8b6f0d9bc1b4b7bc = json['7cafedc5-17b8-4c1e-8b6f-0d9bc1b4b7bc'];
    n714a918a79354b4f82c3Afbadcd9e59b = json['714a918a-7935-4b4f-82c3-afbadcd9e59b'];
    n64a39300B672413b9d8c42175f7e84dd = json['64a39300-b672-413b-9d8c-42175f7e84dd'];
    ea6e632bD8e1420fBd8fAd50b067bad6 = json['ea6e632b-d8e1-420f-bd8f-ad50b067bad6'];
  }

  Map<String, dynamic> toJson() {
    Map <String, dynamic> json = {};
    if (d75e27f0Ebab45678440C24f02f2eca5 != null)
      json['d75e27f0-ebab-4567-8440-c24f02f2eca5'] = d75e27f0Ebab45678440C24f02f2eca5;
    if (cf3962b1A98e4adeAe25Cdc388e7feb3 != null)
      json['cf3962b1-a98e-4ade-ae25-cdc388e7feb3'] = cf3962b1A98e4adeAe25Cdc388e7feb3;
    if (n7cafedc517b84c1e8b6f0d9bc1b4b7bc != null)
      json['7cafedc5-17b8-4c1e-8b6f-0d9bc1b4b7bc'] = n7cafedc517b84c1e8b6f0d9bc1b4b7bc;
    if (n714a918a79354b4f82c3Afbadcd9e59b != null)
      json['714a918a-7935-4b4f-82c3-afbadcd9e59b'] = n714a918a79354b4f82c3Afbadcd9e59b;
    if (n64a39300B672413b9d8c42175f7e84dd != null)
      json['64a39300-b672-413b-9d8c-42175f7e84dd'] = n64a39300B672413b9d8c42175f7e84dd;
    if (ea6e632bD8e1420fBd8fAd50b067bad6 != null)
      json['ea6e632b-d8e1-420f-bd8f-ad50b067bad6'] = ea6e632bD8e1420fBd8fAd50b067bad6;
    return json;
  }

  static List<InlineResponse2023ConfigIdByConfigTypeId> listFromJson(List<dynamic> json) {
    return json == null ? List<InlineResponse2023ConfigIdByConfigTypeId>() : json.map((value) => InlineResponse2023ConfigIdByConfigTypeId.fromJson(value)).toList();
  }

  static Map<String, InlineResponse2023ConfigIdByConfigTypeId> mapFromJson(Map<String, dynamic> json) {
    var map = Map<String, InlineResponse2023ConfigIdByConfigTypeId>();
    if (json != null && json.isNotEmpty) {
      json.forEach((String key, dynamic value) => map[key] = InlineResponse2023ConfigIdByConfigTypeId.fromJson(value));
    }
    return map;
  }

  // maps a json object with a list of InlineResponse2023ConfigIdByConfigTypeId-objects as value to a dart map
  static Map<String, List<InlineResponse2023ConfigIdByConfigTypeId>> mapListFromJson(Map<String, dynamic> json) {
    var map = Map<String, List<InlineResponse2023ConfigIdByConfigTypeId>>();
     if (json != null && json.isNotEmpty) {
       json.forEach((String key, dynamic value) {
         map[key] = InlineResponse2023ConfigIdByConfigTypeId.listFromJson(value);
       });
     }
     return map;
  }
}

