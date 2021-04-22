-module(openapi__core_v2_services_model).

-export([encode/1]).

-export_type([openapi__core_v2_services_model/0]).

-type openapi__core_v2_services_model() ::
    #{ 'edgeRouterAttributes' := list(),
       'serverEgress' => openapi_inline_response_200_3__embedded_model_server_egress:openapi_inline_response_200_3__embedded_model_server_egress(),
       'bindEndpointAttributes' => list(),
       'clientIngress' := openapi__core_v2_services_model_client_ingress:openapi__core_v2_services_model_client_ingress(),
       'edgeRouterHosts' => list()
     }.

encode(#{ 'edgeRouterAttributes' := EdgeRouterAttributes,
          'serverEgress' := ServerEgress,
          'bindEndpointAttributes' := BindEndpointAttributes,
          'clientIngress' := ClientIngress,
          'edgeRouterHosts' := EdgeRouterHosts
        }) ->
    #{ 'edgeRouterAttributes' => EdgeRouterAttributes,
       'serverEgress' => ServerEgress,
       'bindEndpointAttributes' => BindEndpointAttributes,
       'clientIngress' => ClientIngress,
       'edgeRouterHosts' => EdgeRouterHosts
     }.
