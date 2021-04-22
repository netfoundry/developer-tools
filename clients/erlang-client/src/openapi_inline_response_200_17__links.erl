-module(openapi_inline_response_200_17__links).

-export([encode/1]).

-export_type([openapi_inline_response_200_17__links/0]).

-type openapi_inline_response_200_17__links() ::
    #{ 'first' := openapi_inline_response_200__links_self:openapi_inline_response_200__links_self(),
       'last' := openapi_inline_response_200__links_self:openapi_inline_response_200__links_self()
     }.

encode(#{ 'first' := First,
          'last' := Last
        }) ->
    #{ 'first' => First,
       'last' => Last
     }.
