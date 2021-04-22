-module(openapi_inline_object).

-export([encode/1]).

-export_type([openapi_inline_object/0]).

-type openapi_inline_object() ::
    #{ 'name' := binary(),
       'size' := binary(),
       'locationCode' := binary(),
       'productVersion' := binary(),
       'networkGroupId' := binary()
     }.

encode(#{ 'name' := Name,
          'size' := Size,
          'locationCode' := LocationCode,
          'productVersion' := ProductVersion,
          'networkGroupId' := NetworkGroupId
        }) ->
    #{ 'name' => Name,
       'size' => Size,
       'locationCode' => LocationCode,
       'productVersion' => ProductVersion,
       'networkGroupId' => NetworkGroupId
     }.
