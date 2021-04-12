part of openapi.api;

class InlineResponse20014 {
  
  AnyType deletedAt = null;
  
  String name = null;
  
  InlineResponse20014UpdatedAt updatedAt = null;
  
  String label = null;
  
  String id = null;
  
  String mfaProvider = null;
  
  InlineResponse20014UpdatedAt createdAt = null;
  
  List<InlineResponse20014IdentityProviders> identityProviders = [];
  
  bool deleted = null;
  
  bool active = null;
  InlineResponse20014();

  @override
  String toString() {
    return 'InlineResponse20014[deletedAt=$deletedAt, name=$name, updatedAt=$updatedAt, label=$label, id=$id, mfaProvider=$mfaProvider, createdAt=$createdAt, identityProviders=$identityProviders, deleted=$deleted, active=$active, ]';
  }

  InlineResponse20014.fromJson(Map<String, dynamic> json) {
    if (json == null) return;
    deletedAt = json['deletedAt'];
    name = json['name'];
    updatedAt = (json['updatedAt'] == null) ?
      null :
      InlineResponse20014UpdatedAt.fromJson(json['updatedAt']);
    label = json['label'];
    id = json['id'];
    mfaProvider = json['mfaProvider'];
    createdAt = (json['createdAt'] == null) ?
      null :
      InlineResponse20014UpdatedAt.fromJson(json['createdAt']);
    identityProviders = (json['identityProviders'] == null) ?
      null :
      InlineResponse20014IdentityProviders.listFromJson(json['identityProviders']);
    deleted = json['deleted'];
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
    if (label != null)
      json['label'] = label;
    if (id != null)
      json['id'] = id;
    if (mfaProvider != null)
      json['mfaProvider'] = mfaProvider;
    if (createdAt != null)
      json['createdAt'] = createdAt;
    if (identityProviders != null)
      json['identityProviders'] = identityProviders;
    if (deleted != null)
      json['deleted'] = deleted;
    if (active != null)
      json['active'] = active;
    return json;
  }

  static List<InlineResponse20014> listFromJson(List<dynamic> json) {
    return json == null ? List<InlineResponse20014>() : json.map((value) => InlineResponse20014.fromJson(value)).toList();
  }

  static Map<String, InlineResponse20014> mapFromJson(Map<String, dynamic> json) {
    var map = Map<String, InlineResponse20014>();
    if (json != null && json.isNotEmpty) {
      json.forEach((String key, dynamic value) => map[key] = InlineResponse20014.fromJson(value));
    }
    return map;
  }

  // maps a json object with a list of InlineResponse20014-objects as value to a dart map
  static Map<String, List<InlineResponse20014>> mapListFromJson(Map<String, dynamic> json) {
    var map = Map<String, List<InlineResponse20014>>();
     if (json != null && json.isNotEmpty) {
       json.forEach((String key, dynamic value) {
         map[key] = InlineResponse20014.listFromJson(value);
       });
     }
     return map;
  }
}

