part of openapi.api;

class InlineResponse2001Page {
  
  num number = null;
  
  num size = null;
  
  num totalElements = null;
  
  num totalPages = null;
  InlineResponse2001Page();

  @override
  String toString() {
    return 'InlineResponse2001Page[number=$number, size=$size, totalElements=$totalElements, totalPages=$totalPages, ]';
  }

  InlineResponse2001Page.fromJson(Map<String, dynamic> json) {
    if (json == null) return;
    number = json['number'];
    size = json['size'];
    totalElements = json['totalElements'];
    totalPages = json['totalPages'];
  }

  Map<String, dynamic> toJson() {
    Map <String, dynamic> json = {};
    if (number != null)
      json['number'] = number;
    if (size != null)
      json['size'] = size;
    if (totalElements != null)
      json['totalElements'] = totalElements;
    if (totalPages != null)
      json['totalPages'] = totalPages;
    return json;
  }

  static List<InlineResponse2001Page> listFromJson(List<dynamic> json) {
    return json == null ? List<InlineResponse2001Page>() : json.map((value) => InlineResponse2001Page.fromJson(value)).toList();
  }

  static Map<String, InlineResponse2001Page> mapFromJson(Map<String, dynamic> json) {
    var map = Map<String, InlineResponse2001Page>();
    if (json != null && json.isNotEmpty) {
      json.forEach((String key, dynamic value) => map[key] = InlineResponse2001Page.fromJson(value));
    }
    return map;
  }

  // maps a json object with a list of InlineResponse2001Page-objects as value to a dart map
  static Map<String, List<InlineResponse2001Page>> mapListFromJson(Map<String, dynamic> json) {
    var map = Map<String, List<InlineResponse2001Page>>();
     if (json != null && json.isNotEmpty) {
       json.forEach((String key, dynamic value) {
         map[key] = InlineResponse2001Page.listFromJson(value);
       });
     }
     return map;
  }
}

