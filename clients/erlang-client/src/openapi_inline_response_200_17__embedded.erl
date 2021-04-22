-module(openapi_inline_response_200_17__embedded).

-export([encode/1]).

-export_type([openapi_inline_response_200_17__embedded/0]).

-type openapi_inline_response_200_17__embedded() ::
    #{ 'organizations' := list()
     }.

encode(#{ 'organizations' := Organizations
        }) ->
    #{ 'organizations' => Organizations
     }.
