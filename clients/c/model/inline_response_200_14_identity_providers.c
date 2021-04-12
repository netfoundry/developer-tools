#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "inline_response_200_14_identity_providers.h"



inline_response_200_14_identity_providers_t *inline_response_200_14_identity_providers_create(
    char *name,
    char *auth0_connection_type,
    char *auth0_connection_id,
    char *id,
    inline_response_200_14_updated_at_t *created_at,
    char *organization_id,
    int active
    ) {
    inline_response_200_14_identity_providers_t *inline_response_200_14_identity_providers_local_var = malloc(sizeof(inline_response_200_14_identity_providers_t));
    if (!inline_response_200_14_identity_providers_local_var) {
        return NULL;
    }
    inline_response_200_14_identity_providers_local_var->deleted_at = deleted_at;
    inline_response_200_14_identity_providers_local_var->name = name;
    inline_response_200_14_identity_providers_local_var->updated_at = updated_at;
    inline_response_200_14_identity_providers_local_var->auth0_connection_type = auth0_connection_type;
    inline_response_200_14_identity_providers_local_var->auth0_connection_id = auth0_connection_id;
    inline_response_200_14_identity_providers_local_var->id = id;
    inline_response_200_14_identity_providers_local_var->created_at = created_at;
    inline_response_200_14_identity_providers_local_var->organization_id = organization_id;
    inline_response_200_14_identity_providers_local_var->active = active;

    return inline_response_200_14_identity_providers_local_var;
}


void inline_response_200_14_identity_providers_free(inline_response_200_14_identity_providers_t *inline_response_200_14_identity_providers) {
    if(NULL == inline_response_200_14_identity_providers){
        return ;
    }
    listEntry_t *listEntry;
    free(inline_response_200_14_identity_providers->name);
    free(inline_response_200_14_identity_providers->auth0_connection_type);
    free(inline_response_200_14_identity_providers->auth0_connection_id);
    free(inline_response_200_14_identity_providers->id);
    inline_response_200_14_updated_at_free(inline_response_200_14_identity_providers->created_at);
    free(inline_response_200_14_identity_providers->organization_id);
    free(inline_response_200_14_identity_providers);
}

cJSON *inline_response_200_14_identity_providers_convertToJSON(inline_response_200_14_identity_providers_t *inline_response_200_14_identity_providers) {
    cJSON *item = cJSON_CreateObject();

    // inline_response_200_14_identity_providers->deleted_at
    if (!inline_response_200_14_identity_providers->deleted_at) {
        goto fail;
    }
    


    // inline_response_200_14_identity_providers->name
    if (!inline_response_200_14_identity_providers->name) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "name", inline_response_200_14_identity_providers->name) == NULL) {
    goto fail; //String
    }


    // inline_response_200_14_identity_providers->updated_at
    if (!inline_response_200_14_identity_providers->updated_at) {
        goto fail;
    }
    


    // inline_response_200_14_identity_providers->auth0_connection_type
    if (!inline_response_200_14_identity_providers->auth0_connection_type) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "auth0ConnectionType", inline_response_200_14_identity_providers->auth0_connection_type) == NULL) {
    goto fail; //String
    }


    // inline_response_200_14_identity_providers->auth0_connection_id
    if (!inline_response_200_14_identity_providers->auth0_connection_id) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "auth0ConnectionId", inline_response_200_14_identity_providers->auth0_connection_id) == NULL) {
    goto fail; //String
    }


    // inline_response_200_14_identity_providers->id
    if (!inline_response_200_14_identity_providers->id) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "id", inline_response_200_14_identity_providers->id) == NULL) {
    goto fail; //String
    }


    // inline_response_200_14_identity_providers->created_at
    if (!inline_response_200_14_identity_providers->created_at) {
        goto fail;
    }
    
    cJSON *created_at_local_JSON = inline_response_200_14_updated_at_convertToJSON(inline_response_200_14_identity_providers->created_at);
    if(created_at_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "createdAt", created_at_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // inline_response_200_14_identity_providers->organization_id
    if (!inline_response_200_14_identity_providers->organization_id) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "organizationId", inline_response_200_14_identity_providers->organization_id) == NULL) {
    goto fail; //String
    }


    // inline_response_200_14_identity_providers->active
    if (!inline_response_200_14_identity_providers->active) {
        goto fail;
    }
    
    if(cJSON_AddBoolToObject(item, "active", inline_response_200_14_identity_providers->active) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

inline_response_200_14_identity_providers_t *inline_response_200_14_identity_providers_parseFromJSON(cJSON *inline_response_200_14_identity_providersJSON){

    inline_response_200_14_identity_providers_t *inline_response_200_14_identity_providers_local_var = NULL;

    // inline_response_200_14_identity_providers->deleted_at
    cJSON *deleted_at = cJSON_GetObjectItemCaseSensitive(inline_response_200_14_identity_providersJSON, "deletedAt");
    if (!deleted_at) {
        goto end;
    }


    // inline_response_200_14_identity_providers->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(inline_response_200_14_identity_providersJSON, "name");
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }

    // inline_response_200_14_identity_providers->updated_at
    cJSON *updated_at = cJSON_GetObjectItemCaseSensitive(inline_response_200_14_identity_providersJSON, "updatedAt");
    if (!updated_at) {
        goto end;
    }


    // inline_response_200_14_identity_providers->auth0_connection_type
    cJSON *auth0_connection_type = cJSON_GetObjectItemCaseSensitive(inline_response_200_14_identity_providersJSON, "auth0ConnectionType");
    if (!auth0_connection_type) {
        goto end;
    }

    
    if(!cJSON_IsString(auth0_connection_type))
    {
    goto end; //String
    }

    // inline_response_200_14_identity_providers->auth0_connection_id
    cJSON *auth0_connection_id = cJSON_GetObjectItemCaseSensitive(inline_response_200_14_identity_providersJSON, "auth0ConnectionId");
    if (!auth0_connection_id) {
        goto end;
    }

    
    if(!cJSON_IsString(auth0_connection_id))
    {
    goto end; //String
    }

    // inline_response_200_14_identity_providers->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(inline_response_200_14_identity_providersJSON, "id");
    if (!id) {
        goto end;
    }

    
    if(!cJSON_IsString(id))
    {
    goto end; //String
    }

    // inline_response_200_14_identity_providers->created_at
    cJSON *created_at = cJSON_GetObjectItemCaseSensitive(inline_response_200_14_identity_providersJSON, "createdAt");
    if (!created_at) {
        goto end;
    }

    inline_response_200_14_updated_at_t *created_at_local_nonprim = NULL;
    
    created_at_local_nonprim = inline_response_200_14_updated_at_parseFromJSON(created_at); //nonprimitive

    // inline_response_200_14_identity_providers->organization_id
    cJSON *organization_id = cJSON_GetObjectItemCaseSensitive(inline_response_200_14_identity_providersJSON, "organizationId");
    if (!organization_id) {
        goto end;
    }

    
    if(!cJSON_IsString(organization_id))
    {
    goto end; //String
    }

    // inline_response_200_14_identity_providers->active
    cJSON *active = cJSON_GetObjectItemCaseSensitive(inline_response_200_14_identity_providersJSON, "active");
    if (!active) {
        goto end;
    }

    
    if(!cJSON_IsBool(active))
    {
    goto end; //Bool
    }


    inline_response_200_14_identity_providers_local_var = inline_response_200_14_identity_providers_create (
        strdup(name->valuestring),
        strdup(auth0_connection_type->valuestring),
        strdup(auth0_connection_id->valuestring),
        strdup(id->valuestring),
        created_at_local_nonprim,
        strdup(organization_id->valuestring),
        active->valueint
        );

    return inline_response_200_14_identity_providers_local_var;
end:
    return NULL;

}
