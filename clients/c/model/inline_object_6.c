#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "inline_object_6.h"



inline_object_6_t *inline_object_6_create(
    char *network_id,
    char *name,
    list_t *attributes,
    int link_listener,
    char *data_center_id
    ) {
    inline_object_6_t *inline_object_6_local_var = malloc(sizeof(inline_object_6_t));
    if (!inline_object_6_local_var) {
        return NULL;
    }
    inline_object_6_local_var->network_id = network_id;
    inline_object_6_local_var->name = name;
    inline_object_6_local_var->attributes = attributes;
    inline_object_6_local_var->link_listener = link_listener;
    inline_object_6_local_var->data_center_id = data_center_id;

    return inline_object_6_local_var;
}


void inline_object_6_free(inline_object_6_t *inline_object_6) {
    if(NULL == inline_object_6){
        return ;
    }
    listEntry_t *listEntry;
    free(inline_object_6->network_id);
    free(inline_object_6->name);
    list_ForEach(listEntry, inline_object_6->attributes) {
        free(listEntry->data);
    }
    list_free(inline_object_6->attributes);
    free(inline_object_6->data_center_id);
    free(inline_object_6);
}

cJSON *inline_object_6_convertToJSON(inline_object_6_t *inline_object_6) {
    cJSON *item = cJSON_CreateObject();

    // inline_object_6->network_id
    if (!inline_object_6->network_id) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "networkId", inline_object_6->network_id) == NULL) {
    goto fail; //String
    }


    // inline_object_6->name
    if (!inline_object_6->name) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "name", inline_object_6->name) == NULL) {
    goto fail; //String
    }


    // inline_object_6->attributes
    if (!inline_object_6->attributes) {
        goto fail;
    }
    
    cJSON *attributes = cJSON_AddArrayToObject(item, "attributes");
    if(attributes == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *attributesListEntry;
    list_ForEach(attributesListEntry, inline_object_6->attributes) {
    if(cJSON_AddStringToObject(attributes, "", (char*)attributesListEntry->data) == NULL)
    {
        goto fail;
    }
    }


    // inline_object_6->link_listener
    if (!inline_object_6->link_listener) {
        goto fail;
    }
    
    if(cJSON_AddBoolToObject(item, "linkListener", inline_object_6->link_listener) == NULL) {
    goto fail; //Bool
    }


    // inline_object_6->data_center_id
    if(inline_object_6->data_center_id) { 
    if(cJSON_AddStringToObject(item, "dataCenterId", inline_object_6->data_center_id) == NULL) {
    goto fail; //String
    }
     } 

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

inline_object_6_t *inline_object_6_parseFromJSON(cJSON *inline_object_6JSON){

    inline_object_6_t *inline_object_6_local_var = NULL;

    // inline_object_6->network_id
    cJSON *network_id = cJSON_GetObjectItemCaseSensitive(inline_object_6JSON, "networkId");
    if (!network_id) {
        goto end;
    }

    
    if(!cJSON_IsString(network_id))
    {
    goto end; //String
    }

    // inline_object_6->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(inline_object_6JSON, "name");
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }

    // inline_object_6->attributes
    cJSON *attributes = cJSON_GetObjectItemCaseSensitive(inline_object_6JSON, "attributes");
    if (!attributes) {
        goto end;
    }

    list_t *attributesList;
    
    cJSON *attributes_local;
    if(!cJSON_IsArray(attributes)) {
        goto end;//primitive container
    }
    attributesList = list_create();

    cJSON_ArrayForEach(attributes_local, attributes)
    {
        if(!cJSON_IsString(attributes_local))
        {
            goto end;
        }
        list_addElement(attributesList , strdup(attributes_local->valuestring));
    }

    // inline_object_6->link_listener
    cJSON *link_listener = cJSON_GetObjectItemCaseSensitive(inline_object_6JSON, "linkListener");
    if (!link_listener) {
        goto end;
    }

    
    if(!cJSON_IsBool(link_listener))
    {
    goto end; //Bool
    }

    // inline_object_6->data_center_id
    cJSON *data_center_id = cJSON_GetObjectItemCaseSensitive(inline_object_6JSON, "dataCenterId");
    if (data_center_id) { 
    if(!cJSON_IsString(data_center_id))
    {
    goto end; //String
    }
    }


    inline_object_6_local_var = inline_object_6_create (
        strdup(network_id->valuestring),
        strdup(name->valuestring),
        attributesList,
        link_listener->valueint,
        data_center_id ? strdup(data_center_id->valuestring) : NULL
        );

    return inline_object_6_local_var;
end:
    return NULL;

}
