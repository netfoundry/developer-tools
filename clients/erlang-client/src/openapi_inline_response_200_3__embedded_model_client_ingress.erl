-module(openapi_inline_response_200_3__embedded_model_client_ingress).

-export([encode/1]).

-export_type([openapi_inline_response_200_3__embedded_model_client_ingress/0]).

-type openapi_inline_response_200_3__embedded_model_client_ingress() ::
    #{ 'protocols' => list(),
       'host' => binary(),
       'ports' => list(),
       'port' => integer(),
       'addresses' => list()
     }.

encode(#{ 'protocols' := Protocols,
          'host' := Host,
          'ports' := Ports,
          'port' := Port,
          'addresses' := Addresses
        }) ->
    #{ 'protocols' => Protocols,
       'host' => Host,
       'ports' => Ports,
       'port' => Port,
       'addresses' => Addresses
     }.
