part of openapi.api;

class InlineResponse20016 {
  
  AnyType deletedAt = null;
  
  String name = null;
  
  AnyType updatedAt = null;
  
  String email = null;
  
  String description = null;
  
  String awsCognitoClientId = null;
  
  AnyType auth0ClientId = null;
  
  String id = null;
  
  String contactEmail = null;
  
  InlineResponse20014UpdatedAt createdAt = null;
  
  String organizationId = null;
  
  String tenantId = null;
  
  String type = null;
  
  String authenticationUrl = null;
  
  bool active = null;
  InlineResponse20016();

  @override
  String toString() {
    return 'InlineResponse20016[deletedAt=$deletedAt, name=$name, updatedAt=$updatedAt, email=$email, description=$description, awsCognitoClientId=$awsCognitoClientId, auth0ClientId=$auth0ClientId, id=$id, contactEmail=$contactEmail, createdAt=$createdAt, organizationId=$organizationId, tenantId=$tenantId, type=$type, authenticationUrl=$authenticationUrl, active=$active, ]';
  }

  InlineResponse20016.fromJson(Map<String, dynamic> json) {
    if (json == null) return;
    deletedAt = json['deletedAt'];
    name = json['name'];
    updatedAt = json['updatedAt'];
    email = json['email'];
    description = json['description'];
    awsCognitoClientId = json['awsCognitoClientId'];
    auth0ClientId = json['auth0ClientId'];
    id = json['id'];
    contactEmail = json['contactEmail'];
    createdAt = (json['createdAt'] == null) ?
      null :
      InlineResponse20014UpdatedAt.fromJson(json['createdAt']);
    organizationId = json['organizationId'];
    tenantId = json['tenantId'];
    type = json['type'];
    authenticationUrl = json['authenticationUrl'];
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
    if (email != null)
      json['email'] = email;
    if (description != null)
      json['description'] = description;
    if (awsCognitoClientId != null)
      json['awsCognitoClientId'] = awsCognitoClientId;
    if (auth0ClientId != null)
      json['auth0ClientId'] = auth0ClientId;
    if (id != null)
      json['id'] = id;
    if (contactEmail != null)
      json['contactEmail'] = contactEmail;
    if (createdAt != null)
      json['createdAt'] = createdAt;
    if (organizationId != null)
      json['organizationId'] = organizationId;
    if (tenantId != null)
      json['tenantId'] = tenantId;
    if (type != null)
      json['type'] = type;
    if (authenticationUrl != null)
      json['authenticationUrl'] = authenticationUrl;
    if (active != null)
      json['active'] = active;
    return json;
  }

  static List<InlineResponse20016> listFromJson(List<dynamic> json) {
    return json == null ? List<InlineResponse20016>() : json.map((value) => InlineResponse20016.fromJson(value)).toList();
  }

  static Map<String, InlineResponse20016> mapFromJson(Map<String, dynamic> json) {
    var map = Map<String, InlineResponse20016>();
    if (json != null && json.isNotEmpty) {
      json.forEach((String key, dynamic value) => map[key] = InlineResponse20016.fromJson(value));
    }
    return map;
  }

  // maps a json object with a list of InlineResponse20016-objects as value to a dart map
  static Map<String, List<InlineResponse20016>> mapListFromJson(Map<String, dynamic> json) {
    var map = Map<String, List<InlineResponse20016>>();
     if (json != null && json.isNotEmpty) {
       json.forEach((String key, dynamic value) {
         map[key] = InlineResponse20016.listFromJson(value);
       });
     }
     return map;
  }
}

