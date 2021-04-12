-module(openapi__core_v2_services_model_server_egress).

-export([encode/1]).

-export_type([openapi__core_v2_services_model_server_egress/0]).

-type openapi__core_v2_services_model_server_egress() ::
    #{ 'host' := binary(),
       'port' := openapi_any_type:openapi_any_type(),
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
