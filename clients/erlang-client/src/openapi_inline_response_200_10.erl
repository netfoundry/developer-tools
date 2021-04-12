-module(openapi_inline_response_200_10).

-export([encode/1]).

-export_type([openapi_inline_response_200_10/0]).

-type openapi_inline_response_200_10() ::
    #{ '_links' := openapi_inline_response_200_2__embedded__links:openapi_inline_response_200_2__embedded__links(),
       'page' := openapi_inline_response_200_1_page:openapi_inline_response_200_1_page()
     }.

encode(#{ '_links' := Links,
          'page' := Page
        }) ->
    #{ '_links' => Links,
       'page' => Page
     }.
