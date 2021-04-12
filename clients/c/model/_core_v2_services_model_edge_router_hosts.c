#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "_core_v2_services_model_edge_router_hosts.h"



_core_v2_services_model_edge_router_hosts_t *_core_v2_services_model_edge_router_hosts_create(
    char *edge_router_id,
    _core_v2_services_model_server_egress_t *server_egress
    ) {
    _core_v2_services_model_edge_router_hosts_t *_core_v2_services_model_edge_router_hosts_local_var = malloc(sizeof(_core_v2_services_model_edge_router_hosts_t));
    if (!_core_v2_services_model_edge_router_hosts_local_var) {
        return NULL;
    }
    _core_v2_services_model_edge_router_hosts_local_var->edge_router_id = edge_router_id;
    _core_v2_services_model_edge_router_hosts_local_var->server_egress = server_egress;

    return _core_v2_services_model_edge_router_hosts_local_var;
}


void _core_v2_services_model_edge_router_hosts_free(_core_v2_services_model_edge_router_hosts_t *_core_v2_services_model_edge_router_hosts) {
    if(NULL == _core_v2_services_model_edge_router_hosts){
        return ;
    }
    listEntry_t *listEntry;
    free(_core_v2_services_model_edge_router_hosts->edge_router_id);
    _core_v2_services_model_server_egress_free(_core_v2_services_model_edge_router_hosts->server_egress);
    free(_core_v2_services_model_edge_router_hosts);
}

cJSON *_core_v2_services_model_edge_router_hosts_convertToJSON(_core_v2_services_model_edge_router_hosts_t *_core_v2_services_model_edge_router_hosts) {
    cJSON *item = cJSON_CreateObject();

    // _core_v2_services_model_edge_router_hosts->edge_router_id
    if (!_core_v2_services_model_edge_router_hosts->edge_router_id) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "edgeRouterId", _core_v2_services_model_edge_router_hosts->edge_router_id) == NULL) {
    goto fail; //String
    }


    // _core_v2_services_model_edge_router_hosts->server_egress
    if (!_core_v2_services_model_edge_router_hosts->server_egress) {
        goto fail;
    }
    
    cJSON *server_egress_local_JSON = _core_v2_services_model_server_egress_convertToJSON(_core_v2_services_model_edge_router_hosts->server_egress);
    if(server_egress_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "serverEgress", server_egress_local_JSON);
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

_core_v2_services_model_edge_router_hosts_t *_core_v2_services_model_edge_router_hosts_parseFromJSON(cJSON *_core_v2_services_model_edge_router_hostsJSON){

    _core_v2_services_model_edge_router_hosts_t *_core_v2_services_model_edge_router_hosts_local_var = NULL;

    // _core_v2_services_model_edge_router_hosts->edge_router_id
    cJSON *edge_router_id = cJSON_GetObjectItemCaseSensitive(_core_v2_services_model_edge_router_hostsJSON, "edgeRouterId");
    if (!edge_router_id) {
        goto end;
    }

    
    if(!cJSON_IsString(edge_router_id))
    {
    goto end; //String
    }

    // _core_v2_services_model_edge_router_hosts->server_egress
    cJSON *server_egress = cJSON_GetObjectItemCaseSensitive(_core_v2_services_model_edge_router_hostsJSON, "serverEgress");
    if (!server_egress) {
        goto end;
    }

    _core_v2_services_model_server_egress_t *server_egress_local_nonprim = NULL;
    
    server_egress_local_nonprim = _core_v2_services_model_server_egress_parseFromJSON(server_egress); //nonprimitive


    _core_v2_services_model_edge_router_hosts_local_var = _core_v2_services_model_edge_router_hosts_create (
        strdup(edge_router_id->valuestring),
        server_egress_local_nonprim
        );

    return _core_v2_services_model_edge_router_hosts_local_var;
end:
    return NULL;

}
