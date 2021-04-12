part of openapi.api;

class InlineResponse2024 {
  
  AnyType deletedAt = null;
  
  String name = null;
  
  String updatedAt = null;
  
  String size = null;
  
  String ownerIdentityId = null;
  
  String productVersion = null;
  
  String networkGroupId = null;
  
  String id = null;
  
  String status = null;
  
  String createdAt = null;
  
  String createdBy = null;
  
  AnyType deletedBy = null;
  
  InlineResponse2024NetworkController networkController = null;
  
  String o365BreakoutCategory = null;
  
  InlineResponse2024Links links = null;
  InlineResponse2024();

  @override
  String toString() {
    return 'InlineResponse2024[deletedAt=$deletedAt, name=$name, updatedAt=$updatedAt, size=$size, ownerIdentityId=$ownerIdentityId, productVersion=$productVersion, networkGroupId=$networkGroupId, id=$id, status=$status, createdAt=$createdAt, createdBy=$createdBy, deletedBy=$deletedBy, networkController=$networkController, o365BreakoutCategory=$o365BreakoutCategory, links=$links, ]';
  }

  InlineResponse2024.fromJson(Map<String, dynamic> json) {
    if (json == null) return;
    deletedAt = json['deletedAt'];
    name = json['name'];
    updatedAt = json['updatedAt'];
    size = json['size'];
    ownerIdentityId = json['ownerIdentityId'];
    productVersion = json['productVersion'];
    networkGroupId = json['networkGroupId'];
    id = json['id'];
    status = json['status'];
    createdAt = json['createdAt'];
    createdBy = json['createdBy'];
    deletedBy = json['deletedBy'];
    networkController = (json['networkController'] == null) ?
      null :
      InlineResponse2024NetworkController.fromJson(json['networkController']);
    o365BreakoutCategory = json['o365BreakoutCategory'];
    links = (json['_links'] == null) ?
      null :
      InlineResponse2024Links.fromJson(json['_links']);
  }

  Map<String, dynamic> toJson() {
    Map <String, dynamic> json = {};
    if (deletedAt != null)
      json['deletedAt'] = deletedAt;
    if (name != null)
      json['name'] = name;
    if (updatedAt != null)
      json['updatedAt'] = updatedAt;
    if (size != null)
      json['size'] = size;
    if (ownerIdentityId != null)
      json['ownerIdentityId'] = ownerIdentityId;
    if (productVersion != null)
      json['productVersion'] = productVersion;
    if (networkGroupId != null)
      json['networkGroupId'] = networkGroupId;
    if (id != null)
      json['id'] = id;
    if (status != null)
      json['status'] = status;
    if (createdAt != null)
      json['createdAt'] = createdAt;
    if (createdBy != null)
      json['createdBy'] = createdBy;
    if (deletedBy != null)
      json['deletedBy'] = deletedBy;
    if (networkController != null)
      json['networkController'] = networkController;
    if (o365BreakoutCategory != null)
      json['o365BreakoutCategory'] = o365BreakoutCategory;
    if (links != null)
      json['_links'] = links;
    return json;
  }

  static List<InlineResponse2024> listFromJson(List<dynamic> json) {
    return json == null ? List<InlineResponse2024>() : json.map((value) => InlineResponse2024.fromJson(value)).toList();
  }

  static Map<String, InlineResponse2024> mapFromJson(Map<String, dynamic> json) {
    var map = Map<String, InlineResponse2024>();
    if (json != null && json.isNotEmpty) {
      json.forEach((String key, dynamic value) => map[key] = InlineResponse2024.fromJson(value));
    }
    return map;
  }

  // maps a json object with a list of InlineResponse2024-objects as value to a dart map
  static Map<String, List<InlineResponse2024>> mapListFromJson(Map<String, dynamic> json) {
    var map = Map<String, List<InlineResponse2024>>();
     if (json != null && json.isNotEmpty) {
       json.forEach((String key, dynamic value) {
         map[key] = InlineResponse2024.listFromJson(value);
       });
     }
     return map;
  }
}

