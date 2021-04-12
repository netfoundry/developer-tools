part of openapi.api;

class InlineResponse20014IdentityProviders {
  
  AnyType deletedAt = null;
  
  String name = null;
  
  AnyType updatedAt = null;
  
  String auth0ConnectionType = null;
  
  String auth0ConnectionId = null;
  
  String id = null;
  
  InlineResponse20014UpdatedAt createdAt = null;
  
  String organizationId = null;
  
  bool active = null;
  InlineResponse20014IdentityProviders();

  @override
  String toString() {
    return 'InlineResponse20014IdentityProviders[deletedAt=$deletedAt, name=$name, updatedAt=$updatedAt, auth0ConnectionType=$auth0ConnectionType, auth0ConnectionId=$auth0ConnectionId, id=$id, createdAt=$createdAt, organizationId=$organizationId, active=$active, ]';
  }

  InlineResponse20014IdentityProviders.fromJson(Map<String, dynamic> json) {
    if (json == null) return;
    deletedAt = json['deletedAt'];
    name = json['name'];
    updatedAt = json['updatedAt'];
    auth0ConnectionType = json['auth0ConnectionType'];
    auth0ConnectionId = json['auth0ConnectionId'];
    id = json['id'];
    createdAt = (json['createdAt'] == null) ?
      null :
      InlineResponse20014UpdatedAt.fromJson(json['createdAt']);
    organizationId = json['organizationId'];
    active = json['active'];
  }

  Map<String, dynamic> toJson() {
    Map <String, dynamic> json = {};
    if (deletedAt != null)
      json['deletedAt'] = deletedAt;
    if (name != null)
      json['name'] = name;
    if (updatedAt != null)
      json['updatedAt'] = updatedAt;
    if (auth0ConnectionType != null)
      json['auth0ConnectionType'] = auth0ConnectionType;
    if (auth0ConnectionId != null)
      json['auth0ConnectionId'] = auth0ConnectionId;
    if (id != null)
      json['id'] = id;
    if (createdAt != null)
      json['createdAt'] = createdAt;
    if (organizationId != null)
      json['organizationId'] = organizationId;
    if (active != null)
      json['active'] = active;
    return json;
  }

  static List<InlineResponse20014IdentityProviders> listFromJson(List<dynamic> json) {
    return json == null ? List<InlineResponse20014IdentityProviders>() : json.map((value) => InlineResponse20014IdentityProviders.fromJson(value)).toList();
  }

  static Map<String, InlineResponse20014IdentityProviders> mapFromJson(Map<String, dynamic> json) {
    var map = Map<String, InlineResponse20014IdentityProviders>();
    if (json != null && json.isNotEmpty) {
      json.forEach((String key, dynamic value) => map[key] = InlineResponse20014IdentityProviders.fromJson(value));
    }
    return map;
  }

  // maps a json object with a list of InlineResponse20014IdentityProviders-objects as value to a dart map
  static Map<String, List<InlineResponse20014IdentityProviders>> mapListFromJson(Map<String, dynamic> json) {
    var map = Map<String, List<InlineResponse20014IdentityProviders>>();
     if (json != null && json.isNotEmpty) {
       json.forEach((String key, dynamic value) {
         map[key] = InlineResponse20014IdentityProviders.listFromJson(value);
       });
     }
     return map;
  }
}

