part of openapi.api;

class InlineResponse20012 {
  
  AnyType deletedAt = null;
  
  String networkId = null;
  
  String name = null;
  
  String updatedAt = null;
  
  AnyType provider = null;
  
  bool online = null;
  
  String zitiId = null;
  
  AnyType userData = null;
  
  String ownerIdentityId = null;
  
  List<String> attributes = [];
  
  AnyType providerId = null;
  
  AnyType jwt = null;
  
  String id = null;
  
  AnyType ipAddress = null;
  
  String status = null;
  
  AnyType hostId = null;
  
  String createdAt = null;
  
  String createdBy = null;
  
  AnyType deletedBy = null;
  
  AnyType locationMetadataId = null;
  
  bool linkListener = null;
  
  AnyType dataCenterId = null;
  
  bool verified = null;
  
  InlineResponse200Links links = null;
  InlineResponse20012();

  @override
  String toString() {
    return 'InlineResponse20012[deletedAt=$deletedAt, networkId=$networkId, name=$name, updatedAt=$updatedAt, provider=$provider, online=$online, zitiId=$zitiId, userData=$userData, ownerIdentityId=$ownerIdentityId, attributes=$attributes, providerId=$providerId, jwt=$jwt, id=$id, ipAddress=$ipAddress, status=$status, hostId=$hostId, createdAt=$createdAt, createdBy=$createdBy, deletedBy=$deletedBy, locationMetadataId=$locationMetadataId, linkListener=$linkListener, dataCenterId=$dataCenterId, verified=$verified, links=$links, ]';
  }

  InlineResponse20012.fromJson(Map<String, dynamic> json) {
    if (json == null) return;
    deletedAt = json['deletedAt'];
    networkId = json['networkId'];
    name = json['name'];
    updatedAt = json['updatedAt'];
    provider = json['provider'];
    online = json['online'];
    zitiId = json['zitiId'];
    userData = json['userData'];
    ownerIdentityId = json['ownerIdentityId'];
    attributes = (json['attributes'] == null) ?
      null :
      (json['attributes'] as List).cast<String>();
    providerId = json['providerId'];
    jwt = json['jwt'];
    id = json['id'];
    ipAddress = json['ipAddress'];
    status = json['status'];
    hostId = json['hostId'];
    createdAt = json['createdAt'];
    createdBy = json['createdBy'];
    deletedBy = json['deletedBy'];
    locationMetadataId = json['locationMetadataId'];
    linkListener = json['linkListener'];
    dataCenterId = json['dataCenterId'];
    verified = json['verified'];
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
    if (provider != null)
      json['provider'] = provider;
    if (online != null)
      json['online'] = online;
    if (zitiId != null)
      json['zitiId'] = zitiId;
    if (userData != null)
      json['userData'] = userData;
    if (ownerIdentityId != null)
      json['ownerIdentityId'] = ownerIdentityId;
    if (attributes != null)
      json['attributes'] = attributes;
    if (providerId != null)
      json['providerId'] = providerId;
    if (jwt != null)
      json['jwt'] = jwt;
    if (id != null)
      json['id'] = id;
    if (ipAddress != null)
      json['ipAddress'] = ipAddress;
    if (status != null)
      json['status'] = status;
    if (hostId != null)
      json['hostId'] = hostId;
    if (createdAt != null)
      json['createdAt'] = createdAt;
    if (createdBy != null)
      json['createdBy'] = createdBy;
    if (deletedBy != null)
      json['deletedBy'] = deletedBy;
    if (locationMetadataId != null)
      json['locationMetadataId'] = locationMetadataId;
    if (linkListener != null)
      json['linkListener'] = linkListener;
    if (dataCenterId != null)
      json['dataCenterId'] = dataCenterId;
    if (verified != null)
      json['verified'] = verified;
    if (links != null)
      json['_links'] = links;
    return json;
  }

  static List<InlineResponse20012> listFromJson(List<dynamic> json) {
    return json == null ? List<InlineResponse20012>() : json.map((value) => InlineResponse20012.fromJson(value)).toList();
  }

  static Map<String, InlineResponse20012> mapFromJson(Map<String, dynamic> json) {
    var map = Map<String, InlineResponse20012>();
    if (json != null && json.isNotEmpty) {
      json.forEach((String key, dynamic value) => map[key] = InlineResponse20012.fromJson(value));
    }
    return map;
  }

  // maps a json object with a list of InlineResponse20012-objects as value to a dart map
  static Map<String, List<InlineResponse20012>> mapListFromJson(Map<String, dynamic> json) {
    var map = Map<String, List<InlineResponse20012>>();
     if (json != null && json.isNotEmpty) {
       json.forEach((String key, dynamic value) {
         map[key] = InlineResponse20012.listFromJson(value);
       });
     }
     return map;
  }
}

