part of openapi.api;

class InlineObject {
  
  String name = null;
  
  String size = null;
  
  String locationCode = null;
  
  String productVersion = null;
  
  String networkGroupId = null;
  InlineObject();

  @override
  String toString() {
    return 'InlineObject[name=$name, size=$size, locationCode=$locationCode, productVersion=$productVersion, networkGroupId=$networkGroupId, ]';
  }

  InlineObject.fromJson(Map<String, dynamic> json) {
    if (json == null) return;
    name = json['name'];
    size = json['size'];
    locationCode = json['locationCode'];
    productVersion = json['productVersion'];
    networkGroupId = json['networkGroupId'];
  }

  Map<String, dynamic> toJson() {
    Map <String, dynamic> json = {};
    if (name != null)
      json['name'] = name;
    if (size != null)
      json['size'] = size;
    if (locationCode != null)
      json['locationCode'] = locationCode;
    if (productVersion != null)
      json['productVersion'] = productVersion;
    if (networkGroupId != null)
      json['networkGroupId'] = networkGroupId;
    return json;
  }

  static List<InlineObject> listFromJson(List<dynamic> json) {
    return json == null ? List<InlineObject>() : json.map((value) => InlineObject.fromJson(value)).toList();
  }

  static Map<String, InlineObject> mapFromJson(Map<String, dynamic> json) {
    var map = Map<String, InlineObject>();
    if (json != null && json.isNotEmpty) {
      json.forEach((String key, dynamic value) => map[key] = InlineObject.fromJson(value));
    }
    return map;
  }

  // maps a json object with a list of InlineObject-objects as value to a dart map
  static Map<String, List<InlineObject>> mapListFromJson(Map<String, dynamic> json) {
    var map = Map<String, List<InlineObject>>();
     if (json != null && json.isNotEmpty) {
       json.forEach((String key, dynamic value) {
         map[key] = InlineObject.listFromJson(value);
       });
     }
     return map;
  }
}

