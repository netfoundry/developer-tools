part of openapi.api;

class InlineResponse2004EmbeddedEdgeRouterPolicyList {
  
  AnyType deletedAt = null;
  
  String networkId = null;
  
  String name = null;
  
  List<String> edgeRouterAttributes = [];
  
  String updatedAt = null;
  
  String zitiId = null;
  
  String ownerIdentityId = null;
  
  String id = null;
  
  String createdAt = null;
  
  String createdBy = null;
  
  AnyType deletedBy = null;
  
  List<String> endpointAttributes = [];
  
  InlineResponse200Links links = null;
  InlineResponse2004EmbeddedEdgeRouterPolicyList();

  @override
  String toString() {
    return 'InlineResponse2004EmbeddedEdgeRouterPolicyList[deletedAt=$deletedAt, networkId=$networkId, name=$name, edgeRouterAttributes=$edgeRouterAttributes, updatedAt=$updatedAt, zitiId=$zitiId, ownerIdentityId=$ownerIdentityId, id=$id, createdAt=$createdAt, createdBy=$createdBy, deletedBy=$deletedBy, endpointAttributes=$endpointAttributes, links=$links, ]';
  }

  InlineResponse2004EmbeddedEdgeRouterPolicyList.fromJson(Map<String, dynamic> json) {
    if (json == null) return;
    deletedAt = json['deletedAt'];
    networkId = json['networkId'];
    name = json['name'];
    edgeRouterAttributes = (json['edgeRouterAttributes'] == null) ?
      null :
      (json['edgeRouterAttributes'] as List).cast<String>();
    updatedAt = json['updatedAt'];
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
    if (deletedAt != null)
      json['deletedAt'] = deletedAt;
    if (networkId != null)
      json['networkId'] = networkId;
    if (name != null)
      json['name'] = name;
    if (edgeRouterAttributes != null)
      json['edgeRouterAttributes'] = edgeRouterAttributes;
    if (updatedAt != null)
      json['updatedAt'] = updatedAt;
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

  static List<InlineResponse2004EmbeddedEdgeRouterPolicyList> listFromJson(List<dynamic> json) {
    return json == null ? List<InlineResponse2004EmbeddedEdgeRouterPolicyList>() : json.map((value) => InlineResponse2004EmbeddedEdgeRouterPolicyList.fromJson(value)).toList();
  }

  static Map<String, InlineResponse2004EmbeddedEdgeRouterPolicyList> mapFromJson(Map<String, dynamic> json) {
    var map = Map<String, InlineResponse2004EmbeddedEdgeRouterPolicyList>();
    if (json != null && json.isNotEmpty) {
      json.forEach((String key, dynamic value) => map[key] = InlineResponse2004EmbeddedEdgeRouterPolicyList.fromJson(value));
    }
    return map;
  }

  // maps a json object with a list of InlineResponse2004EmbeddedEdgeRouterPolicyList-objects as value to a dart map
  static Map<String, List<InlineResponse2004EmbeddedEdgeRouterPolicyList>> mapListFromJson(Map<String, dynamic> json) {
    var map = Map<String, List<InlineResponse2004EmbeddedEdgeRouterPolicyList>>();
     if (json != null && json.isNotEmpty) {
       json.forEach((String key, dynamic value) {
         map[key] = InlineResponse2004EmbeddedEdgeRouterPolicyList.listFromJson(value);
       });
     }
     return map;
  }
}

