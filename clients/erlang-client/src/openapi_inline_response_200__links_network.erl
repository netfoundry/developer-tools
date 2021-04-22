-module(openapi_inline_response_200__links_network).

-export([encode/1]).

-export_type([openapi_inline_response_200__links_network/0]).

-type openapi_inline_response_200__links_network() ::
    #{ 'href' := binary(),
       'profile' := binary()
     }.

encode(#{ 'href' := Href,
          'profile' := Profile
        }) ->
    #{ 'href' => Href,
       'profile' => Profile
     }.
