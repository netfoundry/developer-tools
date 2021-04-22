part of openapi.api;

class InlineResponse20011 {
  
  String organizationShortName = null;
  
  String name = null;
  
  String updatedAt = null;
  
  bool zitiEnabled = null;
  
  AnyType defaultAzureVirtualWanId = null;
  
  AnyType ownerIdentityId = null;
  
  AnyType billingAccountId = null;
  
  String id = null;
  
  bool awsAutoScalingGatewayEnabled = null;
  
  String createdAt = null;
  
  bool mfaRequired = null;
  
  bool deleted = null;
  
  InlineResponse20011Links links = null;
  InlineResponse20011();

  @override
  String toString() {
    return 'InlineResponse20011[organizationShortName=$organizationShortName, name=$name, updatedAt=$updatedAt, zitiEnabled=$zitiEnabled, defaultAzureVirtualWanId=$defaultAzureVirtualWanId, ownerIdentityId=$ownerIdentityId, billingAccountId=$billingAccountId, id=$id, awsAutoScalingGatewayEnabled=$awsAutoScalingGatewayEnabled, createdAt=$createdAt, mfaRequired=$mfaRequired, deleted=$deleted, links=$links, ]';
  }

  InlineResponse20011.fromJson(Map<String, dynamic> json) {
    if (json == null) return;
    organizationShortName = json['organizationShortName'];
    name = json['name'];
    updatedAt = json['updatedAt'];
    zitiEnabled = json['zitiEnabled'];
    defaultAzureVirtualWanId = json['defaultAzureVirtualWanId'];
    ownerIdentityId = json['ownerIdentityId'];
    billingAccountId = json['billingAccountId'];
    id = json['id'];
    awsAutoScalingGatewayEnabled = json['awsAutoScalingGatewayEnabled'];
    createdAt = json['createdAt'];
    mfaRequired = json['mfaRequired'];
    deleted = json['deleted'];
    links = (json['_links'] == null) ?
      null :
      InlineResponse20011Links.fromJson(json['_links']);
  }

  Map<String, dynamic> toJson() {
    Map <String, dynamic> json = {};
    if (organizationShortName != null)
      json['organizationShortName'] = organizationShortName;
    if (name != null)
      json['name'] = name;
    if (updatedAt != null)
      json['updatedAt'] = updatedAt;
    if (zitiEnabled != null)
      json['zitiEnabled'] = zitiEnabled;
    if (defaultAzureVirtualWanId != null)
      json['defaultAzureVirtualWanId'] = defaultAzureVirtualWanId;
    if (ownerIdentityId != null)
      json['ownerIdentityId'] = ownerIdentityId;
    if (billingAccountId != null)
      json['billingAccountId'] = billingAccountId;
    if (id != null)
      json['id'] = id;
    if (awsAutoScalingGatewayEnabled != null)
      json['awsAutoScalingGatewayEnabled'] = awsAutoScalingGatewayEnabled;
    if (createdAt != null)
      json['createdAt'] = createdAt;
    if (mfaRequired != null)
      json['mfaRequired'] = mfaRequired;
    if (deleted != null)
      json['deleted'] = deleted;
    if (links != null)
      json['_links'] = links;
    return json;
  }

  static List<InlineResponse20011> listFromJson(List<dynamic> json) {
    return json == null ? List<InlineResponse20011>() : json.map((value) => InlineResponse20011.fromJson(value)).toList();
  }

  static Map<String, InlineResponse20011> mapFromJson(Map<String, dynamic> json) {
    var map = Map<String, InlineResponse20011>();
    if (json != null && json.isNotEmpty) {
      json.forEach((String key, dynamic value) => map[key] = InlineResponse20011.fromJson(value));
    }
    return map;
  }

  // maps a json object with a list of InlineResponse20011-objects as value to a dart map
  static Map<String, List<InlineResponse20011>> mapListFromJson(Map<String, dynamic> json) {
    var map = Map<String, List<InlineResponse20011>>();
     if (json != null && json.isNotEmpty) {
       json.forEach((String key, dynamic value) {
         map[key] = InlineResponse20011.listFromJson(value);
       });
     }
     return map;
  }
}

