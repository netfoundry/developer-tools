-module(openapi_inline_response_202_3_model_client_ingress).

-export([encode/1]).

-export_type([openapi_inline_response_202_3_model_client_ingress/0]).

-type openapi_inline_response_202_3_model_client_ingress() ::
    #{ 'addresses' := list(),
       'ports' := list(),
       'protocols' := list()
     }.

encode(#{ 'addresses' := Addresses,
          'ports' := Ports,
          'protocols' := Protocols
        }) ->
    #{ 'addresses' => Addresses,
       'ports' => Ports,
       'protocols' => Protocols
     }.
