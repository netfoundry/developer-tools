-module(openapi_inline_response_200_3__embedded_model_server_egress).

-export([encode/1]).

-export_type([openapi_inline_response_200_3__embedded_model_server_egress/0]).

-type openapi_inline_response_200_3__embedded_model_server_egress() ::
    #{ 'host' => binary(),
       'dialInterceptAddress' => openapi_any_type:openapi_any_type(),
       'dialInterceptPort' => openapi_any_type:openapi_any_type(),
       'port' := integer(),
       'dialInterceptProtocol' => boolean(),
       'address' => binary(),
       'protocol' := openapi_any_type:openapi_any_type()
     }.

encode(#{ 'host' := Host,
          'dialInterceptAddress' := DialInterceptAddress,
          'dialInterceptPort' := DialInterceptPort,
          'port' := Port,
          'dialInterceptProtocol' := DialInterceptProtocol,
          'address' := Address,
          'protocol' := Protocol
        }) ->
    #{ 'host' => Host,
       'dialInterceptAddress' => DialInterceptAddress,
       'dialInterceptPort' => DialInterceptPort,
       'port' => Port,
       'dialInterceptProtocol' => DialInterceptProtocol,
       'address' => Address,
       'protocol' => Protocol
     }.
