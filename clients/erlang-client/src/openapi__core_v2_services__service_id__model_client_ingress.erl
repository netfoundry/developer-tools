-module(openapi__core_v2_services__service_id__model_client_ingress).

-export([encode/1]).

-export_type([openapi__core_v2_services__service_id__model_client_ingress/0]).

-type openapi__core_v2_services__service_id__model_client_ingress() ::
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
