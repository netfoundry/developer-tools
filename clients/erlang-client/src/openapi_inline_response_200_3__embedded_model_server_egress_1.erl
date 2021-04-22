-module(openapi_inline_response_200_3__embedded_model_server_egress_1).

-export([encode/1]).

-export_type([openapi_inline_response_200_3__embedded_model_server_egress_1/0]).

-type openapi_inline_response_200_3__embedded_model_server_egress_1() ::
    #{ 'host' := binary(),
       'port' := integer(),
       'protocol' := binary()
     }.

encode(#{ 'host' := Host,
          'port' := Port,
          'protocol' := Protocol
        }) ->
    #{ 'host' => Host,
       'port' => Port,
       'protocol' => Protocol
     }.
