-module(openapi_inline_response_200__links_self).

-export([encode/1]).

-export_type([openapi_inline_response_200__links_self/0]).

-type openapi_inline_response_200__links_self() ::
    #{ 'href' := binary()
     }.

encode(#{ 'href' := Href
        }) ->
    #{ 'href' => Href
     }.
