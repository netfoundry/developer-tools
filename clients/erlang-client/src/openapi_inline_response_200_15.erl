-module(openapi_inline_response_200_15).

-export([encode/1]).

-export_type([openapi_inline_response_200_15/0]).

-type openapi_inline_response_200_15() ::
    #{ '_embedded' := openapi_inline_response_200_15__embedded:openapi_inline_response_200_15__embedded(),
       '_links' := openapi_inline_response_200_2__embedded__links:openapi_inline_response_200_2__embedded__links(),
       'page' := openapi_inline_response_200_1_page:openapi_inline_response_200_1_page()
     }.

encode(#{ '_embedded' := Embedded,
          '_links' := Links,
          'page' := Page
        }) ->
    #{ '_embedded' => Embedded,
       '_links' => Links,
       'page' => Page
     }.
