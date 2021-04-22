part of openapi.api;

class InlineResponse2024NetworkController {
  
  AnyType deletedAt = null;
  
  String networkId = null;
  
  String name = null;
  
  String updatedAt = null;
  
  String provider = null;
  
  AnyType userData = null;
  
  AnyType ownerIdentityId = null;
  
  String domainName = null;
  
  String providerId = null;
  
  String id = null;
  
  num port = null;
  
  String ipAddress = null;
  
  String status = null;
  
  String hostId = null;
  
  String createdAt = null;
  
  AnyType deletedBy = null;
  
  String locationMetadataId = null;
  
  String dataCenterId = null;
  InlineResponse2024NetworkController();

  @override
  String toString() {
    return 'InlineResponse2024NetworkController[deletedAt=$deletedAt, networkId=$networkId, name=$name, updatedAt=$updatedAt, provider=$provider, userData=$userData, ownerIdentityId=$ownerIdentityId, domainName=$domainName, providerId=$providerId, id=$id, port=$port, ipAddress=$ipAddress, status=$status, hostId=$hostId, createdAt=$createdAt, deletedBy=$deletedBy, locationMetadataId=$locationMetadataId, dataCenterId=$dataCenterId, ]';
  }

  InlineResponse2024NetworkController.fromJson(Map<String, dynamic> json) {
    if (json == null) return;
    deletedAt = json['deletedAt'];
    networkId = json['networkId'];
    name = json['name'];
    updatedAt = json['updatedAt'];
    provider = json['provider'];
    userData = json['userData'];
    ownerIdentityId = json['ownerIdentityId'];
    domainName = json['domainName'];
    providerId = json['providerId'];
    id = json['id'];
    port = json['port'];
    ipAddress = json['ipAddress'];
    status = json['status'];
    hostId = json['hostId'];
    createdAt = json['createdAt'];
    deletedBy = json['deletedBy'];
    locationMetadataId = json['locationMetadataId'];
    dataCenterId = json['dataCenterId'];
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
    if (userData != null)
      json['userData'] = userData;
    if (ownerIdentityId != null)
      json['ownerIdentityId'] = ownerIdentityId;
    if (domainName != null)
      json['domainName'] = domainName;
    if (providerId != null)
      json['providerId'] = providerId;
    if (id != null)
      json['id'] = id;
    if (port != null)
      json['port'] = port;
    if (ipAddress != null)
      json['ipAddress'] = ipAddress;
    if (status != null)
      json['status'] = status;
    if (hostId != null)
      json['hostId'] = hostId;
    if (createdAt != null)
      json['createdAt'] = createdAt;
    if (deletedBy != null)
      json['deletedBy'] = deletedBy;
    if (locationMetadataId != null)
      json['locationMetadataId'] = locationMetadataId;
    if (dataCenterId != null)
      json['dataCenterId'] = dataCenterId;
    return json;
  }

  static List<InlineResponse2024NetworkController> listFromJson(List<dynamic> json) {
    return json == null ? List<InlineResponse2024NetworkController>() : json.map((value) => InlineResponse2024NetworkController.fromJson(value)).toList();
  }

  static Map<String, InlineResponse2024NetworkController> mapFromJson(Map<String, dynamic> json) {
    var map = Map<String, InlineResponse2024NetworkController>();
    if (json != null && json.isNotEmpty) {
      json.forEach((String key, dynamic value) => map[key] = InlineResponse2024NetworkController.fromJson(value));
    }
    return map;
  }

  // maps a json object with a list of InlineResponse2024NetworkController-objects as value to a dart map
  static Map<String, List<InlineResponse2024NetworkController>> mapListFromJson(Map<String, dynamic> json) {
    var map = Map<String, List<InlineResponse2024NetworkController>>();
     if (json != null && json.isNotEmpty) {
       json.forEach((String key, dynamic value) {
         map[key] = InlineResponse2024NetworkController.listFromJson(value);
       });
     }
     return map;
  }
}

