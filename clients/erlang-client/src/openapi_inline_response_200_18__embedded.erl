-module(openapi_inline_response_200_18__embedded).

-export([encode/1]).

-export_type([openapi_inline_response_200_18__embedded/0]).

-type openapi_inline_response_200_18__embedded() ::
    #{ 'edgeRouterList' := list()
     }.

encode(#{ 'edgeRouterList' := EdgeRouterList
        }) ->
    #{ 'edgeRouterList' => EdgeRouterList
     }.
