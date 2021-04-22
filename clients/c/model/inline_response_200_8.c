#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "inline_response_200_8.h"



inline_response_200_8_t *inline_response_200_8_create(
    int mfa_enabled,
    char *network_id,
    char *name,
    char *updated_at,
    char *ziti_id,
    char *owner_identity_id,
    int has_edge_router_connection,
    list_t *attributes,
    int has_api_session,
    char *jwt,
    char *id,
    int session_active,
    char *jwt_expires_at,
    char *created_at,
    char *created_by,
    inline_response_200__links_t *_links
    ) {
    inline_response_200_8_t *inline_response_200_8_local_var = malloc(sizeof(inline_response_200_8_t));
    if (!inline_response_200_8_local_var) {
        return NULL;
    }
    inline_response_200_8_local_var->mfa_enabled = mfa_enabled;
    inline_response_200_8_local_var->deleted_at = deleted_at;
    inline_response_200_8_local_var->network_id = network_id;
    inline_response_200_8_local_var->name = name;
    inline_response_200_8_local_var->updated_at = updated_at;
    inline_response_200_8_local_var->sync_id = sync_id;
    inline_response_200_8_local_var->session_identity_id = session_identity_id;
    inline_response_200_8_local_var->os_release = os_release;
    inline_response_200_8_local_var->sync_resource_id = sync_resource_id;
    inline_response_200_8_local_var->ziti_id = ziti_id;
    inline_response_200_8_local_var->app_version = app_version;
    inline_response_200_8_local_var->branch = branch;
    inline_response_200_8_local_var->os = os;
    inline_response_200_8_local_var->owner_identity_id = owner_identity_id;
    inline_response_200_8_local_var->has_edge_router_connection = has_edge_router_connection;
    inline_response_200_8_local_var->attributes = attributes;
    inline_response_200_8_local_var->has_api_session = has_api_session;
    inline_response_200_8_local_var->revision = revision;
    inline_response_200_8_local_var->version = version;
    inline_response_200_8_local_var->jwt = jwt;
    inline_response_200_8_local_var->id = id;
    inline_response_200_8_local_var->session_active = session_active;
    inline_response_200_8_local_var->jwt_expires_at = jwt_expires_at;
    inline_response_200_8_local_var->created_at = created_at;
    inline_response_200_8_local_var->arch = arch;
    inline_response_200_8_local_var->created_by = created_by;
    inline_response_200_8_local_var->deleted_by = deleted_by;
    inline_response_200_8_local_var->type = type;
    inline_response_200_8_local_var->os_version = os_version;
    inline_response_200_8_local_var->app_id = app_id;
    inline_response_200_8_local_var->_links = _links;

    return inline_response_200_8_local_var;
}


void inline_response_200_8_free(inline_response_200_8_t *inline_response_200_8) {
    if(NULL == inline_response_200_8){
        return ;
    }
    listEntry_t *listEntry;
    free(inline_response_200_8->network_id);
    free(inline_response_200_8->name);
    free(inline_response_200_8->updated_at);
    free(inline_response_200_8->ziti_id);
    free(inline_response_200_8->owner_identity_id);
    list_ForEach(listEntry, inline_response_200_8->attributes) {
        free(listEntry->data);
    }
    list_free(inline_response_200_8->attributes);
    free(inline_response_200_8->jwt);
    free(inline_response_200_8->id);
    free(inline_response_200_8->jwt_expires_at);
    free(inline_response_200_8->created_at);
    free(inline_response_200_8->created_by);
    inline_response_200__links_free(inline_response_200_8->_links);
    free(inline_response_200_8);
}

cJSON *inline_response_200_8_convertToJSON(inline_response_200_8_t *inline_response_200_8) {
    cJSON *item = cJSON_CreateObject();

    // inline_response_200_8->mfa_enabled
    if (!inline_response_200_8->mfa_enabled) {
        goto fail;
    }
    
    if(cJSON_AddBoolToObject(item, "mfaEnabled", inline_response_200_8->mfa_enabled) == NULL) {
    goto fail; //Bool
    }


    // inline_response_200_8->deleted_at
    if (!inline_response_200_8->deleted_at) {
        goto fail;
    }
    


    // inline_response_200_8->network_id
    if (!inline_response_200_8->network_id) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "networkId", inline_response_200_8->network_id) == NULL) {
    goto fail; //String
    }


    // inline_response_200_8->name
    if (!inline_response_200_8->name) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "name", inline_response_200_8->name) == NULL) {
    goto fail; //String
    }


    // inline_response_200_8->updated_at
    if (!inline_response_200_8->updated_at) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "updatedAt", inline_response_200_8->updated_at) == NULL) {
    goto fail; //String
    }


    // inline_response_200_8->sync_id
    if (!inline_response_200_8->sync_id) {
        goto fail;
    }
    


    // inline_response_200_8->session_identity_id
    if (!inline_response_200_8->session_identity_id) {
        goto fail;
    }
    


    // inline_response_200_8->os_release
    if (!inline_response_200_8->os_release) {
        goto fail;
    }
    


    // inline_response_200_8->sync_resource_id
    if (!inline_response_200_8->sync_resource_id) {
        goto fail;
    }
    


    // inline_response_200_8->ziti_id
    if (!inline_response_200_8->ziti_id) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "zitiId", inline_response_200_8->ziti_id) == NULL) {
    goto fail; //String
    }


    // inline_response_200_8->app_version
    if (!inline_response_200_8->app_version) {
        goto fail;
    }
    


    // inline_response_200_8->branch
    if (!inline_response_200_8->branch) {
        goto fail;
    }
    


    // inline_response_200_8->os
    if (!inline_response_200_8->os) {
        goto fail;
    }
    


    // inline_response_200_8->owner_identity_id
    if (!inline_response_200_8->owner_identity_id) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "ownerIdentityId", inline_response_200_8->owner_identity_id) == NULL) {
    goto fail; //String
    }


    // inline_response_200_8->has_edge_router_connection
    if (!inline_response_200_8->has_edge_router_connection) {
        goto fail;
    }
    
    if(cJSON_AddBoolToObject(item, "hasEdgeRouterConnection", inline_response_200_8->has_edge_router_connection) == NULL) {
    goto fail; //Bool
    }


    // inline_response_200_8->attributes
    if (!inline_response_200_8->attributes) {
        goto fail;
    }
    
    cJSON *attributes = cJSON_AddArrayToObject(item, "attributes");
    if(attributes == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *attributesListEntry;
    list_ForEach(attributesListEntry, inline_response_200_8->attributes) {
    if(cJSON_AddStringToObject(attributes, "", (char*)attributesListEntry->data) == NULL)
    {
        goto fail;
    }
    }


    // inline_response_200_8->has_api_session
    if (!inline_response_200_8->has_api_session) {
        goto fail;
    }
    
    if(cJSON_AddBoolToObject(item, "hasApiSession", inline_response_200_8->has_api_session) == NULL) {
    goto fail; //Bool
    }


    // inline_response_200_8->revision
    if (!inline_response_200_8->revision) {
        goto fail;
    }
    


    // inline_response_200_8->version
    if (!inline_response_200_8->version) {
        goto fail;
    }
    


    // inline_response_200_8->jwt
    if (!inline_response_200_8->jwt) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "jwt", inline_response_200_8->jwt) == NULL) {
    goto fail; //String
    }


    // inline_response_200_8->id
    if (!inline_response_200_8->id) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "id", inline_response_200_8->id) == NULL) {
    goto fail; //String
    }


    // inline_response_200_8->session_active
    if (!inline_response_200_8->session_active) {
        goto fail;
    }
    
    if(cJSON_AddBoolToObject(item, "sessionActive", inline_response_200_8->session_active) == NULL) {
    goto fail; //Bool
    }


    // inline_response_200_8->jwt_expires_at
    if (!inline_response_200_8->jwt_expires_at) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "jwtExpiresAt", inline_response_200_8->jwt_expires_at) == NULL) {
    goto fail; //String
    }


    // inline_response_200_8->created_at
    if (!inline_response_200_8->created_at) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "createdAt", inline_response_200_8->created_at) == NULL) {
    goto fail; //String
    }


    // inline_response_200_8->arch
    if (!inline_response_200_8->arch) {
        goto fail;
    }
    


    // inline_response_200_8->created_by
    if (!inline_response_200_8->created_by) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "createdBy", inline_response_200_8->created_by) == NULL) {
    goto fail; //String
    }


    // inline_response_200_8->deleted_by
    if (!inline_response_200_8->deleted_by) {
        goto fail;
    }
    


    // inline_response_200_8->type
    if (!inline_response_200_8->type) {
        goto fail;
    }
    


    // inline_response_200_8->os_version
    if (!inline_response_200_8->os_version) {
        goto fail;
    }
    


    // inline_response_200_8->app_id
    if (!inline_response_200_8->app_id) {
        goto fail;
    }
    


    // inline_response_200_8->_links
    if (!inline_response_200_8->_links) {
        goto fail;
    }
    
    cJSON *_links_local_JSON = inline_response_200__links_convertToJSON(inline_response_200_8->_links);
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

inline_response_200_8_t *inline_response_200_8_parseFromJSON(cJSON *inline_response_200_8JSON){

    inline_response_200_8_t *inline_response_200_8_local_var = NULL;

    // inline_response_200_8->mfa_enabled
    cJSON *mfa_enabled = cJSON_GetObjectItemCaseSensitive(inline_response_200_8JSON, "mfaEnabled");
    if (!mfa_enabled) {
        goto end;
    }

    
    if(!cJSON_IsBool(mfa_enabled))
    {
    goto end; //Bool
    }

    // inline_response_200_8->deleted_at
    cJSON *deleted_at = cJSON_GetObjectItemCaseSensitive(inline_response_200_8JSON, "deletedAt");
    if (!deleted_at) {
        goto end;
    }


    // inline_response_200_8->network_id
    cJSON *network_id = cJSON_GetObjectItemCaseSensitive(inline_response_200_8JSON, "networkId");
    if (!network_id) {
        goto end;
    }

    
    if(!cJSON_IsString(network_id))
    {
    goto end; //String
    }

    // inline_response_200_8->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(inline_response_200_8JSON, "name");
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }

    // inline_response_200_8->updated_at
    cJSON *updated_at = cJSON_GetObjectItemCaseSensitive(inline_response_200_8JSON, "updatedAt");
    if (!updated_at) {
        goto end;
    }

    
    if(!cJSON_IsString(updated_at))
    {
    goto end; //String
    }

    // inline_response_200_8->sync_id
    cJSON *sync_id = cJSON_GetObjectItemCaseSensitive(inline_response_200_8JSON, "syncId");
    if (!sync_id) {
        goto end;
    }


    // inline_response_200_8->session_identity_id
    cJSON *session_identity_id = cJSON_GetObjectItemCaseSensitive(inline_response_200_8JSON, "sessionIdentityId");
    if (!session_identity_id) {
        goto end;
    }


    // inline_response_200_8->os_release
    cJSON *os_release = cJSON_GetObjectItemCaseSensitive(inline_response_200_8JSON, "osRelease");
    if (!os_release) {
        goto end;
    }


    // inline_response_200_8->sync_resource_id
    cJSON *sync_resource_id = cJSON_GetObjectItemCaseSensitive(inline_response_200_8JSON, "syncResourceId");
    if (!sync_resource_id) {
        goto end;
    }


    // inline_response_200_8->ziti_id
    cJSON *ziti_id = cJSON_GetObjectItemCaseSensitive(inline_response_200_8JSON, "zitiId");
    if (!ziti_id) {
        goto end;
    }

    
    if(!cJSON_IsString(ziti_id))
    {
    goto end; //String
    }

    // inline_response_200_8->app_version
    cJSON *app_version = cJSON_GetObjectItemCaseSensitive(inline_response_200_8JSON, "appVersion");
    if (!app_version) {
        goto end;
    }


    // inline_response_200_8->branch
    cJSON *branch = cJSON_GetObjectItemCaseSensitive(inline_response_200_8JSON, "branch");
    if (!branch) {
        goto end;
    }


    // inline_response_200_8->os
    cJSON *os = cJSON_GetObjectItemCaseSensitive(inline_response_200_8JSON, "os");
    if (!os) {
        goto end;
    }


    // inline_response_200_8->owner_identity_id
    cJSON *owner_identity_id = cJSON_GetObjectItemCaseSensitive(inline_response_200_8JSON, "ownerIdentityId");
    if (!owner_identity_id) {
        goto end;
    }

    
    if(!cJSON_IsString(owner_identity_id))
    {
    goto end; //String
    }

    // inline_response_200_8->has_edge_router_connection
    cJSON *has_edge_router_connection = cJSON_GetObjectItemCaseSensitive(inline_response_200_8JSON, "hasEdgeRouterConnection");
    if (!has_edge_router_connection) {
        goto end;
    }

    
    if(!cJSON_IsBool(has_edge_router_connection))
    {
    goto end; //Bool
    }

    // inline_response_200_8->attributes
    cJSON *attributes = cJSON_GetObjectItemCaseSensitive(inline_response_200_8JSON, "attributes");
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

    // inline_response_200_8->has_api_session
    cJSON *has_api_session = cJSON_GetObjectItemCaseSensitive(inline_response_200_8JSON, "hasApiSession");
    if (!has_api_session) {
        goto end;
    }

    
    if(!cJSON_IsBool(has_api_session))
    {
    goto end; //Bool
    }

    // inline_response_200_8->revision
    cJSON *revision = cJSON_GetObjectItemCaseSensitive(inline_response_200_8JSON, "revision");
    if (!revision) {
        goto end;
    }


    // inline_response_200_8->version
    cJSON *version = cJSON_GetObjectItemCaseSensitive(inline_response_200_8JSON, "version");
    if (!version) {
        goto end;
    }


    // inline_response_200_8->jwt
    cJSON *jwt = cJSON_GetObjectItemCaseSensitive(inline_response_200_8JSON, "jwt");
    if (!jwt) {
        goto end;
    }

    
    if(!cJSON_IsString(jwt))
    {
    goto end; //String
    }

    // inline_response_200_8->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(inline_response_200_8JSON, "id");
    if (!id) {
        goto end;
    }

    
    if(!cJSON_IsString(id))
    {
    goto end; //String
    }

    // inline_response_200_8->session_active
    cJSON *session_active = cJSON_GetObjectItemCaseSensitive(inline_response_200_8JSON, "sessionActive");
    if (!session_active) {
        goto end;
    }

    
    if(!cJSON_IsBool(session_active))
    {
    goto end; //Bool
    }

    // inline_response_200_8->jwt_expires_at
    cJSON *jwt_expires_at = cJSON_GetObjectItemCaseSensitive(inline_response_200_8JSON, "jwtExpiresAt");
    if (!jwt_expires_at) {
        goto end;
    }

    
    if(!cJSON_IsString(jwt_expires_at))
    {
    goto end; //String
    }

    // inline_response_200_8->created_at
    cJSON *created_at = cJSON_GetObjectItemCaseSensitive(inline_response_200_8JSON, "createdAt");
    if (!created_at) {
        goto end;
    }

    
    if(!cJSON_IsString(created_at))
    {
    goto end; //String
    }

    // inline_response_200_8->arch
    cJSON *arch = cJSON_GetObjectItemCaseSensitive(inline_response_200_8JSON, "arch");
    if (!arch) {
        goto end;
    }


    // inline_response_200_8->created_by
    cJSON *created_by = cJSON_GetObjectItemCaseSensitive(inline_response_200_8JSON, "createdBy");
    if (!created_by) {
        goto end;
    }

    
    if(!cJSON_IsString(created_by))
    {
    goto end; //String
    }

    // inline_response_200_8->deleted_by
    cJSON *deleted_by = cJSON_GetObjectItemCaseSensitive(inline_response_200_8JSON, "deletedBy");
    if (!deleted_by) {
        goto end;
    }


    // inline_response_200_8->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(inline_response_200_8JSON, "type");
    if (!type) {
        goto end;
    }


    // inline_response_200_8->os_version
    cJSON *os_version = cJSON_GetObjectItemCaseSensitive(inline_response_200_8JSON, "osVersion");
    if (!os_version) {
        goto end;
    }


    // inline_response_200_8->app_id
    cJSON *app_id = cJSON_GetObjectItemCaseSensitive(inline_response_200_8JSON, "appId");
    if (!app_id) {
        goto end;
    }


    // inline_response_200_8->_links
    cJSON *_links = cJSON_GetObjectItemCaseSensitive(inline_response_200_8JSON, "_links");
    if (!_links) {
        goto end;
    }

    inline_response_200__links_t *_links_local_nonprim = NULL;
    
    _links_local_nonprim = inline_response_200__links_parseFromJSON(_links); //nonprimitive


    inline_response_200_8_local_var = inline_response_200_8_create (
        mfa_enabled->valueint,
        strdup(network_id->valuestring),
        strdup(name->valuestring),
        strdup(updated_at->valuestring),
        strdup(ziti_id->valuestring),
        strdup(owner_identity_id->valuestring),
        has_edge_router_connection->valueint,
        attributesList,
        has_api_session->valueint,
        strdup(jwt->valuestring),
        strdup(id->valuestring),
        session_active->valueint,
        strdup(jwt_expires_at->valuestring),
        strdup(created_at->valuestring),
        strdup(created_by->valuestring),
        _links_local_nonprim
        );

    return inline_response_200_8_local_var;
end:
    return NULL;

}
