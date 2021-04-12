-module(openapi_inline_response_202__links).

-export([encode/1]).

-export_type([openapi_inline_response_202__links/0]).

-type openapi_inline_response_202__links() ::
    #{ 'services' := openapi_inline_response_200__links_self:openapi_inline_response_200__links_self(),
       'networks' := openapi_inline_response_200__links_network:openapi_inline_response_200__links_network(),
       'app_wans' := openapi_inline_response_200__links_self:openapi_inline_response_200__links_self(),
       'process' := openapi_inline_response_200__links_network:openapi_inline_response_200__links_network(),
       'endpoints' := openapi_inline_response_200__links_self:openapi_inline_response_200__links_self(),
       'certificate_authorities' := openapi_inline_response_200__links_self:openapi_inline_response_200__links_self(),
       'self' := openapi_inline_response_200__links_self:openapi_inline_response_200__links_self(),
       'process_executions' := openapi_inline_response_200__links_network:openapi_inline_response_200__links_network(),
       'network_controllers' := openapi_inline_response_200__links_self:openapi_inline_response_200__links_self(),
       'posture_checks' := openapi_inline_response_200__links_self:openapi_inline_response_200__links_self(),
       'edge_routers' := openapi_inline_response_200__links_self:openapi_inline_response_200__links_self(),
       'edge_router_policies' := openapi_inline_response_200__links_self:openapi_inline_response_200__links_self()
     }.

encode(#{ 'services' := Services,
          'networks' := Networks,
          'app_wans' := AppWans,
          'process' := Process,
          'endpoints' := Endpoints,
          'certificate_authorities' := CertificateAuthorities,
          'self' := Self,
          'process_executions' := ProcessExecutions,
          'network_controllers' := NetworkControllers,
          'posture_checks' := PostureChecks,
          'edge_routers' := EdgeRouters,
          'edge_router_policies' := EdgeRouterPolicies
        }) ->
    #{ 'services' => Services,
       'networks' => Networks,
       'app-wans' => AppWans,
       'process' => Process,
       'endpoints' => Endpoints,
       'certificate-authorities' => CertificateAuthorities,
       'self' => Self,
       'process-executions' => ProcessExecutions,
       'network-controllers' => NetworkControllers,
       'posture-checks' => PostureChecks,
       'edge-routers' => EdgeRouters,
       'edge-router-policies' => EdgeRouterPolicies
     }.
