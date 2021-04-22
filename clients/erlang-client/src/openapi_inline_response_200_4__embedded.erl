-module(openapi_inline_response_200_4__embedded).

-export([encode/1]).

-export_type([openapi_inline_response_200_4__embedded/0]).

-type openapi_inline_response_200_4__embedded() ::
    #{ 'edgeRouterPolicyList' := list()
     }.

encode(#{ 'edgeRouterPolicyList' := EdgeRouterPolicyList
        }) ->
    #{ 'edgeRouterPolicyList' => EdgeRouterPolicyList
     }.
