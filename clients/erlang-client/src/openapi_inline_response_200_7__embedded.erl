-module(openapi_inline_response_200_7__embedded).

-export([encode/1]).

-export_type([openapi_inline_response_200_7__embedded/0]).

-type openapi_inline_response_200_7__embedded() ::
    #{ 'endpointList' := list()
     }.

encode(#{ 'endpointList' := EndpointList
        }) ->
    #{ 'endpointList' => EndpointList
     }.
