-module(openapi_inline_response_200_3__embedded_model_client_ingress_ports).

-export([encode/1]).

-export_type([openapi_inline_response_200_3__embedded_model_client_ingress_ports/0]).

-type openapi_inline_response_200_3__embedded_model_client_ingress_ports() ::
    #{ 'high' := integer(),
       'low' := integer()
     }.

encode(#{ 'high' := High,
          'low' := Low
        }) ->
    #{ 'high' => High,
       'low' => Low
     }.
