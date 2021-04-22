-module(openapi_inline_response_500_1_status).

-export([encode/1]).

-export_type([openapi_inline_response_500_1_status/0]).

-type openapi_inline_response_500_1_status() ::
    #{ 'code' := integer(),
       'label' := binary()
     }.

encode(#{ 'code' := Code,
          'label' := Label
        }) ->
    #{ 'code' => Code,
       'label' => Label
     }.
