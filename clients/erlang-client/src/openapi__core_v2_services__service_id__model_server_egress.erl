-module(openapi__core_v2_services__service_id__model_server_egress).

-export([encode/1]).

-export_type([openapi__core_v2_services__service_id__model_server_egress/0]).

-type openapi__core_v2_services__service_id__model_server_egress() ::
    #{ 'dialInterceptAddress' := openapi_any_type:openapi_any_type(),
       'dialInterceptPort' := openapi_any_type:openapi_any_type(),
       'port' := integer(),
       'dialInterceptProtocol' := boolean(),
       'address' := binary(),
       'protocol' := openapi_any_type:openapi_any_type()
     }.

encode(#{ 'dialInterceptAddress' := DialInterceptAddress,
          'dialInterceptPort' := DialInterceptPort,
          'port' := Port,
          'dialInterceptProtocol' := DialInterceptProtocol,
          'address' := Address,
          'protocol' := Protocol
        }) ->
    #{ 'dialInterceptAddress' => DialInterceptAddress,
       'dialInterceptPort' => DialInterceptPort,
       'port' => Port,
       'dialInterceptProtocol' => DialInterceptProtocol,
       'address' => Address,
       'protocol' => Protocol
     }.
