part of openapi.api;

class CoreV2EndpointsEnrollmentMethod {
  
  bool ott = null;
  CoreV2EndpointsEnrollmentMethod();

  @override
  String toString() {
    return 'CoreV2EndpointsEnrollmentMethod[ott=$ott, ]';
  }

  CoreV2EndpointsEnrollmentMethod.fromJson(Map<String, dynamic> json) {
    if (json == null) return;
    ott = json['ott'];
  }

  Map<String, dynamic> toJson() {
    Map <String, dynamic> json = {};
    if (ott != null)
      json['ott'] = ott;
    return json;
  }

  static List<CoreV2EndpointsEnrollmentMethod> listFromJson(List<dynamic> json) {
    return json == null ? List<CoreV2EndpointsEnrollmentMethod>() : json.map((value) => CoreV2EndpointsEnrollmentMethod.fromJson(value)).toList();
  }

  static Map<String, CoreV2EndpointsEnrollmentMethod> mapFromJson(Map<String, dynamic> json) {
    var map = Map<String, CoreV2EndpointsEnrollmentMethod>();
    if (json != null && json.isNotEmpty) {
      json.forEach((String key, dynamic value) => map[key] = CoreV2EndpointsEnrollmentMethod.fromJson(value));
    }
    return map;
  }

  // maps a json object with a list of CoreV2EndpointsEnrollmentMethod-objects as value to a dart map
  static Map<String, List<CoreV2EndpointsEnrollmentMethod>> mapListFromJson(Map<String, dynamic> json) {
    var map = Map<String, List<CoreV2EndpointsEnrollmentMethod>>();
     if (json != null && json.isNotEmpty) {
       json.forEach((String key, dynamic value) {
         map[key] = CoreV2EndpointsEnrollmentMethod.listFromJson(value);
       });
     }
     return map;
  }
}

