#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "inline_response_200_1__embedded__links.h"



inline_response_200_1__embedded__links_t *inline_response_200_1__embedded__links_create(
    inline_response_200__links_self_t *services,
    inline_response_200__links_network_t *networks,
    inline_response_200__links_self_t *app_wans,
    inline_response_200__links_self_t *endpoints,
    inline_response_200__links_self_t *certificate_authorities,
    inline_response_200__links_self_t *self,
    inline_response_200__links_network_t *process_executions,
    inline_response_200__links_self_t *network_controllers,
    inline_response_200__links_self_t *posture_checks,
    inline_response_200__links_self_t *edge_routers,
    inline_response_200__links_self_t *edge_router_policies
    ) {
    inline_response_200_1__embedded__links_t *inline_response_200_1__embedded__links_local_var = malloc(sizeof(inline_response_200_1__embedded__links_t));
    if (!inline_response_200_1__embedded__links_local_var) {
        return NULL;
    }
    inline_response_200_1__embedded__links_local_var->services = services;
    inline_response_200_1__embedded__links_local_var->networks = networks;
    inline_response_200_1__embedded__links_local_var->app_wans = app_wans;
    inline_response_200_1__embedded__links_local_var->endpoints = endpoints;
    inline_response_200_1__embedded__links_local_var->certificate_authorities = certificate_authorities;
    inline_response_200_1__embedded__links_local_var->self = self;
    inline_response_200_1__embedded__links_local_var->process_executions = process_executions;
    inline_response_200_1__embedded__links_local_var->network_controllers = network_controllers;
    inline_response_200_1__embedded__links_local_var->posture_checks = posture_checks;
    inline_response_200_1__embedded__links_local_var->edge_routers = edge_routers;
    inline_response_200_1__embedded__links_local_var->edge_router_policies = edge_router_policies;

    return inline_response_200_1__embedded__links_local_var;
}


void inline_response_200_1__embedded__links_free(inline_response_200_1__embedded__links_t *inline_response_200_1__embedded__links) {
    if(NULL == inline_response_200_1__embedded__links){
        return ;
    }
    listEntry_t *listEntry;
    inline_response_200__links_self_free(inline_response_200_1__embedded__links->services);
    inline_response_200__links_network_free(inline_response_200_1__embedded__links->networks);
    inline_response_200__links_self_free(inline_response_200_1__embedded__links->app_wans);
    inline_response_200__links_self_free(inline_response_200_1__embedded__links->endpoints);
    inline_response_200__links_self_free(inline_response_200_1__embedded__links->certificate_authorities);
    inline_response_200__links_self_free(inline_response_200_1__embedded__links->self);
    inline_response_200__links_network_free(inline_response_200_1__embedded__links->process_executions);
    inline_response_200__links_self_free(inline_response_200_1__embedded__links->network_controllers);
    inline_response_200__links_self_free(inline_response_200_1__embedded__links->posture_checks);
    inline_response_200__links_self_free(inline_response_200_1__embedded__links->edge_routers);
    inline_response_200__links_self_free(inline_response_200_1__embedded__links->edge_router_policies);
    free(inline_response_200_1__embedded__links);
}

cJSON *inline_response_200_1__embedded__links_convertToJSON(inline_response_200_1__embedded__links_t *inline_response_200_1__embedded__links) {
    cJSON *item = cJSON_CreateObject();

    // inline_response_200_1__embedded__links->services
    if (!inline_response_200_1__embedded__links->services) {
        goto fail;
    }
    
    cJSON *services_local_JSON = inline_response_200__links_self_convertToJSON(inline_response_200_1__embedded__links->services);
    if(services_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "services", services_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // inline_response_200_1__embedded__links->networks
    if (!inline_response_200_1__embedded__links->networks) {
        goto fail;
    }
    
    cJSON *networks_local_JSON = inline_response_200__links_network_convertToJSON(inline_response_200_1__embedded__links->networks);
    if(networks_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "networks", networks_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // inline_response_200_1__embedded__links->app_wans
    if (!inline_response_200_1__embedded__links->app_wans) {
        goto fail;
    }
    
    cJSON *app_wans_local_JSON = inline_response_200__links_self_convertToJSON(inline_response_200_1__embedded__links->app_wans);
    if(app_wans_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "app-wans", app_wans_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // inline_response_200_1__embedded__links->endpoints
    if (!inline_response_200_1__embedded__links->endpoints) {
        goto fail;
    }
    
    cJSON *endpoints_local_JSON = inline_response_200__links_self_convertToJSON(inline_response_200_1__embedded__links->endpoints);
    if(endpoints_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "endpoints", endpoints_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // inline_response_200_1__embedded__links->certificate_authorities
    if (!inline_response_200_1__embedded__links->certificate_authorities) {
        goto fail;
    }
    
    cJSON *certificate_authorities_local_JSON = inline_response_200__links_self_convertToJSON(inline_response_200_1__embedded__links->certificate_authorities);
    if(certificate_authorities_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "certificate-authorities", certificate_authorities_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // inline_response_200_1__embedded__links->self
    if (!inline_response_200_1__embedded__links->self) {
        goto fail;
    }
    
    cJSON *self_local_JSON = inline_response_200__links_self_convertToJSON(inline_response_200_1__embedded__links->self);
    if(self_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "self", self_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // inline_response_200_1__embedded__links->process_executions
    if (!inline_response_200_1__embedded__links->process_executions) {
        goto fail;
    }
    
    cJSON *process_executions_local_JSON = inline_response_200__links_network_convertToJSON(inline_response_200_1__embedded__links->process_executions);
    if(process_executions_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "process-executions", process_executions_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // inline_response_200_1__embedded__links->network_controllers
    if (!inline_response_200_1__embedded__links->network_controllers) {
        goto fail;
    }
    
    cJSON *network_controllers_local_JSON = inline_response_200__links_self_convertToJSON(inline_response_200_1__embedded__links->network_controllers);
    if(network_controllers_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "network-controllers", network_controllers_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // inline_response_200_1__embedded__links->posture_checks
    if (!inline_response_200_1__embedded__links->posture_checks) {
        goto fail;
    }
    
    cJSON *posture_checks_local_JSON = inline_response_200__links_self_convertToJSON(inline_response_200_1__embedded__links->posture_checks);
    if(posture_checks_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "posture-checks", posture_checks_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // inline_response_200_1__embedded__links->edge_routers
    if (!inline_response_200_1__embedded__links->edge_routers) {
        goto fail;
    }
    
    cJSON *edge_routers_local_JSON = inline_response_200__links_self_convertToJSON(inline_response_200_1__embedded__links->edge_routers);
    if(edge_routers_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "edge-routers", edge_routers_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // inline_response_200_1__embedded__links->edge_router_policies
    if (!inline_response_200_1__embedded__links->edge_router_policies) {
        goto fail;
    }
    
    cJSON *edge_router_policies_local_JSON = inline_response_200__links_self_convertToJSON(inline_response_200_1__embedded__links->edge_router_policies);
    if(edge_router_policies_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "edge-router-policies", edge_router_policies_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

inline_response_200_1__embedded__links_t *inline_response_200_1__embedded__links_parseFromJSON(cJSON *inline_response_200_1__embedded__linksJSON){

    inline_response_200_1__embedded__links_t *inline_response_200_1__embedded__links_local_var = NULL;

    // inline_response_200_1__embedded__links->services
    cJSON *services = cJSON_GetObjectItemCaseSensitive(inline_response_200_1__embedded__linksJSON, "services");
    if (!services) {
        goto end;
    }

    inline_response_200__links_self_t *services_local_nonprim = NULL;
    
    services_local_nonprim = inline_response_200__links_self_parseFromJSON(services); //nonprimitive

    // inline_response_200_1__embedded__links->networks
    cJSON *networks = cJSON_GetObjectItemCaseSensitive(inline_response_200_1__embedded__linksJSON, "networks");
    if (!networks) {
        goto end;
    }

    inline_response_200__links_network_t *networks_local_nonprim = NULL;
    
    networks_local_nonprim = inline_response_200__links_network_parseFromJSON(networks); //nonprimitive

    // inline_response_200_1__embedded__links->app_wans
    cJSON *app_wans = cJSON_GetObjectItemCaseSensitive(inline_response_200_1__embedded__linksJSON, "app-wans");
    if (!app_wans) {
        goto end;
    }

    inline_response_200__links_self_t *app_wans_local_nonprim = NULL;
    
    app_wans_local_nonprim = inline_response_200__links_self_parseFromJSON(app_wans); //nonprimitive

    // inline_response_200_1__embedded__links->endpoints
    cJSON *endpoints = cJSON_GetObjectItemCaseSensitive(inline_response_200_1__embedded__linksJSON, "endpoints");
    if (!endpoints) {
        goto end;
    }

    inline_response_200__links_self_t *endpoints_local_nonprim = NULL;
    
    endpoints_local_nonprim = inline_response_200__links_self_parseFromJSON(endpoints); //nonprimitive

    // inline_response_200_1__embedded__links->certificate_authorities
    cJSON *certificate_authorities = cJSON_GetObjectItemCaseSensitive(inline_response_200_1__embedded__linksJSON, "certificate-authorities");
    if (!certificate_authorities) {
        goto end;
    }

    inline_response_200__links_self_t *certificate_authorities_local_nonprim = NULL;
    
    certificate_authorities_local_nonprim = inline_response_200__links_self_parseFromJSON(certificate_authorities); //nonprimitive

    // inline_response_200_1__embedded__links->self
    cJSON *self = cJSON_GetObjectItemCaseSensitive(inline_response_200_1__embedded__linksJSON, "self");
    if (!self) {
        goto end;
    }

    inline_response_200__links_self_t *self_local_nonprim = NULL;
    
    self_local_nonprim = inline_response_200__links_self_parseFromJSON(self); //nonprimitive

    // inline_response_200_1__embedded__links->process_executions
    cJSON *process_executions = cJSON_GetObjectItemCaseSensitive(inline_response_200_1__embedded__linksJSON, "process-executions");
    if (!process_executions) {
        goto end;
    }

    inline_response_200__links_network_t *process_executions_local_nonprim = NULL;
    
    process_executions_local_nonprim = inline_response_200__links_network_parseFromJSON(process_executions); //nonprimitive

    // inline_response_200_1__embedded__links->network_controllers
    cJSON *network_controllers = cJSON_GetObjectItemCaseSensitive(inline_response_200_1__embedded__linksJSON, "network-controllers");
    if (!network_controllers) {
        goto end;
    }

    inline_response_200__links_self_t *network_controllers_local_nonprim = NULL;
    
    network_controllers_local_nonprim = inline_response_200__links_self_parseFromJSON(network_controllers); //nonprimitive

    // inline_response_200_1__embedded__links->posture_checks
    cJSON *posture_checks = cJSON_GetObjectItemCaseSensitive(inline_response_200_1__embedded__linksJSON, "posture-checks");
    if (!posture_checks) {
        goto end;
    }

    inline_response_200__links_self_t *posture_checks_local_nonprim = NULL;
    
    posture_checks_local_nonprim = inline_response_200__links_self_parseFromJSON(posture_checks); //nonprimitive

    // inline_response_200_1__embedded__links->edge_routers
    cJSON *edge_routers = cJSON_GetObjectItemCaseSensitive(inline_response_200_1__embedded__linksJSON, "edge-routers");
    if (!edge_routers) {
        goto end;
    }

    inline_response_200__links_self_t *edge_routers_local_nonprim = NULL;
    
    edge_routers_local_nonprim = inline_response_200__links_self_parseFromJSON(edge_routers); //nonprimitive

    // inline_response_200_1__embedded__links->edge_router_policies
    cJSON *edge_router_policies = cJSON_GetObjectItemCaseSensitive(inline_response_200_1__embedded__linksJSON, "edge-router-policies");
    if (!edge_router_policies) {
        goto end;
    }

    inline_response_200__links_self_t *edge_router_policies_local_nonprim = NULL;
    
    edge_router_policies_local_nonprim = inline_response_200__links_self_parseFromJSON(edge_router_policies); //nonprimitive


    inline_response_200_1__embedded__links_local_var = inline_response_200_1__embedded__links_create (
        services_local_nonprim,
        networks_local_nonprim,
        app_wans_local_nonprim,
        endpoints_local_nonprim,
        certificate_authorities_local_nonprim,
        self_local_nonprim,
        process_executions_local_nonprim,
        network_controllers_local_nonprim,
        posture_checks_local_nonprim,
        edge_routers_local_nonprim,
        edge_router_policies_local_nonprim
        );

    return inline_response_200_1__embedded__links_local_var;
end:
    return NULL;

}
