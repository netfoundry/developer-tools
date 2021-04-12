part of openapi.api;

class InlineResponse2024Links {
  
  InlineResponse200LinksSelf services = null;
  
  InlineResponse200LinksNetwork processExecution = null;
  
  InlineResponse200LinksNetwork networks = null;
  
  InlineResponse200LinksSelf appWans = null;
  
  InlineResponse200LinksSelf endpoints = null;
  
  InlineResponse200LinksSelf certificateAuthorities = null;
  
  InlineResponse200LinksSelf self = null;
  
  InlineResponse200LinksNetwork processExecutions = null;
  
  InlineResponse200LinksSelf networkControllers = null;
  
  InlineResponse200LinksSelf postureChecks = null;
  
  InlineResponse200LinksSelf edgeRouters = null;
  
  InlineResponse200LinksSelf edgeRouterPolicies = null;
  InlineResponse2024Links();

  @override
  String toString() {
    return 'InlineResponse2024Links[services=$services, processExecution=$processExecution, networks=$networks, appWans=$appWans, endpoints=$endpoints, certificateAuthorities=$certificateAuthorities, self=$self, processExecutions=$processExecutions, networkControllers=$networkControllers, postureChecks=$postureChecks, edgeRouters=$edgeRouters, edgeRouterPolicies=$edgeRouterPolicies, ]';
  }

  InlineResponse2024Links.fromJson(Map<String, dynamic> json) {
    if (json == null) return;
    services = (json['services'] == null) ?
      null :
      InlineResponse200LinksSelf.fromJson(json['services']);
    processExecution = (json['process-execution'] == null) ?
      null :
      InlineResponse200LinksNetwork.fromJson(json['process-execution']);
    networks = (json['networks'] == null) ?
      null :
      InlineResponse200LinksNetwork.fromJson(json['networks']);
    appWans = (json['app-wans'] == null) ?
      null :
      InlineResponse200LinksSelf.fromJson(json['app-wans']);
    endpoints = (json['endpoints'] == null) ?
      null :
      InlineResponse200LinksSelf.fromJson(json['endpoints']);
    certificateAuthorities = (json['certificate-authorities'] == null) ?
      null :
      InlineResponse200LinksSelf.fromJson(json['certificate-authorities']);
    self = (json['self'] == null) ?
      null :
      InlineResponse200LinksSelf.fromJson(json['self']);
    processExecutions = (json['process-executions'] == null) ?
      null :
      InlineResponse200LinksNetwork.fromJson(json['process-executions']);
    networkControllers = (json['network-controllers'] == null) ?
      null :
      InlineResponse200LinksSelf.fromJson(json['network-controllers']);
    postureChecks = (json['posture-checks'] == null) ?
      null :
      InlineResponse200LinksSelf.fromJson(json['posture-checks']);
    edgeRouters = (json['edge-routers'] == null) ?
      null :
      InlineResponse200LinksSelf.fromJson(json['edge-routers']);
    edgeRouterPolicies = (json['edge-router-policies'] == null) ?
      null :
      InlineResponse200LinksSelf.fromJson(json['edge-router-policies']);
  }

  Map<String, dynamic> toJson() {
    Map <String, dynamic> json = {};
    if (services != null)
      json['services'] = services;
    if (processExecution != null)
      json['process-execution'] = processExecution;
    if (networks != null)
      json['networks'] = networks;
    if (appWans != null)
      json['app-wans'] = appWans;
    if (endpoints != null)
      json['endpoints'] = endpoints;
    if (certificateAuthorities != null)
      json['certificate-authorities'] = certificateAuthorities;
    if (self != null)
      json['self'] = self;
    if (processExecutions != null)
      json['process-executions'] = processExecutions;
    if (networkControllers != null)
      json['network-controllers'] = networkControllers;
    if (postureChecks != null)
      json['posture-checks'] = postureChecks;
    if (edgeRouters != null)
      json['edge-routers'] = edgeRouters;
    if (edgeRouterPolicies != null)
      json['edge-router-policies'] = edgeRouterPolicies;
    return json;
  }

  static List<InlineResponse2024Links> listFromJson(List<dynamic> json) {
    return json == null ? List<InlineResponse2024Links>() : json.map((value) => InlineResponse2024Links.fromJson(value)).toList();
  }

  static Map<String, InlineResponse2024Links> mapFromJson(Map<String, dynamic> json) {
    var map = Map<String, InlineResponse2024Links>();
    if (json != null && json.isNotEmpty) {
      json.forEach((String key, dynamic value) => map[key] = InlineResponse2024Links.fromJson(value));
    }
    return map;
  }

  // maps a json object with a list of InlineResponse2024Links-objects as value to a dart map
  static Map<String, List<InlineResponse2024Links>> mapListFromJson(Map<String, dynamic> json) {
    var map = Map<String, List<InlineResponse2024Links>>();
     if (json != null && json.isNotEmpty) {
       json.forEach((String key, dynamic value) {
         map[key] = InlineResponse2024Links.listFromJson(value);
       });
     }
     return map;
  }
}

