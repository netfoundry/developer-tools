-module(openapi__core_v2_endpoints_enrollment_method).

-export([encode/1]).

-export_type([openapi__core_v2_endpoints_enrollment_method/0]).

-type openapi__core_v2_endpoints_enrollment_method() ::
    #{ 'ott' := boolean()
     }.

encode(#{ 'ott' := Ott
        }) ->
    #{ 'ott' => Ott
     }.
