-module(openapi_inline_response_200_2__embedded).

-export([encode/1]).

-export_type([openapi_inline_response_200_2__embedded/0]).

-type openapi_inline_response_200_2__embedded() ::
    #{ 'dataCenters' := list()
     }.

encode(#{ 'dataCenters' := DataCenters
        }) ->
    #{ 'dataCenters' => DataCenters
     }.
