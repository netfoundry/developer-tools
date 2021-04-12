#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "inline_response_202_3_model.h"



inline_response_202_3_model_t *inline_response_202_3_model_create(
    list_t *bind_endpoint_attributes,
    inline_response_202_3_model_client_ingress_t *client_ingress,
    list_t *edge_router_attributes,
    _core_v2_services__service_id__model_server_egress_t *server_egress
    ) {
    inline_response_202_3_model_t *inline_response_202_3_model_local_var = malloc(sizeof(inline_response_202_3_model_t));
    if (!inline_response_202_3_model_local_var) {
        return NULL;
    }
    inline_response_202_3_model_local_var->bind_endpoint_attributes = bind_endpoint_attributes;
    inline_response_202_3_model_local_var->client_ingress = client_ingress;
    inline_response_202_3_model_local_var->edge_router_attributes = edge_router_attributes;
    inline_response_202_3_model_local_var->server_egress = server_egress;

    return inline_response_202_3_model_local_var;
}


void inline_response_202_3_model_free(inline_response_202_3_model_t *inline_response_202_3_model) {
    if(NULL == inline_response_202_3_model){
        return ;
    }
    listEntry_t *listEntry;
    list_ForEach(listEntry, inline_response_202_3_model->bind_endpoint_attributes) {
        free(listEntry->data);
    }
    list_free(inline_response_202_3_model->bind_endpoint_attributes);
    inline_response_202_3_model_client_ingress_free(inline_response_202_3_model->client_ingress);
    list_ForEach(listEntry, inline_response_202_3_model->edge_router_attributes) {
        free(listEntry->data);
    }
    list_free(inline_response_202_3_model->edge_router_attributes);
    _core_v2_services__service_id__model_server_egress_free(inline_response_202_3_model->server_egress);
    free(inline_response_202_3_model);
}

cJSON *inline_response_202_3_model_convertToJSON(inline_response_202_3_model_t *inline_response_202_3_model) {
    cJSON *item = cJSON_CreateObject();

    // inline_response_202_3_model->bind_endpoint_attributes
    if (!inline_response_202_3_model->bind_endpoint_attributes) {
        goto fail;
    }
    
    cJSON *bind_endpoint_attributes = cJSON_AddArrayToObject(item, "bindEndpointAttributes");
    if(bind_endpoint_attributes == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *bind_endpoint_attributesListEntry;
    list_ForEach(bind_endpoint_attributesListEntry, inline_response_202_3_model->bind_endpoint_attributes) {
    if(cJSON_AddStringToObject(bind_endpoint_attributes, "", (char*)bind_endpoint_attributesListEntry->data) == NULL)
    {
        goto fail;
    }
    }


    // inline_response_202_3_model->client_ingress
    if (!inline_response_202_3_model->client_ingress) {
        goto fail;
    }
    
    cJSON *client_ingress_local_JSON = inline_response_202_3_model_client_ingress_convertToJSON(inline_response_202_3_model->client_ingress);
    if(client_ingress_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "clientIngress", client_ingress_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // inline_response_202_3_model->edge_router_attributes
    if (!inline_response_202_3_model->edge_router_attributes) {
        goto fail;
    }
    
    cJSON *edge_router_attributes = cJSON_AddArrayToObject(item, "edgeRouterAttributes");
    if(edge_router_attributes == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *edge_router_attributesListEntry;
    list_ForEach(edge_router_attributesListEntry, inline_response_202_3_model->edge_router_attributes) {
    if(cJSON_AddStringToObject(edge_router_attributes, "", (char*)edge_router_attributesListEntry->data) == NULL)
    {
        goto fail;
    }
    }


    // inline_response_202_3_model->server_egress
    if (!inline_response_202_3_model->server_egress) {
        goto fail;
    }
    
    cJSON *server_egress_local_JSON = _core_v2_services__service_id__model_server_egress_convertToJSON(inline_response_202_3_model->server_egress);
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

inline_response_202_3_model_t *inline_response_202_3_model_parseFromJSON(cJSON *inline_response_202_3_modelJSON){

    inline_response_202_3_model_t *inline_response_202_3_model_local_var = NULL;

    // inline_response_202_3_model->bind_endpoint_attributes
    cJSON *bind_endpoint_attributes = cJSON_GetObjectItemCaseSensitive(inline_response_202_3_modelJSON, "bindEndpointAttributes");
    if (!bind_endpoint_attributes) {
        goto end;
    }

    list_t *bind_endpoint_attributesList;
    
    cJSON *bind_endpoint_attributes_local;
    if(!cJSON_IsArray(bind_endpoint_attributes)) {
        goto end;//primitive container
    }
    bind_endpoint_attributesList = list_create();

    cJSON_ArrayForEach(bind_endpoint_attributes_local, bind_endpoint_attributes)
    {
        if(!cJSON_IsString(bind_endpoint_attributes_local))
        {
            goto end;
        }
        list_addElement(bind_endpoint_attributesList , strdup(bind_endpoint_attributes_local->valuestring));
    }

    // inline_response_202_3_model->client_ingress
    cJSON *client_ingress = cJSON_GetObjectItemCaseSensitive(inline_response_202_3_modelJSON, "clientIngress");
    if (!client_ingress) {
        goto end;
    }

    inline_response_202_3_model_client_ingress_t *client_ingress_local_nonprim = NULL;
    
    client_ingress_local_nonprim = inline_response_202_3_model_client_ingress_parseFromJSON(client_ingress); //nonprimitive

    // inline_response_202_3_model->edge_router_attributes
    cJSON *edge_router_attributes = cJSON_GetObjectItemCaseSensitive(inline_response_202_3_modelJSON, "edgeRouterAttributes");
    if (!edge_router_attributes) {
        goto end;
    }

    list_t *edge_router_attributesList;
    
    cJSON *edge_router_attributes_local;
    if(!cJSON_IsArray(edge_router_attributes)) {
        goto end;//primitive container
    }
    edge_router_attributesList = list_create();

    cJSON_ArrayForEach(edge_router_attributes_local, edge_router_attributes)
    {
        if(!cJSON_IsString(edge_router_attributes_local))
        {
            goto end;
        }
        list_addElement(edge_router_attributesList , strdup(edge_router_attributes_local->valuestring));
    }

    // inline_response_202_3_model->server_egress
    cJSON *server_egress = cJSON_GetObjectItemCaseSensitive(inline_response_202_3_modelJSON, "serverEgress");
    if (!server_egress) {
        goto end;
    }

    _core_v2_services__service_id__model_server_egress_t *server_egress_local_nonprim = NULL;
    
    server_egress_local_nonprim = _core_v2_services__service_id__model_server_egress_parseFromJSON(server_egress); //nonprimitive


    inline_response_202_3_model_local_var = inline_response_202_3_model_create (
        bind_endpoint_attributesList,
        client_ingress_local_nonprim,
        edge_router_attributesList,
        server_egress_local_nonprim
        );

    return inline_response_202_3_model_local_var;
end:
    return NULL;

}
