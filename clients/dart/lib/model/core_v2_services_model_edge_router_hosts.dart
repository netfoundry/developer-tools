part of openapi.api;

class CoreV2ServicesModelEdgeRouterHosts {
  
  String edgeRouterId = null;
  
  CoreV2ServicesModelServerEgress serverEgress = null;
  CoreV2ServicesModelEdgeRouterHosts();

  @override
  String toString() {
    return 'CoreV2ServicesModelEdgeRouterHosts[edgeRouterId=$edgeRouterId, serverEgress=$serverEgress, ]';
  }

  CoreV2ServicesModelEdgeRouterHosts.fromJson(Map<String, dynamic> json) {
    if (json == null) return;
    edgeRouterId = json['edgeRouterId'];
    serverEgress = (json['serverEgress'] == null) ?
      null :
      CoreV2ServicesModelServerEgress.fromJson(json['serverEgress']);
  }

  Map<String, dynamic> toJson() {
    Map <String, dynamic> json = {};
    if (edgeRouterId != null)
      json['edgeRouterId'] = edgeRouterId;
    if (serverEgress != null)
      json['serverEgress'] = serverEgress;
    return json;
  }

  static List<CoreV2ServicesModelEdgeRouterHosts> listFromJson(List<dynamic> json) {
    return json == null ? List<CoreV2ServicesModelEdgeRouterHosts>() : json.map((value) => CoreV2ServicesModelEdgeRouterHosts.fromJson(value)).toList();
  }

  static Map<String, CoreV2ServicesModelEdgeRouterHosts> mapFromJson(Map<String, dynamic> json) {
    var map = Map<String, CoreV2ServicesModelEdgeRouterHosts>();
    if (json != null && json.isNotEmpty) {
      json.forEach((String key, dynamic value) => map[key] = CoreV2ServicesModelEdgeRouterHosts.fromJson(value));
    }
    return map;
  }

  // maps a json object with a list of CoreV2ServicesModelEdgeRouterHosts-objects as value to a dart map
  static Map<String, List<CoreV2ServicesModelEdgeRouterHosts>> mapListFromJson(Map<String, dynamic> json) {
    var map = Map<String, List<CoreV2ServicesModelEdgeRouterHosts>>();
     if (json != null && json.isNotEmpty) {
       json.forEach((String key, dynamic value) {
         map[key] = CoreV2ServicesModelEdgeRouterHosts.listFromJson(value);
       });
     }
     return map;
  }
}

