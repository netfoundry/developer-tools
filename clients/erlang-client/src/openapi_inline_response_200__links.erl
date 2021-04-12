-module(openapi_inline_response_200__links).

-export([encode/1]).

-export_type([openapi_inline_response_200__links/0]).

-type openapi_inline_response_200__links() ::
    #{ 'network' := openapi_inline_response_200__links_network:openapi_inline_response_200__links_network(),
       'self' := openapi_inline_response_200__links_self:openapi_inline_response_200__links_self()
     }.

encode(#{ 'network' := Network,
          'self' := Self
        }) ->
    #{ 'network' => Network,
       'self' => Self
     }.
