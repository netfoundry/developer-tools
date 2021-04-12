-module(openapi_inline_response_200_1__links_self).

-export([encode/1]).

-export_type([openapi_inline_response_200_1__links_self/0]).

-type openapi_inline_response_200_1__links_self() ::
    #{ 'href' := binary(),
       'templated' := boolean()
     }.

encode(#{ 'href' := Href,
          'templated' := Templated
        }) ->
    #{ 'href' => Href,
       'templated' => Templated
     }.
