#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "inline_object_2.h"



inline_object_2_t *inline_object_2_create(
    list_t *edge_router_attributes,
    list_t *endpoint_attributes,
    char *name,
    char *network_id
    ) {
    inline_object_2_t *inline_object_2_local_var = malloc(sizeof(inline_object_2_t));
    if (!inline_object_2_local_var) {
        return NULL;
    }
    inline_object_2_local_var->edge_router_attributes = edge_router_attributes;
    inline_object_2_local_var->endpoint_attributes = endpoint_attributes;
    inline_object_2_local_var->name = name;
    inline_object_2_local_var->network_id = network_id;

    return inline_object_2_local_var;
}


void inline_object_2_free(inline_object_2_t *inline_object_2) {
    if(NULL == inline_object_2){
        return ;
    }
    listEntry_t *listEntry;
    list_ForEach(listEntry, inline_object_2->edge_router_attributes) {
        free(listEntry->data);
    }
    list_free(inline_object_2->edge_router_attributes);
    list_ForEach(listEntry, inline_object_2->endpoint_attributes) {
        free(listEntry->data);
    }
    list_free(inline_object_2->endpoint_attributes);
    free(inline_object_2->name);
    free(inline_object_2->network_id);
    free(inline_object_2);
}

cJSON *inline_object_2_convertToJSON(inline_object_2_t *inline_object_2) {
    cJSON *item = cJSON_CreateObject();

    // inline_object_2->edge_router_attributes
    if (!inline_object_2->edge_router_attributes) {
        goto fail;
    }
    
    cJSON *edge_router_attributes = cJSON_AddArrayToObject(item, "edgeRouterAttributes");
    if(edge_router_attributes == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *edge_router_attributesListEntry;
    list_ForEach(edge_router_attributesListEntry, inline_object_2->edge_router_attributes) {
    if(cJSON_AddStringToObject(edge_router_attributes, "", (char*)edge_router_attributesListEntry->data) == NULL)
    {
        goto fail;
    }
    }


    // inline_object_2->endpoint_attributes
    if (!inline_object_2->endpoint_attributes) {
        goto fail;
    }
    
    cJSON *endpoint_attributes = cJSON_AddArrayToObject(item, "endpointAttributes");
    if(endpoint_attributes == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *endpoint_attributesListEntry;
    list_ForEach(endpoint_attributesListEntry, inline_object_2->endpoint_attributes) {
    if(cJSON_AddStringToObject(endpoint_attributes, "", (char*)endpoint_attributesListEntry->data) == NULL)
    {
        goto fail;
    }
    }


    // inline_object_2->name
    if (!inline_object_2->name) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "name", inline_object_2->name) == NULL) {
    goto fail; //String
    }


    // inline_object_2->network_id
    if (!inline_object_2->network_id) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "networkId", inline_object_2->network_id) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

inline_object_2_t *inline_object_2_parseFromJSON(cJSON *inline_object_2JSON){

    inline_object_2_t *inline_object_2_local_var = NULL;

    // inline_object_2->edge_router_attributes
    cJSON *edge_router_attributes = cJSON_GetObjectItemCaseSensitive(inline_object_2JSON, "edgeRouterAttributes");
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

    // inline_object_2->endpoint_attributes
    cJSON *endpoint_attributes = cJSON_GetObjectItemCaseSensitive(inline_object_2JSON, "endpointAttributes");
    if (!endpoint_attributes) {
        goto end;
    }

    list_t *endpoint_attributesList;
    
    cJSON *endpoint_attributes_local;
    if(!cJSON_IsArray(endpoint_attributes)) {
        goto end;//primitive container
    }
    endpoint_attributesList = list_create();

    cJSON_ArrayForEach(endpoint_attributes_local, endpoint_attributes)
    {
        if(!cJSON_IsString(endpoint_attributes_local))
        {
            goto end;
        }
        list_addElement(endpoint_attributesList , strdup(endpoint_attributes_local->valuestring));
    }

    // inline_object_2->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(inline_object_2JSON, "name");
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }

    // inline_object_2->network_id
    cJSON *network_id = cJSON_GetObjectItemCaseSensitive(inline_object_2JSON, "networkId");
    if (!network_id) {
        goto end;
    }

    
    if(!cJSON_IsString(network_id))
    {
    goto end; //String
    }


    inline_object_2_local_var = inline_object_2_create (
        edge_router_attributesList,
        endpoint_attributesList,
        strdup(name->valuestring),
        strdup(network_id->valuestring)
        );

    return inline_object_2_local_var;
end:
    return NULL;

}
