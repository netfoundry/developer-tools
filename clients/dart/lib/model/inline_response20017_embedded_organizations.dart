part of openapi.api;

class InlineResponse20017EmbeddedOrganizations {
  
  String organizationShortName = null;
  
  String name = null;
  
  String updatedAt = null;
  
  bool zitiEnabled = null;
  
  AnyType defaultAzureVirtualWanId = null;
  
  AnyType ownerIdentityId = null;
  
  String billingAccountId = null;
  
  String id = null;
  
  bool awsAutoScalingGatewayEnabled = null;
  
  String createdAt = null;
  
  bool mfaRequired = null;
  
  bool deleted = null;
  
  InlineResponse20011Links links = null;
  InlineResponse20017EmbeddedOrganizations();

  @override
  String toString() {
    return 'InlineResponse20017EmbeddedOrganizations[organizationShortName=$organizationShortName, name=$name, updatedAt=$updatedAt, zitiEnabled=$zitiEnabled, defaultAzureVirtualWanId=$defaultAzureVirtualWanId, ownerIdentityId=$ownerIdentityId, billingAccountId=$billingAccountId, id=$id, awsAutoScalingGatewayEnabled=$awsAutoScalingGatewayEnabled, createdAt=$createdAt, mfaRequired=$mfaRequired, deleted=$deleted, links=$links, ]';
  }

  InlineResponse20017EmbeddedOrganizations.fromJson(Map<String, dynamic> json) {
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

  static List<InlineResponse20017EmbeddedOrganizations> listFromJson(List<dynamic> json) {
    return json == null ? List<InlineResponse20017EmbeddedOrganizations>() : json.map((value) => InlineResponse20017EmbeddedOrganizations.fromJson(value)).toList();
  }

  static Map<String, InlineResponse20017EmbeddedOrganizations> mapFromJson(Map<String, dynamic> json) {
    var map = Map<String, InlineResponse20017EmbeddedOrganizations>();
    if (json != null && json.isNotEmpty) {
      json.forEach((String key, dynamic value) => map[key] = InlineResponse20017EmbeddedOrganizations.fromJson(value));
    }
    return map;
  }

  // maps a json object with a list of InlineResponse20017EmbeddedOrganizations-objects as value to a dart map
  static Map<String, List<InlineResponse20017EmbeddedOrganizations>> mapListFromJson(Map<String, dynamic> json) {
    var map = Map<String, List<InlineResponse20017EmbeddedOrganizations>>();
     if (json != null && json.isNotEmpty) {
       json.forEach((String key, dynamic value) {
         map[key] = InlineResponse20017EmbeddedOrganizations.listFromJson(value);
       });
     }
     return map;
  }
}

