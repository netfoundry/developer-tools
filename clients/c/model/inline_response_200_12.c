#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "inline_response_200_12.h"



inline_response_200_12_t *inline_response_200_12_create(
    char *network_id,
    char *name,
    char *updated_at,
    int online,
    char *ziti_id,
    char *owner_identity_id,
    list_t *attributes,
    char *id,
    char *status,
    char *created_at,
    char *created_by,
    int link_listener,
    int verified,
    inline_response_200__links_t *_links
    ) {
    inline_response_200_12_t *inline_response_200_12_local_var = malloc(sizeof(inline_response_200_12_t));
    if (!inline_response_200_12_local_var) {
        return NULL;
    }
    inline_response_200_12_local_var->deleted_at = deleted_at;
    inline_response_200_12_local_var->network_id = network_id;
    inline_response_200_12_local_var->name = name;
    inline_response_200_12_local_var->updated_at = updated_at;
    inline_response_200_12_local_var->provider = provider;
    inline_response_200_12_local_var->online = online;
    inline_response_200_12_local_var->ziti_id = ziti_id;
    inline_response_200_12_local_var->user_data = user_data;
    inline_response_200_12_local_var->owner_identity_id = owner_identity_id;
    inline_response_200_12_local_var->attributes = attributes;
    inline_response_200_12_local_var->provider_id = provider_id;
    inline_response_200_12_local_var->jwt = jwt;
    inline_response_200_12_local_var->id = id;
    inline_response_200_12_local_var->ip_address = ip_address;
    inline_response_200_12_local_var->status = status;
    inline_response_200_12_local_var->host_id = host_id;
    inline_response_200_12_local_var->created_at = created_at;
    inline_response_200_12_local_var->created_by = created_by;
    inline_response_200_12_local_var->deleted_by = deleted_by;
    inline_response_200_12_local_var->location_metadata_id = location_metadata_id;
    inline_response_200_12_local_var->link_listener = link_listener;
    inline_response_200_12_local_var->data_center_id = data_center_id;
    inline_response_200_12_local_var->verified = verified;
    inline_response_200_12_local_var->_links = _links;

    return inline_response_200_12_local_var;
}


void inline_response_200_12_free(inline_response_200_12_t *inline_response_200_12) {
    if(NULL == inline_response_200_12){
        return ;
    }
    listEntry_t *listEntry;
    free(inline_response_200_12->network_id);
    free(inline_response_200_12->name);
    free(inline_response_200_12->updated_at);
    free(inline_response_200_12->ziti_id);
    free(inline_response_200_12->owner_identity_id);
    list_ForEach(listEntry, inline_response_200_12->attributes) {
        free(listEntry->data);
    }
    list_free(inline_response_200_12->attributes);
    free(inline_response_200_12->id);
    free(inline_response_200_12->status);
    free(inline_response_200_12->created_at);
    free(inline_response_200_12->created_by);
    inline_response_200__links_free(inline_response_200_12->_links);
    free(inline_response_200_12);
}

cJSON *inline_response_200_12_convertToJSON(inline_response_200_12_t *inline_response_200_12) {
    cJSON *item = cJSON_CreateObject();

    // inline_response_200_12->deleted_at
    if (!inline_response_200_12->deleted_at) {
        goto fail;
    }
    


    // inline_response_200_12->network_id
    if (!inline_response_200_12->network_id) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "networkId", inline_response_200_12->network_id) == NULL) {
    goto fail; //String
    }


    // inline_response_200_12->name
    if (!inline_response_200_12->name) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "name", inline_response_200_12->name) == NULL) {
    goto fail; //String
    }


    // inline_response_200_12->updated_at
    if (!inline_response_200_12->updated_at) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "updatedAt", inline_response_200_12->updated_at) == NULL) {
    goto fail; //String
    }


    // inline_response_200_12->provider
    if (!inline_response_200_12->provider) {
        goto fail;
    }
    


    // inline_response_200_12->online
    if (!inline_response_200_12->online) {
        goto fail;
    }
    
    if(cJSON_AddBoolToObject(item, "online", inline_response_200_12->online) == NULL) {
    goto fail; //Bool
    }


    // inline_response_200_12->ziti_id
    if (!inline_response_200_12->ziti_id) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "zitiId", inline_response_200_12->ziti_id) == NULL) {
    goto fail; //String
    }


    // inline_response_200_12->user_data
    if (!inline_response_200_12->user_data) {
        goto fail;
    }
    


    // inline_response_200_12->owner_identity_id
    if (!inline_response_200_12->owner_identity_id) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "ownerIdentityId", inline_response_200_12->owner_identity_id) == NULL) {
    goto fail; //String
    }


    // inline_response_200_12->attributes
    if (!inline_response_200_12->attributes) {
        goto fail;
    }
    
    cJSON *attributes = cJSON_AddArrayToObject(item, "attributes");
    if(attributes == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *attributesListEntry;
    list_ForEach(attributesListEntry, inline_response_200_12->attributes) {
    if(cJSON_AddStringToObject(attributes, "", (char*)attributesListEntry->data) == NULL)
    {
        goto fail;
    }
    }


    // inline_response_200_12->provider_id
    if (!inline_response_200_12->provider_id) {
        goto fail;
    }
    


    // inline_response_200_12->jwt
    if (!inline_response_200_12->jwt) {
        goto fail;
    }
    


    // inline_response_200_12->id
    if (!inline_response_200_12->id) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "id", inline_response_200_12->id) == NULL) {
    goto fail; //String
    }


    // inline_response_200_12->ip_address
    if (!inline_response_200_12->ip_address) {
        goto fail;
    }
    


    // inline_response_200_12->status
    if (!inline_response_200_12->status) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "status", inline_response_200_12->status) == NULL) {
    goto fail; //String
    }


    // inline_response_200_12->host_id
    if (!inline_response_200_12->host_id) {
        goto fail;
    }
    


    // inline_response_200_12->created_at
    if (!inline_response_200_12->created_at) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "createdAt", inline_response_200_12->created_at) == NULL) {
    goto fail; //String
    }


    // inline_response_200_12->created_by
    if (!inline_response_200_12->created_by) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "createdBy", inline_response_200_12->created_by) == NULL) {
    goto fail; //String
    }


    // inline_response_200_12->deleted_by
    if (!inline_response_200_12->deleted_by) {
        goto fail;
    }
    


    // inline_response_200_12->location_metadata_id
    if (!inline_response_200_12->location_metadata_id) {
        goto fail;
    }
    


    // inline_response_200_12->link_listener
    if (!inline_response_200_12->link_listener) {
        goto fail;
    }
    
    if(cJSON_AddBoolToObject(item, "linkListener", inline_response_200_12->link_listener) == NULL) {
    goto fail; //Bool
    }


    // inline_response_200_12->data_center_id
    if (!inline_response_200_12->data_center_id) {
        goto fail;
    }
    


    // inline_response_200_12->verified
    if (!inline_response_200_12->verified) {
        goto fail;
    }
    
    if(cJSON_AddBoolToObject(item, "verified", inline_response_200_12->verified) == NULL) {
    goto fail; //Bool
    }


    // inline_response_200_12->_links
    if (!inline_response_200_12->_links) {
        goto fail;
    }
    
    cJSON *_links_local_JSON = inline_response_200__links_convertToJSON(inline_response_200_12->_links);
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

inline_response_200_12_t *inline_response_200_12_parseFromJSON(cJSON *inline_response_200_12JSON){

    inline_response_200_12_t *inline_response_200_12_local_var = NULL;

    // inline_response_200_12->deleted_at
    cJSON *deleted_at = cJSON_GetObjectItemCaseSensitive(inline_response_200_12JSON, "deletedAt");
    if (!deleted_at) {
        goto end;
    }


    // inline_response_200_12->network_id
    cJSON *network_id = cJSON_GetObjectItemCaseSensitive(inline_response_200_12JSON, "networkId");
    if (!network_id) {
        goto end;
    }

    
    if(!cJSON_IsString(network_id))
    {
    goto end; //String
    }

    // inline_response_200_12->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(inline_response_200_12JSON, "name");
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }

    // inline_response_200_12->updated_at
    cJSON *updated_at = cJSON_GetObjectItemCaseSensitive(inline_response_200_12JSON, "updatedAt");
    if (!updated_at) {
        goto end;
    }

    
    if(!cJSON_IsString(updated_at))
    {
    goto end; //String
    }

    // inline_response_200_12->provider
    cJSON *provider = cJSON_GetObjectItemCaseSensitive(inline_response_200_12JSON, "provider");
    if (!provider) {
        goto end;
    }


    // inline_response_200_12->online
    cJSON *online = cJSON_GetObjectItemCaseSensitive(inline_response_200_12JSON, "online");
    if (!online) {
        goto end;
    }

    
    if(!cJSON_IsBool(online))
    {
    goto end; //Bool
    }

    // inline_response_200_12->ziti_id
    cJSON *ziti_id = cJSON_GetObjectItemCaseSensitive(inline_response_200_12JSON, "zitiId");
    if (!ziti_id) {
        goto end;
    }

    
    if(!cJSON_IsString(ziti_id))
    {
    goto end; //String
    }

    // inline_response_200_12->user_data
    cJSON *user_data = cJSON_GetObjectItemCaseSensitive(inline_response_200_12JSON, "userData");
    if (!user_data) {
        goto end;
    }


    // inline_response_200_12->owner_identity_id
    cJSON *owner_identity_id = cJSON_GetObjectItemCaseSensitive(inline_response_200_12JSON, "ownerIdentityId");
    if (!owner_identity_id) {
        goto end;
    }

    
    if(!cJSON_IsString(owner_identity_id))
    {
    goto end; //String
    }

    // inline_response_200_12->attributes
    cJSON *attributes = cJSON_GetObjectItemCaseSensitive(inline_response_200_12JSON, "attributes");
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

    // inline_response_200_12->provider_id
    cJSON *provider_id = cJSON_GetObjectItemCaseSensitive(inline_response_200_12JSON, "providerId");
    if (!provider_id) {
        goto end;
    }


    // inline_response_200_12->jwt
    cJSON *jwt = cJSON_GetObjectItemCaseSensitive(inline_response_200_12JSON, "jwt");
    if (!jwt) {
        goto end;
    }


    // inline_response_200_12->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(inline_response_200_12JSON, "id");
    if (!id) {
        goto end;
    }

    
    if(!cJSON_IsString(id))
    {
    goto end; //String
    }

    // inline_response_200_12->ip_address
    cJSON *ip_address = cJSON_GetObjectItemCaseSensitive(inline_response_200_12JSON, "ipAddress");
    if (!ip_address) {
        goto end;
    }


    // inline_response_200_12->status
    cJSON *status = cJSON_GetObjectItemCaseSensitive(inline_response_200_12JSON, "status");
    if (!status) {
        goto end;
    }

    
    if(!cJSON_IsString(status))
    {
    goto end; //String
    }

    // inline_response_200_12->host_id
    cJSON *host_id = cJSON_GetObjectItemCaseSensitive(inline_response_200_12JSON, "hostId");
    if (!host_id) {
        goto end;
    }


    // inline_response_200_12->created_at
    cJSON *created_at = cJSON_GetObjectItemCaseSensitive(inline_response_200_12JSON, "createdAt");
    if (!created_at) {
        goto end;
    }

    
    if(!cJSON_IsString(created_at))
    {
    goto end; //String
    }

    // inline_response_200_12->created_by
    cJSON *created_by = cJSON_GetObjectItemCaseSensitive(inline_response_200_12JSON, "createdBy");
    if (!created_by) {
        goto end;
    }

    
    if(!cJSON_IsString(created_by))
    {
    goto end; //String
    }

    // inline_response_200_12->deleted_by
    cJSON *deleted_by = cJSON_GetObjectItemCaseSensitive(inline_response_200_12JSON, "deletedBy");
    if (!deleted_by) {
        goto end;
    }


    // inline_response_200_12->location_metadata_id
    cJSON *location_metadata_id = cJSON_GetObjectItemCaseSensitive(inline_response_200_12JSON, "locationMetadataId");
    if (!location_metadata_id) {
        goto end;
    }


    // inline_response_200_12->link_listener
    cJSON *link_listener = cJSON_GetObjectItemCaseSensitive(inline_response_200_12JSON, "linkListener");
    if (!link_listener) {
        goto end;
    }

    
    if(!cJSON_IsBool(link_listener))
    {
    goto end; //Bool
    }

    // inline_response_200_12->data_center_id
    cJSON *data_center_id = cJSON_GetObjectItemCaseSensitive(inline_response_200_12JSON, "dataCenterId");
    if (!data_center_id) {
        goto end;
    }


    // inline_response_200_12->verified
    cJSON *verified = cJSON_GetObjectItemCaseSensitive(inline_response_200_12JSON, "verified");
    if (!verified) {
        goto end;
    }

    
    if(!cJSON_IsBool(verified))
    {
    goto end; //Bool
    }

    // inline_response_200_12->_links
    cJSON *_links = cJSON_GetObjectItemCaseSensitive(inline_response_200_12JSON, "_links");
    if (!_links) {
        goto end;
    }

    inline_response_200__links_t *_links_local_nonprim = NULL;
    
    _links_local_nonprim = inline_response_200__links_parseFromJSON(_links); //nonprimitive


    inline_response_200_12_local_var = inline_response_200_12_create (
        strdup(network_id->valuestring),
        strdup(name->valuestring),
        strdup(updated_at->valuestring),
        online->valueint,
        strdup(ziti_id->valuestring),
        strdup(owner_identity_id->valuestring),
        attributesList,
        strdup(id->valuestring),
        strdup(status->valuestring),
        strdup(created_at->valuestring),
        strdup(created_by->valuestring),
        link_listener->valueint,
        verified->valueint,
        _links_local_nonprim
        );

    return inline_response_200_12_local_var;
end:
    return NULL;

}
