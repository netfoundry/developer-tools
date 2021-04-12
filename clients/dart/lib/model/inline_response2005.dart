part of openapi.api;

class InlineResponse2005 {
  
  AnyType deletedAt = null;
  
  String networkId = null;
  
  String name = null;
  
  String updatedAt = null;
  
  InlineResponse2003EmbeddedModel model = null;
  
  String zitiId = null;
  
  String ownerIdentityId = null;
  
  List<String> attributes = [];
  
  String modelType = null;
  
  String id = null;
  
  InlineResponse2005ConfigIdByConfigTypeId configIdByConfigTypeId = null;
  
  String createdAt = null;
  
  String createdBy = null;
  
  AnyType deletedBy = null;
  
  bool encryptionRequired = null;
  
  AnyType authority = null;
  
  InlineResponse200Links links = null;
  InlineResponse2005();

  @override
  String toString() {
    return 'InlineResponse2005[deletedAt=$deletedAt, networkId=$networkId, name=$name, updatedAt=$updatedAt, model=$model, zitiId=$zitiId, ownerIdentityId=$ownerIdentityId, attributes=$attributes, modelType=$modelType, id=$id, configIdByConfigTypeId=$configIdByConfigTypeId, createdAt=$createdAt, createdBy=$createdBy, deletedBy=$deletedBy, encryptionRequired=$encryptionRequired, authority=$authority, links=$links, ]';
  }

  InlineResponse2005.fromJson(Map<String, dynamic> json) {
    if (json == null) return;
    deletedAt = json['deletedAt'];
    networkId = json['networkId'];
    name = json['name'];
    updatedAt = json['updatedAt'];
    model = (json['model'] == null) ?
      null :
      InlineResponse2003EmbeddedModel.fromJson(json['model']);
    zitiId = json['zitiId'];
    ownerIdentityId = json['ownerIdentityId'];
    attributes = (json['attributes'] == null) ?
      null :
      (json['attributes'] as List).cast<String>();
    modelType = json['modelType'];
    id = json['id'];
    configIdByConfigTypeId = (json['configIdByConfigTypeId'] == null) ?
      null :
      InlineResponse2005ConfigIdByConfigTypeId.fromJson(json['configIdByConfigTypeId']);
    createdAt = json['createdAt'];
    createdBy = json['createdBy'];
    deletedBy = json['deletedBy'];
    encryptionRequired = json['encryptionRequired'];
    authority = json['authority'];
    links = (json['_links'] == null) ?
      null :
      InlineResponse200Links.fromJson(json['_links']);
  }

  Map<String, dynamic> toJson() {
    Map <String, dynamic> json = {};
    if (deletedAt != null)
      json['deletedAt'] = deletedAt;
    if (networkId != null)
      json['networkId'] = networkId;
    if (name != null)
      json['name'] = name;
    if (updatedAt != null)
      json['updatedAt'] = updatedAt;
    if (model != null)
      json['model'] = model;
    if (zitiId != null)
      json['zitiId'] = zitiId;
    if (ownerIdentityId != null)
      json['ownerIdentityId'] = ownerIdentityId;
    if (attributes != null)
      json['attributes'] = attributes;
    if (modelType != null)
      json['modelType'] = modelType;
    if (id != null)
      json['id'] = id;
    if (configIdByConfigTypeId != null)
      json['configIdByConfigTypeId'] = configIdByConfigTypeId;
    if (createdAt != null)
      json['createdAt'] = createdAt;
    if (createdBy != null)
      json['createdBy'] = createdBy;
    if (deletedBy != null)
      json['deletedBy'] = deletedBy;
    if (encryptionRequired != null)
      json['encryptionRequired'] = encryptionRequired;
    if (authority != null)
      json['authority'] = authority;
    if (links != null)
      json['_links'] = links;
    return json;
  }

  static List<InlineResponse2005> listFromJson(List<dynamic> json) {
    return json == null ? List<InlineResponse2005>() : json.map((value) => InlineResponse2005.fromJson(value)).toList();
  }

  static Map<String, InlineResponse2005> mapFromJson(Map<String, dynamic> json) {
    var map = Map<String, InlineResponse2005>();
    if (json != null && json.isNotEmpty) {
      json.forEach((String key, dynamic value) => map[key] = InlineResponse2005.fromJson(value));
    }
    return map;
  }

  // maps a json object with a list of InlineResponse2005-objects as value to a dart map
  static Map<String, List<InlineResponse2005>> mapListFromJson(Map<String, dynamic> json) {
    var map = Map<String, List<InlineResponse2005>>();
     if (json != null && json.isNotEmpty) {
       json.forEach((String key, dynamic value) {
         map[key] = InlineResponse2005.listFromJson(value);
       });
     }
     return map;
  }
}

