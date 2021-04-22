-module(openapi__core_v2_services_model_edge_router_hosts).

-export([encode/1]).

-export_type([openapi__core_v2_services_model_edge_router_hosts/0]).

-type openapi__core_v2_services_model_edge_router_hosts() ::
    #{ 'edgeRouterId' := binary(),
       'serverEgress' := openapi__core_v2_services_model_server_egress:openapi__core_v2_services_model_server_egress()
     }.

encode(#{ 'edgeRouterId' := EdgeRouterId,
          'serverEgress' := ServerEgress
        }) ->
    #{ 'edgeRouterId' => EdgeRouterId,
       'serverEgress' => ServerEgress
     }.
