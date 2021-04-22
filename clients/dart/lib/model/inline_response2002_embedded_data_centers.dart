part of openapi.api;

class InlineResponse2002EmbeddedDataCenters {
  
  AnyType city = null;
  
  AnyType continentCode = null;
  
  AnyType stateCode = null;
  
  num lng = null;
  
  String provider = null;
  
  AnyType stateName = null;
  
  AnyType continentName = null;
  
  AnyType isp = null;
  
  String locationCode = null;
  
  AnyType countryName = null;
  
  String id = null;
  
  AnyType countryCode = null;
  
  AnyType address = null;
  
  String locationName = null;
  
  num lat = null;
  
  InlineResponse2002EmbeddedLinks links = null;
  InlineResponse2002EmbeddedDataCenters();

  @override
  String toString() {
    return 'InlineResponse2002EmbeddedDataCenters[city=$city, continentCode=$continentCode, stateCode=$stateCode, lng=$lng, provider=$provider, stateName=$stateName, continentName=$continentName, isp=$isp, locationCode=$locationCode, countryName=$countryName, id=$id, countryCode=$countryCode, address=$address, locationName=$locationName, lat=$lat, links=$links, ]';
  }

  InlineResponse2002EmbeddedDataCenters.fromJson(Map<String, dynamic> json) {
    if (json == null) return;
    city = json['city'];
    continentCode = json['continentCode'];
    stateCode = json['stateCode'];
    lng = json['lng'];
    provider = json['provider'];
    stateName = json['stateName'];
    continentName = json['continentName'];
    isp = json['isp'];
    locationCode = json['locationCode'];
    countryName = json['countryName'];
    id = json['id'];
    countryCode = json['countryCode'];
    address = json['address'];
    locationName = json['locationName'];
    lat = json['lat'];
    links = (json['_links'] == null) ?
      null :
      InlineResponse2002EmbeddedLinks.fromJson(json['_links']);
  }

  Map<String, dynamic> toJson() {
    Map <String, dynamic> json = {};
    if (city != null)
      json['city'] = city;
    if (continentCode != null)
      json['continentCode'] = continentCode;
    if (stateCode != null)
      json['stateCode'] = stateCode;
    if (lng != null)
      json['lng'] = lng;
    if (provider != null)
      json['provider'] = provider;
    if (stateName != null)
      json['stateName'] = stateName;
    if (continentName != null)
      json['continentName'] = continentName;
    if (isp != null)
      json['isp'] = isp;
    if (locationCode != null)
      json['locationCode'] = locationCode;
    if (countryName != null)
      json['countryName'] = countryName;
    if (id != null)
      json['id'] = id;
    if (countryCode != null)
      json['countryCode'] = countryCode;
    if (address != null)
      json['address'] = address;
    if (locationName != null)
      json['locationName'] = locationName;
    if (lat != null)
      json['lat'] = lat;
    if (links != null)
      json['_links'] = links;
    return json;
  }

  static List<InlineResponse2002EmbeddedDataCenters> listFromJson(List<dynamic> json) {
    return json == null ? List<InlineResponse2002EmbeddedDataCenters>() : json.map((value) => InlineResponse2002EmbeddedDataCenters.fromJson(value)).toList();
  }

  static Map<String, InlineResponse2002EmbeddedDataCenters> mapFromJson(Map<String, dynamic> json) {
    var map = Map<String, InlineResponse2002EmbeddedDataCenters>();
    if (json != null && json.isNotEmpty) {
      json.forEach((String key, dynamic value) => map[key] = InlineResponse2002EmbeddedDataCenters.fromJson(value));
    }
    return map;
  }

  // maps a json object with a list of InlineResponse2002EmbeddedDataCenters-objects as value to a dart map
  static Map<String, List<InlineResponse2002EmbeddedDataCenters>> mapListFromJson(Map<String, dynamic> json) {
    var map = Map<String, List<InlineResponse2002EmbeddedDataCenters>>();
     if (json != null && json.isNotEmpty) {
       json.forEach((String key, dynamic value) {
         map[key] = InlineResponse2002EmbeddedDataCenters.listFromJson(value);
       });
     }
     return map;
  }
}

