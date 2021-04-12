-module(openapi_inline_response_200_14_updated_at).

-export([encode/1]).

-export_type([openapi_inline_response_200_14_updated_at/0]).

-type openapi_inline_response_200_14_updated_at() ::
    #{ 'epochSecond' := integer(),
       'nano' := integer()
     }.

encode(#{ 'epochSecond' := EpochSecond,
          'nano' := Nano
        }) ->
    #{ 'epochSecond' => EpochSecond,
       'nano' => Nano
     }.
