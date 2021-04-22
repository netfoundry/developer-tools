-module(openapi__core_v2_services__service_id__model).

-export([encode/1]).

-export_type([openapi__core_v2_services__service_id__model/0]).

-type openapi__core_v2_services__service_id__model() ::
    #{ 'bindEndpointAttributes' := list(),
       'clientIngress' := openapi__core_v2_services__service_id__model_client_ingress:openapi__core_v2_services__service_id__model_client_ingress(),
       'edgeRouterAttributes' := list(),
       'serverEgress' := openapi__core_v2_services__service_id__model_server_egress:openapi__core_v2_services__service_id__model_server_egress()
     }.

encode(#{ 'bindEndpointAttributes' := BindEndpointAttributes,
          'clientIngress' := ClientIngress,
          'edgeRouterAttributes' := EdgeRouterAttributes,
          'serverEgress' := ServerEgress
        }) ->
    #{ 'bindEndpointAttributes' => BindEndpointAttributes,
       'clientIngress' => ClientIngress,
       'edgeRouterAttributes' => EdgeRouterAttributes,
       'serverEgress' => ServerEgress
     }.
