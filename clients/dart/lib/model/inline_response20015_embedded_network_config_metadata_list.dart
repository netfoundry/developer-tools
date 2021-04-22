part of openapi.api;

class InlineResponse20015EmbeddedNetworkConfigMetadataList {
  
  num networkControllerVolumeSize = null;
  
  num gatewayVolumeSize = null;
  
  String name = null;
  
  String gcpTransferNodeSize = null;
  
  String awsNetworkControllerSize = null;
  
  num transferNodeVolumeSize = null;
  
  String awsGatewaySize = null;
  
  String ocpTransferNodeSize = null;
  
  String awsTransferNodeSize = null;
  
  String id = null;
  
  String azureTransferNodeSize = null;
  
  String alicloudTransferNodeSize = null;
  
  InlineResponse2002EmbeddedLinks links = null;
  InlineResponse20015EmbeddedNetworkConfigMetadataList();

  @override
  String toString() {
    return 'InlineResponse20015EmbeddedNetworkConfigMetadataList[networkControllerVolumeSize=$networkControllerVolumeSize, gatewayVolumeSize=$gatewayVolumeSize, name=$name, gcpTransferNodeSize=$gcpTransferNodeSize, awsNetworkControllerSize=$awsNetworkControllerSize, transferNodeVolumeSize=$transferNodeVolumeSize, awsGatewaySize=$awsGatewaySize, ocpTransferNodeSize=$ocpTransferNodeSize, awsTransferNodeSize=$awsTransferNodeSize, id=$id, azureTransferNodeSize=$azureTransferNodeSize, alicloudTransferNodeSize=$alicloudTransferNodeSize, links=$links, ]';
  }

  InlineResponse20015EmbeddedNetworkConfigMetadataList.fromJson(Map<String, dynamic> json) {
    if (json == null) return;
    networkControllerVolumeSize = json['networkControllerVolumeSize'];
    gatewayVolumeSize = json['gatewayVolumeSize'];
    name = json['name'];
    gcpTransferNodeSize = json['gcpTransferNodeSize'];
    awsNetworkControllerSize = json['awsNetworkControllerSize'];
    transferNodeVolumeSize = json['transferNodeVolumeSize'];
    awsGatewaySize = json['awsGatewaySize'];
    ocpTransferNodeSize = json['ocpTransferNodeSize'];
    awsTransferNodeSize = json['awsTransferNodeSize'];
    id = json['id'];
    azureTransferNodeSize = json['azureTransferNodeSize'];
    alicloudTransferNodeSize = json['alicloudTransferNodeSize'];
    links = (json['_links'] == null) ?
      null :
      InlineResponse2002EmbeddedLinks.fromJson(json['_links']);
  }

  Map<String, dynamic> toJson() {
    Map <String, dynamic> json = {};
    if (networkControllerVolumeSize != null)
      json['networkControllerVolumeSize'] = networkControllerVolumeSize;
    if (gatewayVolumeSize != null)
      json['gatewayVolumeSize'] = gatewayVolumeSize;
    if (name != null)
      json['name'] = name;
    if (gcpTransferNodeSize != null)
      json['gcpTransferNodeSize'] = gcpTransferNodeSize;
    if (awsNetworkControllerSize != null)
      json['awsNetworkControllerSize'] = awsNetworkControllerSize;
    if (transferNodeVolumeSize != null)
      json['transferNodeVolumeSize'] = transferNodeVolumeSize;
    if (awsGatewaySize != null)
      json['awsGatewaySize'] = awsGatewaySize;
    if (ocpTransferNodeSize != null)
      json['ocpTransferNodeSize'] = ocpTransferNodeSize;
    if (awsTransferNodeSize != null)
      json['awsTransferNodeSize'] = awsTransferNodeSize;
    if (id != null)
      json['id'] = id;
    if (azureTransferNodeSize != null)
      json['azureTransferNodeSize'] = azureTransferNodeSize;
    if (alicloudTransferNodeSize != null)
      json['alicloudTransferNodeSize'] = alicloudTransferNodeSize;
    if (links != null)
      json['_links'] = links;
    return json;
  }

  static List<InlineResponse20015EmbeddedNetworkConfigMetadataList> listFromJson(List<dynamic> json) {
    return json == null ? List<InlineResponse20015EmbeddedNetworkConfigMetadataList>() : json.map((value) => InlineResponse20015EmbeddedNetworkConfigMetadataList.fromJson(value)).toList();
  }

  static Map<String, InlineResponse20015EmbeddedNetworkConfigMetadataList> mapFromJson(Map<String, dynamic> json) {
    var map = Map<String, InlineResponse20015EmbeddedNetworkConfigMetadataList>();
    if (json != null && json.isNotEmpty) {
      json.forEach((String key, dynamic value) => map[key] = InlineResponse20015EmbeddedNetworkConfigMetadataList.fromJson(value));
    }
    return map;
  }

  // maps a json object with a list of InlineResponse20015EmbeddedNetworkConfigMetadataList-objects as value to a dart map
  static Map<String, List<InlineResponse20015EmbeddedNetworkConfigMetadataList>> mapListFromJson(Map<String, dynamic> json) {
    var map = Map<String, List<InlineResponse20015EmbeddedNetworkConfigMetadataList>>();
     if (json != null && json.isNotEmpty) {
       json.forEach((String key, dynamic value) {
         map[key] = InlineResponse20015EmbeddedNetworkConfigMetadataList.listFromJson(value);
       });
     }
     return map;
  }
}

