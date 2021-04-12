part of openapi.api;

class InlineResponse2007EmbeddedEndpointList {
  
  bool mfaEnabled = null;
  
  AnyType deletedAt = null;
  
  String networkId = null;
  
  String name = null;
  
  String updatedAt = null;
  
  AnyType syncId = null;
  
  AnyType sessionIdentityId = null;
  
  AnyType osRelease = null;
  
  AnyType syncResourceId = null;
  
  String zitiId = null;
  
  AnyType appVersion = null;
  
  AnyType branch = null;
  
  AnyType os = null;
  
  String ownerIdentityId = null;
  
  bool hasEdgeRouterConnection = null;
  
  List<String> attributes = [];
  
  bool hasApiSession = null;
  
  AnyType revision = null;
  
  AnyType version = null;
  
  AnyType jwt = null;
  
  String id = null;
  
  bool sessionActive = null;
  
  AnyType jwtExpiresAt = null;
  
  String createdAt = null;
  
  AnyType arch = null;
  
  String createdBy = null;
  
  AnyType deletedBy = null;
  
  AnyType type = null;
  
  AnyType osVersion = null;
  
  AnyType appId = null;
  
  InlineResponse200Links links = null;
  InlineResponse2007EmbeddedEndpointList();

  @override
  String toString() {
    return 'InlineResponse2007EmbeddedEndpointList[mfaEnabled=$mfaEnabled, deletedAt=$deletedAt, networkId=$networkId, name=$name, updatedAt=$updatedAt, syncId=$syncId, sessionIdentityId=$sessionIdentityId, osRelease=$osRelease, syncResourceId=$syncResourceId, zitiId=$zitiId, appVersion=$appVersion, branch=$branch, os=$os, ownerIdentityId=$ownerIdentityId, hasEdgeRouterConnection=$hasEdgeRouterConnection, attributes=$attributes, hasApiSession=$hasApiSession, revision=$revision, version=$version, jwt=$jwt, id=$id, sessionActive=$sessionActive, jwtExpiresAt=$jwtExpiresAt, createdAt=$createdAt, arch=$arch, createdBy=$createdBy, deletedBy=$deletedBy, type=$type, osVersion=$osVersion, appId=$appId, links=$links, ]';
  }

  InlineResponse2007EmbeddedEndpointList.fromJson(Map<String, dynamic> json) {
    if (json == null) return;
    mfaEnabled = json['mfaEnabled'];
    deletedAt = json['deletedAt'];
    networkId = json['networkId'];
    name = json['name'];
    updatedAt = json['updatedAt'];
    syncId = json['syncId'];
    sessionIdentityId = json['sessionIdentityId'];
    osRelease = json['osRelease'];
    syncResourceId = json['syncResourceId'];
    zitiId = json['zitiId'];
    appVersion = json['appVersion'];
    branch = json['branch'];
    os = json['os'];
    ownerIdentityId = json['ownerIdentityId'];
    hasEdgeRouterConnection = json['hasEdgeRouterConnection'];
    attributes = (json['attributes'] == null) ?
      null :
      (json['attributes'] as List).cast<String>();
    hasApiSession = json['hasApiSession'];
    revision = json['revision'];
    version = json['version'];
    jwt = json['jwt'];
    id = json['id'];
    sessionActive = json['sessionActive'];
    jwtExpiresAt = json['jwtExpiresAt'];
    createdAt = json['createdAt'];
    arch = json['arch'];
    createdBy = json['createdBy'];
    deletedBy = json['deletedBy'];
    type = json['type'];
    osVersion = json['osVersion'];
    appId = json['appId'];
    links = (json['_links'] == null) ?
      null :
      InlineResponse200Links.fromJson(json['_links']);
  }

  Map<String, dynamic> toJson() {
    Map <String, dynamic> json = {};
    if (mfaEnabled != null)
      json['mfaEnabled'] = mfaEnabled;
    if (deletedAt != null)
      json['deletedAt'] = deletedAt;
    if (networkId != null)
      json['networkId'] = networkId;
    if (name != null)
      json['name'] = name;
    if (updatedAt != null)
      json['updatedAt'] = updatedAt;
    if (syncId != null)
      json['syncId'] = syncId;
    if (sessionIdentityId != null)
      json['sessionIdentityId'] = sessionIdentityId;
    if (osRelease != null)
      json['osRelease'] = osRelease;
    if (syncResourceId != null)
      json['syncResourceId'] = syncResourceId;
    if (zitiId != null)
      json['zitiId'] = zitiId;
    if (appVersion != null)
      json['appVersion'] = appVersion;
    if (branch != null)
      json['branch'] = branch;
    if (os != null)
      json['os'] = os;
    if (ownerIdentityId != null)
      json['ownerIdentityId'] = ownerIdentityId;
    if (hasEdgeRouterConnection != null)
      json['hasEdgeRouterConnection'] = hasEdgeRouterConnection;
    if (attributes != null)
      json['attributes'] = attributes;
    if (hasApiSession != null)
      json['hasApiSession'] = hasApiSession;
    if (revision != null)
      json['revision'] = revision;
    if (version != null)
      json['version'] = version;
    if (jwt != null)
      json['jwt'] = jwt;
    if (id != null)
      json['id'] = id;
    if (sessionActive != null)
      json['sessionActive'] = sessionActive;
    if (jwtExpiresAt != null)
      json['jwtExpiresAt'] = jwtExpiresAt;
    if (createdAt != null)
      json['createdAt'] = createdAt;
    if (arch != null)
      json['arch'] = arch;
    if (createdBy != null)
      json['createdBy'] = createdBy;
    if (deletedBy != null)
      json['deletedBy'] = deletedBy;
    if (type != null)
      json['type'] = type;
    if (osVersion != null)
      json['osVersion'] = osVersion;
    if (appId != null)
      json['appId'] = appId;
    if (links != null)
      json['_links'] = links;
    return json;
  }

  static List<InlineResponse2007EmbeddedEndpointList> listFromJson(List<dynamic> json) {
    return json == null ? List<InlineResponse2007EmbeddedEndpointList>() : json.map((value) => InlineResponse2007EmbeddedEndpointList.fromJson(value)).toList();
  }

  static Map<String, InlineResponse2007EmbeddedEndpointList> mapFromJson(Map<String, dynamic> json) {
    var map = Map<String, InlineResponse2007EmbeddedEndpointList>();
    if (json != null && json.isNotEmpty) {
      json.forEach((String key, dynamic value) => map[key] = InlineResponse2007EmbeddedEndpointList.fromJson(value));
    }
    return map;
  }

  // maps a json object with a list of InlineResponse2007EmbeddedEndpointList-objects as value to a dart map
  static Map<String, List<InlineResponse2007EmbeddedEndpointList>> mapListFromJson(Map<String, dynamic> json) {
    var map = Map<String, List<InlineResponse2007EmbeddedEndpointList>>();
     if (json != null && json.isNotEmpty) {
       json.forEach((String key, dynamic value) {
         map[key] = InlineResponse2007EmbeddedEndpointList.listFromJson(value);
       });
     }
     return map;
  }
}

