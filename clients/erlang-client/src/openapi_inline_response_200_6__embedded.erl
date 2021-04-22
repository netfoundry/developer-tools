-module(openapi_inline_response_200_6__embedded).

-export([encode/1]).

-export_type([openapi_inline_response_200_6__embedded/0]).

-type openapi_inline_response_200_6__embedded() ::
    #{ 'appWanList' := list()
     }.

encode(#{ 'appWanList' := AppWanList
        }) ->
    #{ 'appWanList' => AppWanList
     }.
