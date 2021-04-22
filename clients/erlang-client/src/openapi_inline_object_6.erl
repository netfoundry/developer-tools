-module(openapi_inline_object_6).

-export([encode/1]).

-export_type([openapi_inline_object_6/0]).

-type openapi_inline_object_6() ::
    #{ 'networkId' := binary(),
       'name' := binary(),
       'attributes' := list(),
       'linkListener' := boolean(),
       'dataCenterId' => binary()
     }.

encode(#{ 'networkId' := NetworkId,
          'name' := Name,
          'attributes' := Attributes,
          'linkListener' := LinkListener,
          'dataCenterId' := DataCenterId
        }) ->
    #{ 'networkId' => NetworkId,
       'name' => Name,
       'attributes' => Attributes,
       'linkListener' => LinkListener,
       'dataCenterId' => DataCenterId
     }.
