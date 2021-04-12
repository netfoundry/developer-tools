part of openapi.api;

class InlineResponse2022 {
  
  String deletedAt = null;
  
  String networkId = null;
  
  String name = null;
  
  String updatedAt = null;
  
  AnyType model = null;
  
  AnyType zitiId = null;
  
  String ownerIdentityId = null;
  
  AnyType attributes = null;
  
  String modelType = null;
  
  String id = null;
  
  InlineResponse2022ConfigIdByConfigTypeId configIdByConfigTypeId = null;
  
  String createdAt = null;
  
  String createdBy = null;
  
  String deletedBy = null;
  
  bool encryptionRequired = null;
  
  AnyType authority = null;
  
  InlineResponse2021Links links = null;
  InlineResponse2022();

  @override
  String toString() {
    return 'InlineResponse2022[deletedAt=$deletedAt, networkId=$networkId, name=$name, updatedAt=$updatedAt, model=$model, zitiId=$zitiId, ownerIdentityId=$ownerIdentityId, attributes=$attributes, modelType=$modelType, id=$id, configIdByConfigTypeId=$configIdByConfigTypeId, createdAt=$createdAt, createdBy=$createdBy, deletedBy=$deletedBy, encryptionRequired=$encryptionRequired, authority=$authority, links=$links, ]';
  }

  InlineResponse2022.fromJson(Map<String, dynamic> json) {
    if (json == null) return;
    deletedAt = json['deletedAt'];
    networkId = json['networkId'];
    name = json['name'];
    updatedAt = json['updatedAt'];
    model = json['model'];
    zitiId = json['zitiId'];
    ownerIdentityId = json['ownerIdentityId'];
    attributes = json['attributes'];
    modelType = json['modelType'];
    id = json['id'];
    configIdByConfigTypeId = (json['configIdByConfigTypeId'] == null) ?
      null :
      InlineResponse2022ConfigIdByConfigTypeId.fromJson(json['configIdByConfigTypeId']);
    createdAt = json['createdAt'];
    createdBy = json['createdBy'];
    deletedBy = json['deletedBy'];
    encryptionRequired = json['encryptionRequired'];
    authority = json['authority'];
    links = (json['_links'] == null) ?
      null :
      InlineResponse2021Links.fromJson(json['_links']);
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

  static List<InlineResponse2022> listFromJson(List<dynamic> json) {
    return json == null ? List<InlineResponse2022>() : json.map((value) => InlineResponse2022.fromJson(value)).toList();
  }

  static Map<String, InlineResponse2022> mapFromJson(Map<String, dynamic> json) {
    var map = Map<String, InlineResponse2022>();
    if (json != null && json.isNotEmpty) {
      json.forEach((String key, dynamic value) => map[key] = InlineResponse2022.fromJson(value));
    }
    return map;
  }

  // maps a json object with a list of InlineResponse2022-objects as value to a dart map
  static Map<String, List<InlineResponse2022>> mapListFromJson(Map<String, dynamic> json) {
    var map = Map<String, List<InlineResponse2022>>();
     if (json != null && json.isNotEmpty) {
       json.forEach((String key, dynamic value) {
         map[key] = InlineResponse2022.listFromJson(value);
       });
     }
     return map;
  }
}

