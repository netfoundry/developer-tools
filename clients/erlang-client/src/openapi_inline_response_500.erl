-module(openapi_inline_response_500).

-export([encode/1]).

-export_type([openapi_inline_response_500/0]).

-type openapi_inline_response_500() ::
    #{ 'error' := binary(),
       'message' := binary(),
       'status' := integer(),
       'timestamp' := binary()
     }.

encode(#{ 'error' := Error,
          'message' := Message,
          'status' := Status,
          'timestamp' := Timestamp
        }) ->
    #{ 'error' => Error,
       'message' => Message,
       'status' => Status,
       'timestamp' => Timestamp
     }.
