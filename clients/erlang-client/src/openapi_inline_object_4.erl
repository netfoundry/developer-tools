-module(openapi_inline_object_4).

-export([encode/1]).

-export_type([openapi_inline_object_4/0]).

-type openapi_inline_object_4() ::
    #{ 'serviceAttributes' := list(),
       'networkId' := binary(),
       'name' := binary(),
       'postureCheckAttributes' := list(),
       'endpointAttributes' := list()
     }.

encode(#{ 'serviceAttributes' := ServiceAttributes,
          'networkId' := NetworkId,
          'name' := Name,
          'postureCheckAttributes' := PostureCheckAttributes,
          'endpointAttributes' := EndpointAttributes
        }) ->
    #{ 'serviceAttributes' => ServiceAttributes,
       'networkId' => NetworkId,
       'name' => Name,
       'postureCheckAttributes' => PostureCheckAttributes,
       'endpointAttributes' => EndpointAttributes
     }.
