-module(openapi_inline_response_200_17).

-export([encode/1]).

-export_type([openapi_inline_response_200_17/0]).

-type openapi_inline_response_200_17() ::
    #{ '_embedded' := openapi_inline_response_200_17__embedded:openapi_inline_response_200_17__embedded(),
       '_links' := openapi_inline_response_200_17__links:openapi_inline_response_200_17__links(),
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
