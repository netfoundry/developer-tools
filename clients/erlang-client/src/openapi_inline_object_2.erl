-module(openapi_inline_object_2).

-export([encode/1]).

-export_type([openapi_inline_object_2/0]).

-type openapi_inline_object_2() ::
    #{ 'edgeRouterAttributes' := list(),
       'endpointAttributes' := list(),
       'name' := binary(),
       'networkId' := binary()
     }.

encode(#{ 'edgeRouterAttributes' := EdgeRouterAttributes,
          'endpointAttributes' := EndpointAttributes,
          'name' := Name,
          'networkId' := NetworkId
        }) ->
    #{ 'edgeRouterAttributes' => EdgeRouterAttributes,
       'endpointAttributes' => EndpointAttributes,
       'name' => Name,
       'networkId' => NetworkId
     }.
