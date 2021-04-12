-module(openapi_inline_response_200_3__embedded_model).

-export([encode/1]).

-export_type([openapi_inline_response_200_3__embedded_model/0]).

-type openapi_inline_response_200_3__embedded_model() ::
    #{ 'edgeRouterAttributes' := list(),
       'serverEgress' => openapi_inline_response_200_3__embedded_model_server_egress:openapi_inline_response_200_3__embedded_model_server_egress(),
       'bindEndpointAttributes' => list(),
       'clientIngress' := openapi_inline_response_200_3__embedded_model_client_ingress:openapi_inline_response_200_3__embedded_model_client_ingress(),
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
