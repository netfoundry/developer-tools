-module(openapi__core_v2_services_model_client_ingress).

-export([encode/1]).

-export_type([openapi__core_v2_services_model_client_ingress/0]).

-type openapi__core_v2_services_model_client_ingress() ::
    #{ 'protocols' => list(),
       'host' => binary(),
       'ports' => list(),
       'port' => openapi_any_type:openapi_any_type(),
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
