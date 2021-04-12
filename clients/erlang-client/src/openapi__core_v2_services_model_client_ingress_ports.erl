-module(openapi__core_v2_services_model_client_ingress_ports).

-export([encode/1]).

-export_type([openapi__core_v2_services_model_client_ingress_ports/0]).

-type openapi__core_v2_services_model_client_ingress_ports() ::
    #{ 'high' := binary(),
       'low' := binary()
     }.

encode(#{ 'high' := High,
          'low' := Low
        }) ->
    #{ 'high' => High,
       'low' => Low
     }.
