part of openapi.api;

class InlineResponse20019710 {
  
  String zitiCliLinuxBinarySha1 = null;
  
  String zitiTunnelLinuxBinary = null;
  
  String zitiTunnelLinuxBinarySha1 = null;
  
  String zitiControllerBinary = null;
  
  String zitiCliLinuxBinaryMd5 = null;
  
  String zitiRouterLinuxBinarySha1 = null;
  
  String zitiRouterLinuxBinarySha256 = null;
  
  String zitiRouterLinuxBinaryMd5 = null;
  
  String zitiWindowsDesktopEdge = null;
  
  String zitiMacDesktopEdge = null;
  
  String zitiControllerBinarySha1 = null;
  
  String zitiControllerBinaryMd5 = null;
  
  String zitiControllerBinarySha256 = null;
  
  String zitiIosEdge = null;
  
  String zitiCliLinuxBinary = null;
  
  String zitiVersion = null;
  
  String zitiRouterLinuxBinary = null;
  
  String zitiTunnelLinuxBinarySha256 = null;
  
  String zitiAndroidEdge = null;
  
  String zitiTunnelLinuxBinaryMd5 = null;
  
  String zitiCliLinuxBinarySha256 = null;
  
  bool active = null;
  InlineResponse20019710();

  @override
  String toString() {
    return 'InlineResponse20019710[zitiCliLinuxBinarySha1=$zitiCliLinuxBinarySha1, zitiTunnelLinuxBinary=$zitiTunnelLinuxBinary, zitiTunnelLinuxBinarySha1=$zitiTunnelLinuxBinarySha1, zitiControllerBinary=$zitiControllerBinary, zitiCliLinuxBinaryMd5=$zitiCliLinuxBinaryMd5, zitiRouterLinuxBinarySha1=$zitiRouterLinuxBinarySha1, zitiRouterLinuxBinarySha256=$zitiRouterLinuxBinarySha256, zitiRouterLinuxBinaryMd5=$zitiRouterLinuxBinaryMd5, zitiWindowsDesktopEdge=$zitiWindowsDesktopEdge, zitiMacDesktopEdge=$zitiMacDesktopEdge, zitiControllerBinarySha1=$zitiControllerBinarySha1, zitiControllerBinaryMd5=$zitiControllerBinaryMd5, zitiControllerBinarySha256=$zitiControllerBinarySha256, zitiIosEdge=$zitiIosEdge, zitiCliLinuxBinary=$zitiCliLinuxBinary, zitiVersion=$zitiVersion, zitiRouterLinuxBinary=$zitiRouterLinuxBinary, zitiTunnelLinuxBinarySha256=$zitiTunnelLinuxBinarySha256, zitiAndroidEdge=$zitiAndroidEdge, zitiTunnelLinuxBinaryMd5=$zitiTunnelLinuxBinaryMd5, zitiCliLinuxBinarySha256=$zitiCliLinuxBinarySha256, active=$active, ]';
  }

  InlineResponse20019710.fromJson(Map<String, dynamic> json) {
    if (json == null) return;
    zitiCliLinuxBinarySha1 = json['zitiCliLinuxBinary.sha-1'];
    zitiTunnelLinuxBinary = json['zitiTunnelLinuxBinary'];
    zitiTunnelLinuxBinarySha1 = json['zitiTunnelLinuxBinary.sha-1'];
    zitiControllerBinary = json['zitiControllerBinary'];
    zitiCliLinuxBinaryMd5 = json['zitiCliLinuxBinary.md5'];
    zitiRouterLinuxBinarySha1 = json['zitiRouterLinuxBinary.sha-1'];
    zitiRouterLinuxBinarySha256 = json['zitiRouterLinuxBinary.sha-256'];
    zitiRouterLinuxBinaryMd5 = json['zitiRouterLinuxBinary.md5'];
    zitiWindowsDesktopEdge = json['zitiWindowsDesktopEdge'];
    zitiMacDesktopEdge = json['zitiMacDesktopEdge'];
    zitiControllerBinarySha1 = json['zitiControllerBinary.sha-1'];
    zitiControllerBinaryMd5 = json['zitiControllerBinary.md5'];
    zitiControllerBinarySha256 = json['zitiControllerBinary.sha-256'];
    zitiIosEdge = json['zitiIosEdge'];
    zitiCliLinuxBinary = json['zitiCliLinuxBinary'];
    zitiVersion = json['zitiVersion'];
    zitiRouterLinuxBinary = json['zitiRouterLinuxBinary'];
    zitiTunnelLinuxBinarySha256 = json['zitiTunnelLinuxBinary.sha-256'];
    zitiAndroidEdge = json['zitiAndroidEdge'];
    zitiTunnelLinuxBinaryMd5 = json['zitiTunnelLinuxBinary.md5'];
    zitiCliLinuxBinarySha256 = json['zitiCliLinuxBinary.sha-256'];
    active = json['active'];
  }

  Map<String, dynamic> toJson() {
    Map <String, dynamic> json = {};
    if (zitiCliLinuxBinarySha1 != null)
      json['zitiCliLinuxBinary.sha-1'] = zitiCliLinuxBinarySha1;
    if (zitiTunnelLinuxBinary != null)
      json['zitiTunnelLinuxBinary'] = zitiTunnelLinuxBinary;
    if (zitiTunnelLinuxBinarySha1 != null)
      json['zitiTunnelLinuxBinary.sha-1'] = zitiTunnelLinuxBinarySha1;
    if (zitiControllerBinary != null)
      json['zitiControllerBinary'] = zitiControllerBinary;
    if (zitiCliLinuxBinaryMd5 != null)
      json['zitiCliLinuxBinary.md5'] = zitiCliLinuxBinaryMd5;
    if (zitiRouterLinuxBinarySha1 != null)
      json['zitiRouterLinuxBinary.sha-1'] = zitiRouterLinuxBinarySha1;
    if (zitiRouterLinuxBinarySha256 != null)
      json['zitiRouterLinuxBinary.sha-256'] = zitiRouterLinuxBinarySha256;
    if (zitiRouterLinuxBinaryMd5 != null)
      json['zitiRouterLinuxBinary.md5'] = zitiRouterLinuxBinaryMd5;
    if (zitiWindowsDesktopEdge != null)
      json['zitiWindowsDesktopEdge'] = zitiWindowsDesktopEdge;
    if (zitiMacDesktopEdge != null)
      json['zitiMacDesktopEdge'] = zitiMacDesktopEdge;
    if (zitiControllerBinarySha1 != null)
      json['zitiControllerBinary.sha-1'] = zitiControllerBinarySha1;
    if (zitiControllerBinaryMd5 != null)
      json['zitiControllerBinary.md5'] = zitiControllerBinaryMd5;
    if (zitiControllerBinarySha256 != null)
      json['zitiControllerBinary.sha-256'] = zitiControllerBinarySha256;
    if (zitiIosEdge != null)
      json['zitiIosEdge'] = zitiIosEdge;
    if (zitiCliLinuxBinary != null)
      json['zitiCliLinuxBinary'] = zitiCliLinuxBinary;
    if (zitiVersion != null)
      json['zitiVersion'] = zitiVersion;
    if (zitiRouterLinuxBinary != null)
      json['zitiRouterLinuxBinary'] = zitiRouterLinuxBinary;
    if (zitiTunnelLinuxBinarySha256 != null)
      json['zitiTunnelLinuxBinary.sha-256'] = zitiTunnelLinuxBinarySha256;
    if (zitiAndroidEdge != null)
      json['zitiAndroidEdge'] = zitiAndroidEdge;
    if (zitiTunnelLinuxBinaryMd5 != null)
      json['zitiTunnelLinuxBinary.md5'] = zitiTunnelLinuxBinaryMd5;
    if (zitiCliLinuxBinarySha256 != null)
      json['zitiCliLinuxBinary.sha-256'] = zitiCliLinuxBinarySha256;
    if (active != null)
      json['active'] = active;
    return json;
  }

  static List<InlineResponse20019710> listFromJson(List<dynamic> json) {
    return json == null ? List<InlineResponse20019710>() : json.map((value) => InlineResponse20019710.fromJson(value)).toList();
  }

  static Map<String, InlineResponse20019710> mapFromJson(Map<String, dynamic> json) {
    var map = Map<String, InlineResponse20019710>();
    if (json != null && json.isNotEmpty) {
      json.forEach((String key, dynamic value) => map[key] = InlineResponse20019710.fromJson(value));
    }
    return map;
  }

  // maps a json object with a list of InlineResponse20019710-objects as value to a dart map
  static Map<String, List<InlineResponse20019710>> mapListFromJson(Map<String, dynamic> json) {
    var map = Map<String, List<InlineResponse20019710>>();
     if (json != null && json.isNotEmpty) {
       json.forEach((String key, dynamic value) {
         map[key] = InlineResponse20019710.listFromJson(value);
       });
     }
     return map;
  }
}

