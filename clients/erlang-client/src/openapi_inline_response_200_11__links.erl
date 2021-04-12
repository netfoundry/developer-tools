-module(openapi_inline_response_200_11__links).

-export([encode/1]).

-export_type([openapi_inline_response_200_11__links/0]).

-type openapi_inline_response_200_11__links() ::
    #{ 'azureSubscription' := openapi_inline_response_200__links_self:openapi_inline_response_200__links_self(),
       'networks' := openapi_inline_response_200__links_self:openapi_inline_response_200__links_self(),
       'self' := openapi_inline_response_200__links_self:openapi_inline_response_200__links_self()
     }.

encode(#{ 'azureSubscription' := AzureSubscription,
          'networks' := Networks,
          'self' := Self
        }) ->
    #{ 'azureSubscription' => AzureSubscription,
       'networks' => Networks,
       'self' => Self
     }.
