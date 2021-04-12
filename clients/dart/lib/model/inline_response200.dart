part of openapi.api;

class InlineResponse200 {
  
  List<String> serviceAttributes = [];
  
  AnyType deletedAt = null;
  
  String networkId = null;
  
  String name = null;
  
  String updatedAt = null;
  
  List<AnyType> postureCheckAttributes = [];
  
  String zitiId = null;
  
  String ownerIdentityId = null;
  
  String id = null;
  
  String createdAt = null;
  
  String createdBy = null;
  
  AnyType deletedBy = null;
  
  List<String> endpointAttributes = [];
  
  InlineResponse200Links links = null;
  InlineResponse200();

  @override
  String toString() {
    return 'InlineResponse200[serviceAttributes=$serviceAttributes, deletedAt=$deletedAt, networkId=$networkId, name=$name, updatedAt=$updatedAt, postureCheckAttributes=$postureCheckAttributes, zitiId=$zitiId, ownerIdentityId=$ownerIdentityId, id=$id, createdAt=$createdAt, createdBy=$createdBy, deletedBy=$deletedBy, endpointAttributes=$endpointAttributes, links=$links, ]';
  }

  InlineResponse200.fromJson(Map<String, dynamic> json) {
    if (json == null) return;
    serviceAttributes = (json['serviceAttributes'] == null) ?
      null :
      (json['serviceAttributes'] as List).cast<String>();
    deletedAt = json['deletedAt'];
    networkId = json['networkId'];
    name = json['name'];
    updatedAt = json['updatedAt'];
    postureCheckAttributes = (json['postureCheckAttributes'] == null) ?
      null :
      AnyType.listFromJson(json['postureCheckAttributes']);
    zitiId = json['zitiId'];
    ownerIdentityId = json['ownerIdentityId'];
    id = json['id'];
    createdAt = json['createdAt'];
    createdBy = json['createdBy'];
    deletedBy = json['deletedBy'];
    endpointAttributes = (json['endpointAttributes'] == null) ?
      null :
      (json['endpointAttributes'] as List).cast<String>();
    links = (json['_links'] == null) ?
      null :
      InlineResponse200Links.fromJson(json['_links']);
  }

  Map<String, dynamic> toJson() {
    Map <String, dynamic> json = {};
    if (serviceAttributes != null)
      json['serviceAttributes'] = serviceAttributes;
    if (deletedAt != null)
      json['deletedAt'] = deletedAt;
    if (networkId != null)
      json['networkId'] = networkId;
    if (name != null)
      json['name'] = name;
    if (updatedAt != null)
      json['updatedAt'] = updatedAt;
    if (postureCheckAttributes != null)
      json['postureCheckAttributes'] = postureCheckAttributes;
    if (zitiId != null)
      json['zitiId'] = zitiId;
    if (ownerIdentityId != null)
      json['ownerIdentityId'] = ownerIdentityId;
    if (id != null)
      json['id'] = id;
    if (createdAt != null)
      json['createdAt'] = createdAt;
    if (createdBy != null)
      json['createdBy'] = createdBy;
    if (deletedBy != null)
      json['deletedBy'] = deletedBy;
    if (endpointAttributes != null)
      json['endpointAttributes'] = endpointAttributes;
    if (links != null)
      json['_links'] = links;
    return json;
  }

  static List<InlineResponse200> listFromJson(List<dynamic> json) {
    return json == null ? List<InlineResponse200>() : json.map((value) => InlineResponse200.fromJson(value)).toList();
  }

  static Map<String, InlineResponse200> mapFromJson(Map<String, dynamic> json) {
    var map = Map<String, InlineResponse200>();
    if (json != null && json.isNotEmpty) {
      json.forEach((String key, dynamic value) => map[key] = InlineResponse200.fromJson(value));
    }
    return map;
  }

  // maps a json object with a list of InlineResponse200-objects as value to a dart map
  static Map<String, List<InlineResponse200>> mapListFromJson(Map<String, dynamic> json) {
    var map = Map<String, List<InlineResponse200>>();
     if (json != null && json.isNotEmpty) {
       json.forEach((String key, dynamic value) {
         map[key] = InlineResponse200.listFromJson(value);
       });
     }
     return map;
  }
}

