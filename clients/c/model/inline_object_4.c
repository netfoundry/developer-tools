#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "inline_object_4.h"



inline_object_4_t *inline_object_4_create(
    list_t *service_attributes,
    char *network_id,
    char *name,
    list_t *posture_check_attributes,
    list_t *endpoint_attributes
    ) {
    inline_object_4_t *inline_object_4_local_var = malloc(sizeof(inline_object_4_t));
    if (!inline_object_4_local_var) {
        return NULL;
    }
    inline_object_4_local_var->service_attributes = service_attributes;
    inline_object_4_local_var->network_id = network_id;
    inline_object_4_local_var->name = name;
    inline_object_4_local_var->posture_check_attributes = posture_check_attributes;
    inline_object_4_local_var->endpoint_attributes = endpoint_attributes;

    return inline_object_4_local_var;
}


void inline_object_4_free(inline_object_4_t *inline_object_4) {
    if(NULL == inline_object_4){
        return ;
    }
    listEntry_t *listEntry;
    list_ForEach(listEntry, inline_object_4->service_attributes) {
        free(listEntry->data);
    }
    list_free(inline_object_4->service_attributes);
    free(inline_object_4->network_id);
    free(inline_object_4->name);
    list_ForEach(listEntry, inline_object_4->posture_check_attributes) {
        any_type_free(listEntry->data);
    }
    list_free(inline_object_4->posture_check_attributes);
    list_ForEach(listEntry, inline_object_4->endpoint_attributes) {
        free(listEntry->data);
    }
    list_free(inline_object_4->endpoint_attributes);
    free(inline_object_4);
}

cJSON *inline_object_4_convertToJSON(inline_object_4_t *inline_object_4) {
    cJSON *item = cJSON_CreateObject();

    // inline_object_4->service_attributes
    if (!inline_object_4->service_attributes) {
        goto fail;
    }
    
    cJSON *service_attributes = cJSON_AddArrayToObject(item, "serviceAttributes");
    if(service_attributes == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *service_attributesListEntry;
    list_ForEach(service_attributesListEntry, inline_object_4->service_attributes) {
    if(cJSON_AddStringToObject(service_attributes, "", (char*)service_attributesListEntry->data) == NULL)
    {
        goto fail;
    }
    }


    // inline_object_4->network_id
    if (!inline_object_4->network_id) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "networkId", inline_object_4->network_id) == NULL) {
    goto fail; //String
    }


    // inline_object_4->name
    if (!inline_object_4->name) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "name", inline_object_4->name) == NULL) {
    goto fail; //String
    }


    // inline_object_4->posture_check_attributes
    if (!inline_object_4->posture_check_attributes) {
        goto fail;
    }
    
    cJSON *posture_check_attributes = cJSON_AddArrayToObject(item, "postureCheckAttributes");
    if(posture_check_attributes == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *posture_check_attributesListEntry;
    if (inline_object_4->posture_check_attributes) {
    list_ForEach(posture_check_attributesListEntry, inline_object_4->posture_check_attributes) {
    cJSON *itemLocal = any_type_convertToJSON(posture_check_attributesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(posture_check_attributes, itemLocal);
    }
    }


    // inline_object_4->endpoint_attributes
    if (!inline_object_4->endpoint_attributes) {
        goto fail;
    }
    
    cJSON *endpoint_attributes = cJSON_AddArrayToObject(item, "endpointAttributes");
    if(endpoint_attributes == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *endpoint_attributesListEntry;
    list_ForEach(endpoint_attributesListEntry, inline_object_4->endpoint_attributes) {
    if(cJSON_AddStringToObject(endpoint_attributes, "", (char*)endpoint_attributesListEntry->data) == NULL)
    {
        goto fail;
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

inline_object_4_t *inline_object_4_parseFromJSON(cJSON *inline_object_4JSON){

    inline_object_4_t *inline_object_4_local_var = NULL;

    // inline_object_4->service_attributes
    cJSON *service_attributes = cJSON_GetObjectItemCaseSensitive(inline_object_4JSON, "serviceAttributes");
    if (!service_attributes) {
        goto end;
    }

    list_t *service_attributesList;
    
    cJSON *service_attributes_local;
    if(!cJSON_IsArray(service_attributes)) {
        goto end;//primitive container
    }
    service_attributesList = list_create();

    cJSON_ArrayForEach(service_attributes_local, service_attributes)
    {
        if(!cJSON_IsString(service_attributes_local))
        {
            goto end;
        }
        list_addElement(service_attributesList , strdup(service_attributes_local->valuestring));
    }

    // inline_object_4->network_id
    cJSON *network_id = cJSON_GetObjectItemCaseSensitive(inline_object_4JSON, "networkId");
    if (!network_id) {
        goto end;
    }

    
    if(!cJSON_IsString(network_id))
    {
    goto end; //String
    }

    // inline_object_4->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(inline_object_4JSON, "name");
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }

    // inline_object_4->posture_check_attributes
    cJSON *posture_check_attributes = cJSON_GetObjectItemCaseSensitive(inline_object_4JSON, "postureCheckAttributes");
    if (!posture_check_attributes) {
        goto end;
    }

    list_t *posture_check_attributesList;
    
    cJSON *posture_check_attributes_local_nonprimitive;
    if(!cJSON_IsArray(posture_check_attributes)){
        goto end; //nonprimitive container
    }

    posture_check_attributesList = list_create();

    cJSON_ArrayForEach(posture_check_attributes_local_nonprimitive,posture_check_attributes )
    {
        if(!cJSON_IsObject(posture_check_attributes_local_nonprimitive)){
            goto end;
        }
        any_type_t *posture_check_attributesItem = any_type_parseFromJSON(posture_check_attributes_local_nonprimitive);

        list_addElement(posture_check_attributesList, posture_check_attributesItem);
    }

    // inline_object_4->endpoint_attributes
    cJSON *endpoint_attributes = cJSON_GetObjectItemCaseSensitive(inline_object_4JSON, "endpointAttributes");
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


    inline_object_4_local_var = inline_object_4_create (
        service_attributesList,
        strdup(network_id->valuestring),
        strdup(name->valuestring),
        posture_check_attributesList,
        endpoint_attributesList
        );

    return inline_object_4_local_var;
end:
    return NULL;

}
