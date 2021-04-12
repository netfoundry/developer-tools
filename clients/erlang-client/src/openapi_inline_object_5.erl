-module(openapi_inline_object_5).

-export([encode/1]).

-export_type([openapi_inline_object_5/0]).

-type openapi_inline_object_5() ::
    #{ 'attributes' := list(),
       'enrollmentMethod' := openapi__core_v2_endpoints_enrollment_method:openapi__core_v2_endpoints_enrollment_method(),
       'name' := binary(),
       'networkId' := binary()
     }.

encode(#{ 'attributes' := Attributes,
          'enrollmentMethod' := EnrollmentMethod,
          'name' := Name,
          'networkId' := NetworkId
        }) ->
    #{ 'attributes' => Attributes,
       'enrollmentMethod' => EnrollmentMethod,
       'name' => Name,
       'networkId' => NetworkId
     }.
