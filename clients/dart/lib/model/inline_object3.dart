part of openapi.api;

class InlineObject3 {
  
  CoreV2ServicesServiceIdModel model = null;
  
  String modelType = null;
  
  String name = null;
  InlineObject3();

  @override
  String toString() {
    return 'InlineObject3[model=$model, modelType=$modelType, name=$name, ]';
  }

  InlineObject3.fromJson(Map<String, dynamic> json) {
    if (json == null) return;
    model = (json['model'] == null) ?
      null :
      CoreV2ServicesServiceIdModel.fromJson(json['model']);
    modelType = json['modelType'];
    name = json['name'];
  }

  Map<String, dynamic> toJson() {
    Map <String, dynamic> json = {};
    if (model != null)
      json['model'] = model;
    if (modelType != null)
      json['modelType'] = modelType;
    if (name != null)
      json['name'] = name;
    return json;
  }

  static List<InlineObject3> listFromJson(List<dynamic> json) {
    return json == null ? List<InlineObject3>() : json.map((value) => InlineObject3.fromJson(value)).toList();
  }

  static Map<String, InlineObject3> mapFromJson(Map<String, dynamic> json) {
    var map = Map<String, InlineObject3>();
    if (json != null && json.isNotEmpty) {
      json.forEach((String key, dynamic value) => map[key] = InlineObject3.fromJson(value));
    }
    return map;
  }

  // maps a json object with a list of InlineObject3-objects as value to a dart map
  static Map<String, List<InlineObject3>> mapListFromJson(Map<String, dynamic> json) {
    var map = Map<String, List<InlineObject3>>();
     if (json != null && json.isNotEmpty) {
       json.forEach((String key, dynamic value) {
         map[key] = InlineObject3.listFromJson(value);
       });
     }
     return map;
  }
}

