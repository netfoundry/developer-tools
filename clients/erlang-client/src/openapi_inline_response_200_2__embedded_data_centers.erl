-module(openapi_inline_response_200_2__embedded_data_centers).

-export([encode/1]).

-export_type([openapi_inline_response_200_2__embedded_data_centers/0]).

-type openapi_inline_response_200_2__embedded_data_centers() ::
    #{ 'city' := openapi_any_type:openapi_any_type(),
       'continentCode' := openapi_any_type:openapi_any_type(),
       'stateCode' := openapi_any_type:openapi_any_type(),
       'lng' := integer(),
       'provider' := binary(),
       'stateName' := openapi_any_type:openapi_any_type(),
       'continentName' := openapi_any_type:openapi_any_type(),
       'isp' := openapi_any_type:openapi_any_type(),
       'locationCode' := binary(),
       'countryName' := openapi_any_type:openapi_any_type(),
       'id' := binary(),
       'countryCode' := openapi_any_type:openapi_any_type(),
       'address' := openapi_any_type:openapi_any_type(),
       'locationName' := binary(),
       'lat' := integer(),
       '_links' := openapi_inline_response_200_2__embedded__links:openapi_inline_response_200_2__embedded__links()
     }.

encode(#{ 'city' := City,
          'continentCode' := ContinentCode,
          'stateCode' := StateCode,
          'lng' := Lng,
          'provider' := Provider,
          'stateName' := StateName,
          'continentName' := ContinentName,
          'isp' := Isp,
          'locationCode' := LocationCode,
          'countryName' := CountryName,
          'id' := Id,
          'countryCode' := CountryCode,
          'address' := Address,
          'locationName' := LocationName,
          'lat' := Lat,
          '_links' := Links
        }) ->
    #{ 'city' => City,
       'continentCode' => ContinentCode,
       'stateCode' => StateCode,
       'lng' => Lng,
       'provider' => Provider,
       'stateName' => StateName,
       'continentName' => ContinentName,
       'isp' => Isp,
       'locationCode' => LocationCode,
       'countryName' => CountryName,
       'id' => Id,
       'countryCode' => CountryCode,
       'address' => Address,
       'locationName' => LocationName,
       'lat' => Lat,
       '_links' => Links
     }.
