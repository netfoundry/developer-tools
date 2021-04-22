-module(openapi_inline_response_200_1_page).

-export([encode/1]).

-export_type([openapi_inline_response_200_1_page/0]).

-type openapi_inline_response_200_1_page() ::
    #{ 'number' := integer(),
       'size' := integer(),
       'totalElements' := integer(),
       'totalPages' := integer()
     }.

encode(#{ 'number' := Number,
          'size' := Size,
          'totalElements' := TotalElements,
          'totalPages' := TotalPages
        }) ->
    #{ 'number' => Number,
       'size' => Size,
       'totalElements' => TotalElements,
       'totalPages' => TotalPages
     }.
