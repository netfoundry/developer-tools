-module(openapi_inline_response_202_3_model).

-export([encode/1]).

-export_type([openapi_inline_response_202_3_model/0]).

-type openapi_inline_response_202_3_model() ::
    #{ 'bindEndpointAttributes' := list(),
       'clientIngress' := openapi_inline_response_202_3_model_client_ingress:openapi_inline_response_202_3_model_client_ingress(),
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
