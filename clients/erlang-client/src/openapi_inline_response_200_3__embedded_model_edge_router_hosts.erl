-module(openapi_inline_response_200_3__embedded_model_edge_router_hosts).

-export([encode/1]).

-export_type([openapi_inline_response_200_3__embedded_model_edge_router_hosts/0]).

-type openapi_inline_response_200_3__embedded_model_edge_router_hosts() ::
    #{ 'edgeRouterId' := binary(),
       'serverEgress' := openapi_inline_response_200_3__embedded_model_server_egress_1:openapi_inline_response_200_3__embedded_model_server_egress_1()
     }.

encode(#{ 'edgeRouterId' := EdgeRouterId,
          'serverEgress' := ServerEgress
        }) ->
    #{ 'edgeRouterId' => EdgeRouterId,
       'serverEgress' => ServerEgress
     }.
