-module(openapi_inline_response_200_3__embedded).

-export([encode/1]).

-export_type([openapi_inline_response_200_3__embedded/0]).

-type openapi_inline_response_200_3__embedded() ::
    #{ 'serviceList' := list()
     }.

encode(#{ 'serviceList' := ServiceList
        }) ->
    #{ 'serviceList' => ServiceList
     }.
