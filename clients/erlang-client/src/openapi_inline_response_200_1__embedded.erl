-module(openapi_inline_response_200_1__embedded).

-export([encode/1]).

-export_type([openapi_inline_response_200_1__embedded/0]).

-type openapi_inline_response_200_1__embedded() ::
    #{ 'networkList' := list()
     }.

encode(#{ 'networkList' := NetworkList
        }) ->
    #{ 'networkList' => NetworkList
     }.
