#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "inline_response_200.h"



inline_response_200_t *inline_response_200_create(
    list_t *service_attributes,
    char *network_id,
    char *name,
    char *updated_at,
    list_t *posture_check_attributes,
    char *ziti_id,
    char *owner_identity_id,
    char *id,
    char *created_at,
    char *created_by,
    list_t *endpoint_attributes,
    inline_response_200__links_t *_links
    ) {
    inline_response_200_t *inline_response_200_local_var = malloc(sizeof(inline_response_200_t));
    if (!inline_response_200_local_var) {
        return NULL;
    }
    inline_response_200_local_var->service_attributes = service_attributes;
    inline_response_200_local_var->deleted_at = deleted_at;
    inline_response_200_local_var->network_id = network_id;
    inline_response_200_local_var->name = name;
    inline_response_200_local_var->updated_at = updated_at;
    inline_response_200_local_var->posture_check_attributes = posture_check_attributes;
    inline_response_200_local_var->ziti_id = ziti_id;
    inline_response_200_local_var->owner_identity_id = owner_identity_id;
    inline_response_200_local_var->id = id;
    inline_response_200_local_var->created_at = created_at;
    inline_response_200_local_var->created_by = created_by;
    inline_response_200_local_var->deleted_by = deleted_by;
    inline_response_200_local_var->endpoint_attributes = endpoint_attributes;
    inline_response_200_local_var->_links = _links;

    return inline_response_200_local_var;
}


void inline_response_200_free(inline_response_200_t *inline_response_200) {
    if(NULL == inline_response_200){
        return ;
    }
    listEntry_t *listEntry;
    list_ForEach(listEntry, inline_response_200->service_attributes) {
        free(listEntry->data);
    }
    list_free(inline_response_200->service_attributes);
    free(inline_response_200->network_id);
    free(inline_response_200->name);
    free(inline_response_200->updated_at);
    list_ForEach(listEntry, inline_response_200->posture_check_attributes) {
        any_type_free(listEntry->data);
    }
    list_free(inline_response_200->posture_check_attributes);
    free(inline_response_200->ziti_id);
    free(inline_response_200->owner_identity_id);
    free(inline_response_200->id);
    free(inline_response_200->created_at);
    free(inline_response_200->created_by);
    list_ForEach(listEntry, inline_response_200->endpoint_attributes) {
        free(listEntry->data);
    }
    list_free(inline_response_200->endpoint_attributes);
    inline_response_200__links_free(inline_response_200->_links);
    free(inline_response_200);
}

cJSON *inline_response_200_convertToJSON(inline_response_200_t *inline_response_200) {
    cJSON *item = cJSON_CreateObject();

    // inline_response_200->service_attributes
    if (!inline_response_200->service_attributes) {
        goto fail;
    }
    
    cJSON *service_attributes = cJSON_AddArrayToObject(item, "serviceAttributes");
    if(service_attributes == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *service_attributesListEntry;
    list_ForEach(service_attributesListEntry, inline_response_200->service_attributes) {
    if(cJSON_AddStringToObject(service_attributes, "", (char*)service_attributesListEntry->data) == NULL)
    {
        goto fail;
    }
    }


    // inline_response_200->deleted_at
    if (!inline_response_200->deleted_at) {
        goto fail;
    }
    


    // inline_response_200->network_id
    if (!inline_response_200->network_id) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "networkId", inline_response_200->network_id) == NULL) {
    goto fail; //String
    }


    // inline_response_200->name
    if (!inline_response_200->name) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "name", inline_response_200->name) == NULL) {
    goto fail; //String
    }


    // inline_response_200->updated_at
    if (!inline_response_200->updated_at) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "updatedAt", inline_response_200->updated_at) == NULL) {
    goto fail; //String
    }


    // inline_response_200->posture_check_attributes
    if (!inline_response_200->posture_check_attributes) {
        goto fail;
    }
    
    cJSON *posture_check_attributes = cJSON_AddArrayToObject(item, "postureCheckAttributes");
    if(posture_check_attributes == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *posture_check_attributesListEntry;
    if (inline_response_200->posture_check_attributes) {
    list_ForEach(posture_check_attributesListEntry, inline_response_200->posture_check_attributes) {
    cJSON *itemLocal = any_type_convertToJSON(posture_check_attributesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(posture_check_attributes, itemLocal);
    }
    }


    // inline_response_200->ziti_id
    if (!inline_response_200->ziti_id) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "zitiId", inline_response_200->ziti_id) == NULL) {
    goto fail; //String
    }


    // inline_response_200->owner_identity_id
    if (!inline_response_200->owner_identity_id) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "ownerIdentityId", inline_response_200->owner_identity_id) == NULL) {
    goto fail; //String
    }


    // inline_response_200->id
    if (!inline_response_200->id) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "id", inline_response_200->id) == NULL) {
    goto fail; //String
    }


    // inline_response_200->created_at
    if (!inline_response_200->created_at) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "createdAt", inline_response_200->created_at) == NULL) {
    goto fail; //String
    }


    // inline_response_200->created_by
    if (!inline_response_200->created_by) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "createdBy", inline_response_200->created_by) == NULL) {
    goto fail; //String
    }


    // inline_response_200->deleted_by
    if (!inline_response_200->deleted_by) {
        goto fail;
    }
    


    // inline_response_200->endpoint_attributes
    if (!inline_response_200->endpoint_attributes) {
        goto fail;
    }
    
    cJSON *endpoint_attributes = cJSON_AddArrayToObject(item, "endpointAttributes");
    if(endpoint_attributes == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *endpoint_attributesListEntry;
    list_ForEach(endpoint_attributesListEntry, inline_response_200->endpoint_attributes) {
    if(cJSON_AddStringToObject(endpoint_attributes, "", (char*)endpoint_attributesListEntry->data) == NULL)
    {
        goto fail;
    }
    }


    // inline_response_200->_links
    if (!inline_response_200->_links) {
        goto fail;
    }
    
    cJSON *_links_local_JSON = inline_response_200__links_convertToJSON(inline_response_200->_links);
    if(_links_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "_links", _links_local_JSON);
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

inline_response_200_t *inline_response_200_parseFromJSON(cJSON *inline_response_200JSON){

    inline_response_200_t *inline_response_200_local_var = NULL;

    // inline_response_200->service_attributes
    cJSON *service_attributes = cJSON_GetObjectItemCaseSensitive(inline_response_200JSON, "serviceAttributes");
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

    // inline_response_200->deleted_at
    cJSON *deleted_at = cJSON_GetObjectItemCaseSensitive(inline_response_200JSON, "deletedAt");
    if (!deleted_at) {
        goto end;
    }


    // inline_response_200->network_id
    cJSON *network_id = cJSON_GetObjectItemCaseSensitive(inline_response_200JSON, "networkId");
    if (!network_id) {
        goto end;
    }

    
    if(!cJSON_IsString(network_id))
    {
    goto end; //String
    }

    // inline_response_200->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(inline_response_200JSON, "name");
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }

    // inline_response_200->updated_at
    cJSON *updated_at = cJSON_GetObjectItemCaseSensitive(inline_response_200JSON, "updatedAt");
    if (!updated_at) {
        goto end;
    }

    
    if(!cJSON_IsString(updated_at))
    {
    goto end; //String
    }

    // inline_response_200->posture_check_attributes
    cJSON *posture_check_attributes = cJSON_GetObjectItemCaseSensitive(inline_response_200JSON, "postureCheckAttributes");
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

    // inline_response_200->ziti_id
    cJSON *ziti_id = cJSON_GetObjectItemCaseSensitive(inline_response_200JSON, "zitiId");
    if (!ziti_id) {
        goto end;
    }

    
    if(!cJSON_IsString(ziti_id))
    {
    goto end; //String
    }

    // inline_response_200->owner_identity_id
    cJSON *owner_identity_id = cJSON_GetObjectItemCaseSensitive(inline_response_200JSON, "ownerIdentityId");
    if (!owner_identity_id) {
        goto end;
    }

    
    if(!cJSON_IsString(owner_identity_id))
    {
    goto end; //String
    }

    // inline_response_200->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(inline_response_200JSON, "id");
    if (!id) {
        goto end;
    }

    
    if(!cJSON_IsString(id))
    {
    goto end; //String
    }

    // inline_response_200->created_at
    cJSON *created_at = cJSON_GetObjectItemCaseSensitive(inline_response_200JSON, "createdAt");
    if (!created_at) {
        goto end;
    }

    
    if(!cJSON_IsString(created_at))
    {
    goto end; //String
    }

    // inline_response_200->created_by
    cJSON *created_by = cJSON_GetObjectItemCaseSensitive(inline_response_200JSON, "createdBy");
    if (!created_by) {
        goto end;
    }

    
    if(!cJSON_IsString(created_by))
    {
    goto end; //String
    }

    // inline_response_200->deleted_by
    cJSON *deleted_by = cJSON_GetObjectItemCaseSensitive(inline_response_200JSON, "deletedBy");
    if (!deleted_by) {
        goto end;
    }


    // inline_response_200->endpoint_attributes
    cJSON *endpoint_attributes = cJSON_GetObjectItemCaseSensitive(inline_response_200JSON, "endpointAttributes");
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

    // inline_response_200->_links
    cJSON *_links = cJSON_GetObjectItemCaseSensitive(inline_response_200JSON, "_links");
    if (!_links) {
        goto end;
    }

    inline_response_200__links_t *_links_local_nonprim = NULL;
    
    _links_local_nonprim = inline_response_200__links_parseFromJSON(_links); //nonprimitive


    inline_response_200_local_var = inline_response_200_create (
        service_attributesList,
        strdup(network_id->valuestring),
        strdup(name->valuestring),
        strdup(updated_at->valuestring),
        posture_check_attributesList,
        strdup(ziti_id->valuestring),
        strdup(owner_identity_id->valuestring),
        strdup(id->valuestring),
        strdup(created_at->valuestring),
        strdup(created_by->valuestring),
        endpoint_attributesList,
        _links_local_nonprim
        );

    return inline_response_200_local_var;
end:
    return NULL;

}
