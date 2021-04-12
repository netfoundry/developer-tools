-module(openapi_inline_response_200_1__links).

-export([encode/1]).

-export_type([openapi_inline_response_200_1__links/0]).

-type openapi_inline_response_200_1__links() ::
    #{ 'self' := openapi_inline_response_200_1__links_self:openapi_inline_response_200_1__links_self()
     }.

encode(#{ 'self' := Self
        }) ->
    #{ 'self' => Self
     }.
