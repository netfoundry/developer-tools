part of openapi.api;

class InlineResponse202 {
  
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
  
  AnyType networkController = null;
  
  String o365BreakoutCategory = null;
  
  InlineResponse202Links links = null;
  InlineResponse202();

  @override
  String toString() {
    return 'InlineResponse202[deletedAt=$deletedAt, name=$name, updatedAt=$updatedAt, size=$size, ownerIdentityId=$ownerIdentityId, productVersion=$productVersion, networkGroupId=$networkGroupId, id=$id, status=$status, createdAt=$createdAt, createdBy=$createdBy, deletedBy=$deletedBy, networkController=$networkController, o365BreakoutCategory=$o365BreakoutCategory, links=$links, ]';
  }

  InlineResponse202.fromJson(Map<String, dynamic> json) {
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
    networkController = json['networkController'];
    o365BreakoutCategory = json['o365BreakoutCategory'];
    links = (json['_links'] == null) ?
      null :
      InlineResponse202Links.fromJson(json['_links']);
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

  static List<InlineResponse202> listFromJson(List<dynamic> json) {
    return json == null ? List<InlineResponse202>() : json.map((value) => InlineResponse202.fromJson(value)).toList();
  }

  static Map<String, InlineResponse202> mapFromJson(Map<String, dynamic> json) {
    var map = Map<String, InlineResponse202>();
    if (json != null && json.isNotEmpty) {
      json.forEach((String key, dynamic value) => map[key] = InlineResponse202.fromJson(value));
    }
    return map;
  }

  // maps a json object with a list of InlineResponse202-objects as value to a dart map
  static Map<String, List<InlineResponse202>> mapListFromJson(Map<String, dynamic> json) {
    var map = Map<String, List<InlineResponse202>>();
     if (json != null && json.isNotEmpty) {
       json.forEach((String key, dynamic value) {
         map[key] = InlineResponse202.listFromJson(value);
       });
     }
     return map;
  }
}

