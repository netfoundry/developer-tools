-module(openapi_inline_response_200_15__embedded).

-export([encode/1]).

-export_type([openapi_inline_response_200_15__embedded/0]).

-type openapi_inline_response_200_15__embedded() ::
    #{ 'networkConfigMetadataList' := list()
     }.

encode(#{ 'networkConfigMetadataList' := NetworkConfigMetadataList
        }) ->
    #{ 'networkConfigMetadataList' => NetworkConfigMetadataList
     }.
