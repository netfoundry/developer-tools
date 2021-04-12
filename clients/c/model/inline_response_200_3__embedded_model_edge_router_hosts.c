#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "inline_response_200_3__embedded_model_edge_router_hosts.h"



inline_response_200_3__embedded_model_edge_router_hosts_t *inline_response_200_3__embedded_model_edge_router_hosts_create(
    char *edge_router_id,
    inline_response_200_3__embedded_model_server_egress_1_t *server_egress
    ) {
    inline_response_200_3__embedded_model_edge_router_hosts_t *inline_response_200_3__embedded_model_edge_router_hosts_local_var = malloc(sizeof(inline_response_200_3__embedded_model_edge_router_hosts_t));
    if (!inline_response_200_3__embedded_model_edge_router_hosts_local_var) {
        return NULL;
    }
    inline_response_200_3__embedded_model_edge_router_hosts_local_var->edge_router_id = edge_router_id;
    inline_response_200_3__embedded_model_edge_router_hosts_local_var->server_egress = server_egress;

    return inline_response_200_3__embedded_model_edge_router_hosts_local_var;
}


void inline_response_200_3__embedded_model_edge_router_hosts_free(inline_response_200_3__embedded_model_edge_router_hosts_t *inline_response_200_3__embedded_model_edge_router_hosts) {
    if(NULL == inline_response_200_3__embedded_model_edge_router_hosts){
        return ;
    }
    listEntry_t *listEntry;
    free(inline_response_200_3__embedded_model_edge_router_hosts->edge_router_id);
    inline_response_200_3__embedded_model_server_egress_1_free(inline_response_200_3__embedded_model_edge_router_hosts->server_egress);
    free(inline_response_200_3__embedded_model_edge_router_hosts);
}

cJSON *inline_response_200_3__embedded_model_edge_router_hosts_convertToJSON(inline_response_200_3__embedded_model_edge_router_hosts_t *inline_response_200_3__embedded_model_edge_router_hosts) {
    cJSON *item = cJSON_CreateObject();

    // inline_response_200_3__embedded_model_edge_router_hosts->edge_router_id
    if (!inline_response_200_3__embedded_model_edge_router_hosts->edge_router_id) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "edgeRouterId", inline_response_200_3__embedded_model_edge_router_hosts->edge_router_id) == NULL) {
    goto fail; //String
    }


    // inline_response_200_3__embedded_model_edge_router_hosts->server_egress
    if (!inline_response_200_3__embedded_model_edge_router_hosts->server_egress) {
        goto fail;
    }
    
    cJSON *server_egress_local_JSON = inline_response_200_3__embedded_model_server_egress_1_convertToJSON(inline_response_200_3__embedded_model_edge_router_hosts->server_egress);
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

inline_response_200_3__embedded_model_edge_router_hosts_t *inline_response_200_3__embedded_model_edge_router_hosts_parseFromJSON(cJSON *inline_response_200_3__embedded_model_edge_router_hostsJSON){

    inline_response_200_3__embedded_model_edge_router_hosts_t *inline_response_200_3__embedded_model_edge_router_hosts_local_var = NULL;

    // inline_response_200_3__embedded_model_edge_router_hosts->edge_router_id
    cJSON *edge_router_id = cJSON_GetObjectItemCaseSensitive(inline_response_200_3__embedded_model_edge_router_hostsJSON, "edgeRouterId");
    if (!edge_router_id) {
        goto end;
    }

    
    if(!cJSON_IsString(edge_router_id))
    {
    goto end; //String
    }

    // inline_response_200_3__embedded_model_edge_router_hosts->server_egress
    cJSON *server_egress = cJSON_GetObjectItemCaseSensitive(inline_response_200_3__embedded_model_edge_router_hostsJSON, "serverEgress");
    if (!server_egress) {
        goto end;
    }

    inline_response_200_3__embedded_model_server_egress_1_t *server_egress_local_nonprim = NULL;
    
    server_egress_local_nonprim = inline_response_200_3__embedded_model_server_egress_1_parseFromJSON(server_egress); //nonprimitive


    inline_response_200_3__embedded_model_edge_router_hosts_local_var = inline_response_200_3__embedded_model_edge_router_hosts_create (
        strdup(edge_router_id->valuestring),
        server_egress_local_nonprim
        );

    return inline_response_200_3__embedded_model_edge_router_hosts_local_var;
end:
    return NULL;

}
