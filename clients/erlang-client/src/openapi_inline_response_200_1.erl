-module(openapi_inline_response_200_1).

-export([encode/1]).

-export_type([openapi_inline_response_200_1/0]).

-type openapi_inline_response_200_1() ::
    #{ '_embedded' := openapi_inline_response_200_1__embedded:openapi_inline_response_200_1__embedded(),
       '_links' := openapi_inline_response_200_1__links:openapi_inline_response_200_1__links(),
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
