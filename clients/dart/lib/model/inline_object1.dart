part of openapi.api;

class InlineObject1 {
  
  String networkId = null;
  
  String name = null;
  
  CoreV2ServicesModel model = null;
  
  List<String> attributes = [];
  
  String modelType = null;
  
  bool encryptionRequired = null;
  InlineObject1();

  @override
  String toString() {
    return 'InlineObject1[networkId=$networkId, name=$name, model=$model, attributes=$attributes, modelType=$modelType, encryptionRequired=$encryptionRequired, ]';
  }

  InlineObject1.fromJson(Map<String, dynamic> json) {
    if (json == null) return;
    networkId = json['networkId'];
    name = json['name'];
    model = (json['model'] == null) ?
      null :
      CoreV2ServicesModel.fromJson(json['model']);
    attributes = (json['attributes'] == null) ?
      null :
      (json['attributes'] as List).cast<String>();
    modelType = json['modelType'];
    encryptionRequired = json['encryptionRequired'];
  }

  Map<String, dynamic> toJson() {
    Map <String, dynamic> json = {};
    if (networkId != null)
      json['networkId'] = networkId;
    if (name != null)
      json['name'] = name;
    if (model != null)
      json['model'] = model;
    if (attributes != null)
      json['attributes'] = attributes;
    if (modelType != null)
      json['modelType'] = modelType;
    if (encryptionRequired != null)
      json['encryptionRequired'] = encryptionRequired;
    return json;
  }

  static List<InlineObject1> listFromJson(List<dynamic> json) {
    return json == null ? List<InlineObject1>() : json.map((value) => InlineObject1.fromJson(value)).toList();
  }

  static Map<String, InlineObject1> mapFromJson(Map<String, dynamic> json) {
    var map = Map<String, InlineObject1>();
    if (json != null && json.isNotEmpty) {
      json.forEach((String key, dynamic value) => map[key] = InlineObject1.fromJson(value));
    }
    return map;
  }

  // maps a json object with a list of InlineObject1-objects as value to a dart map
  static Map<String, List<InlineObject1>> mapListFromJson(Map<String, dynamic> json) {
    var map = Map<String, List<InlineObject1>>();
     if (json != null && json.isNotEmpty) {
       json.forEach((String key, dynamic value) {
         map[key] = InlineObject1.listFromJson(value);
       });
     }
     return map;
  }
}

