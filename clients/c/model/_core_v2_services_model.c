#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "_core_v2_services_model.h"



_core_v2_services_model_t *_core_v2_services_model_create(
    list_t *edge_router_attributes,
    inline_response_200_3__embedded_model_server_egress_t *server_egress,
    list_t *bind_endpoint_attributes,
    _core_v2_services_model_client_ingress_t *client_ingress,
    list_t *edge_router_hosts
    ) {
    _core_v2_services_model_t *_core_v2_services_model_local_var = malloc(sizeof(_core_v2_services_model_t));
    if (!_core_v2_services_model_local_var) {
        return NULL;
    }
    _core_v2_services_model_local_var->edge_router_attributes = edge_router_attributes;
    _core_v2_services_model_local_var->server_egress = server_egress;
    _core_v2_services_model_local_var->bind_endpoint_attributes = bind_endpoint_attributes;
    _core_v2_services_model_local_var->client_ingress = client_ingress;
    _core_v2_services_model_local_var->edge_router_hosts = edge_router_hosts;

    return _core_v2_services_model_local_var;
}


void _core_v2_services_model_free(_core_v2_services_model_t *_core_v2_services_model) {
    if(NULL == _core_v2_services_model){
        return ;
    }
    listEntry_t *listEntry;
    list_ForEach(listEntry, _core_v2_services_model->edge_router_attributes) {
        free(listEntry->data);
    }
    list_free(_core_v2_services_model->edge_router_attributes);
    inline_response_200_3__embedded_model_server_egress_free(_core_v2_services_model->server_egress);
    list_ForEach(listEntry, _core_v2_services_model->bind_endpoint_attributes) {
        free(listEntry->data);
    }
    list_free(_core_v2_services_model->bind_endpoint_attributes);
    _core_v2_services_model_client_ingress_free(_core_v2_services_model->client_ingress);
    list_ForEach(listEntry, _core_v2_services_model->edge_router_hosts) {
        _core_v2_services_model_edge_router_hosts_free(listEntry->data);
    }
    list_free(_core_v2_services_model->edge_router_hosts);
    free(_core_v2_services_model);
}

cJSON *_core_v2_services_model_convertToJSON(_core_v2_services_model_t *_core_v2_services_model) {
    cJSON *item = cJSON_CreateObject();

    // _core_v2_services_model->edge_router_attributes
    if (!_core_v2_services_model->edge_router_attributes) {
        goto fail;
    }
    
    cJSON *edge_router_attributes = cJSON_AddArrayToObject(item, "edgeRouterAttributes");
    if(edge_router_attributes == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *edge_router_attributesListEntry;
    list_ForEach(edge_router_attributesListEntry, _core_v2_services_model->edge_router_attributes) {
    if(cJSON_AddStringToObject(edge_router_attributes, "", (char*)edge_router_attributesListEntry->data) == NULL)
    {
        goto fail;
    }
    }


    // _core_v2_services_model->server_egress
    if(_core_v2_services_model->server_egress) { 
    cJSON *server_egress_local_JSON = inline_response_200_3__embedded_model_server_egress_convertToJSON(_core_v2_services_model->server_egress);
    if(server_egress_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "serverEgress", server_egress_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // _core_v2_services_model->bind_endpoint_attributes
    if(_core_v2_services_model->bind_endpoint_attributes) { 
    cJSON *bind_endpoint_attributes = cJSON_AddArrayToObject(item, "bindEndpointAttributes");
    if(bind_endpoint_attributes == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *bind_endpoint_attributesListEntry;
    list_ForEach(bind_endpoint_attributesListEntry, _core_v2_services_model->bind_endpoint_attributes) {
    if(cJSON_AddStringToObject(bind_endpoint_attributes, "", (char*)bind_endpoint_attributesListEntry->data) == NULL)
    {
        goto fail;
    }
    }
     } 


    // _core_v2_services_model->client_ingress
    if (!_core_v2_services_model->client_ingress) {
        goto fail;
    }
    
    cJSON *client_ingress_local_JSON = _core_v2_services_model_client_ingress_convertToJSON(_core_v2_services_model->client_ingress);
    if(client_ingress_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "clientIngress", client_ingress_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // _core_v2_services_model->edge_router_hosts
    if(_core_v2_services_model->edge_router_hosts) { 
    cJSON *edge_router_hosts = cJSON_AddArrayToObject(item, "edgeRouterHosts");
    if(edge_router_hosts == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *edge_router_hostsListEntry;
    if (_core_v2_services_model->edge_router_hosts) {
    list_ForEach(edge_router_hostsListEntry, _core_v2_services_model->edge_router_hosts) {
    cJSON *itemLocal = _core_v2_services_model_edge_router_hosts_convertToJSON(edge_router_hostsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(edge_router_hosts, itemLocal);
    }
    }
     } 

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

_core_v2_services_model_t *_core_v2_services_model_parseFromJSON(cJSON *_core_v2_services_modelJSON){

    _core_v2_services_model_t *_core_v2_services_model_local_var = NULL;

    // _core_v2_services_model->edge_router_attributes
    cJSON *edge_router_attributes = cJSON_GetObjectItemCaseSensitive(_core_v2_services_modelJSON, "edgeRouterAttributes");
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

    // _core_v2_services_model->server_egress
    cJSON *server_egress = cJSON_GetObjectItemCaseSensitive(_core_v2_services_modelJSON, "serverEgress");
    inline_response_200_3__embedded_model_server_egress_t *server_egress_local_nonprim = NULL;
    if (server_egress) { 
    server_egress_local_nonprim = inline_response_200_3__embedded_model_server_egress_parseFromJSON(server_egress); //nonprimitive
    }

    // _core_v2_services_model->bind_endpoint_attributes
    cJSON *bind_endpoint_attributes = cJSON_GetObjectItemCaseSensitive(_core_v2_services_modelJSON, "bindEndpointAttributes");
    list_t *bind_endpoint_attributesList;
    if (bind_endpoint_attributes) { 
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
    }

    // _core_v2_services_model->client_ingress
    cJSON *client_ingress = cJSON_GetObjectItemCaseSensitive(_core_v2_services_modelJSON, "clientIngress");
    if (!client_ingress) {
        goto end;
    }

    _core_v2_services_model_client_ingress_t *client_ingress_local_nonprim = NULL;
    
    client_ingress_local_nonprim = _core_v2_services_model_client_ingress_parseFromJSON(client_ingress); //nonprimitive

    // _core_v2_services_model->edge_router_hosts
    cJSON *edge_router_hosts = cJSON_GetObjectItemCaseSensitive(_core_v2_services_modelJSON, "edgeRouterHosts");
    list_t *edge_router_hostsList;
    if (edge_router_hosts) { 
    cJSON *edge_router_hosts_local_nonprimitive;
    if(!cJSON_IsArray(edge_router_hosts)){
        goto end; //nonprimitive container
    }

    edge_router_hostsList = list_create();

    cJSON_ArrayForEach(edge_router_hosts_local_nonprimitive,edge_router_hosts )
    {
        if(!cJSON_IsObject(edge_router_hosts_local_nonprimitive)){
            goto end;
        }
        _core_v2_services_model_edge_router_hosts_t *edge_router_hostsItem = _core_v2_services_model_edge_router_hosts_parseFromJSON(edge_router_hosts_local_nonprimitive);

        list_addElement(edge_router_hostsList, edge_router_hostsItem);
    }
    }


    _core_v2_services_model_local_var = _core_v2_services_model_create (
        edge_router_attributesList,
        server_egress ? server_egress_local_nonprim : NULL,
        bind_endpoint_attributes ? bind_endpoint_attributesList : NULL,
        client_ingress_local_nonprim,
        edge_router_hosts ? edge_router_hostsList : NULL
        );

    return _core_v2_services_model_local_var;
end:
    return NULL;

}
