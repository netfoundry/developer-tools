-module(openapi_inline_response_500_1).

-export([encode/1]).

-export_type([openapi_inline_response_500_1/0]).

-type openapi_inline_response_500_1() ::
    #{ 'errors' := list(),
       'status' := openapi_inline_response_500_1_status:openapi_inline_response_500_1_status(),
       'traceId' := binary()
     }.

encode(#{ 'errors' := Errors,
          'status' := Status,
          'traceId' := TraceId
        }) ->
    #{ 'errors' => Errors,
       'status' => Status,
       'traceId' => TraceId
     }.
