#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "inline_response_200_14.h"



inline_response_200_14_t *inline_response_200_14_create(
    char *name,
    inline_response_200_14_updated_at_t *updated_at,
    char *label,
    char *id,
    char *mfa_provider,
    inline_response_200_14_updated_at_t *created_at,
    list_t *identity_providers,
    int deleted,
    int active
    ) {
    inline_response_200_14_t *inline_response_200_14_local_var = malloc(sizeof(inline_response_200_14_t));
    if (!inline_response_200_14_local_var) {
        return NULL;
    }
    inline_response_200_14_local_var->deleted_at = deleted_at;
    inline_response_200_14_local_var->name = name;
    inline_response_200_14_local_var->updated_at = updated_at;
    inline_response_200_14_local_var->label = label;
    inline_response_200_14_local_var->id = id;
    inline_response_200_14_local_var->mfa_provider = mfa_provider;
    inline_response_200_14_local_var->created_at = created_at;
    inline_response_200_14_local_var->identity_providers = identity_providers;
    inline_response_200_14_local_var->deleted = deleted;
    inline_response_200_14_local_var->active = active;

    return inline_response_200_14_local_var;
}


void inline_response_200_14_free(inline_response_200_14_t *inline_response_200_14) {
    if(NULL == inline_response_200_14){
        return ;
    }
    listEntry_t *listEntry;
    free(inline_response_200_14->name);
    inline_response_200_14_updated_at_free(inline_response_200_14->updated_at);
    free(inline_response_200_14->label);
    free(inline_response_200_14->id);
    free(inline_response_200_14->mfa_provider);
    inline_response_200_14_updated_at_free(inline_response_200_14->created_at);
    list_ForEach(listEntry, inline_response_200_14->identity_providers) {
        inline_response_200_14_identity_providers_free(listEntry->data);
    }
    list_free(inline_response_200_14->identity_providers);
    free(inline_response_200_14);
}

cJSON *inline_response_200_14_convertToJSON(inline_response_200_14_t *inline_response_200_14) {
    cJSON *item = cJSON_CreateObject();

    // inline_response_200_14->deleted_at
    if (!inline_response_200_14->deleted_at) {
        goto fail;
    }
    


    // inline_response_200_14->name
    if (!inline_response_200_14->name) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "name", inline_response_200_14->name) == NULL) {
    goto fail; //String
    }


    // inline_response_200_14->updated_at
    if (!inline_response_200_14->updated_at) {
        goto fail;
    }
    
    cJSON *updated_at_local_JSON = inline_response_200_14_updated_at_convertToJSON(inline_response_200_14->updated_at);
    if(updated_at_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "updatedAt", updated_at_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // inline_response_200_14->label
    if (!inline_response_200_14->label) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "label", inline_response_200_14->label) == NULL) {
    goto fail; //String
    }


    // inline_response_200_14->id
    if (!inline_response_200_14->id) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "id", inline_response_200_14->id) == NULL) {
    goto fail; //String
    }


    // inline_response_200_14->mfa_provider
    if (!inline_response_200_14->mfa_provider) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "mfaProvider", inline_response_200_14->mfa_provider) == NULL) {
    goto fail; //String
    }


    // inline_response_200_14->created_at
    if (!inline_response_200_14->created_at) {
        goto fail;
    }
    
    cJSON *created_at_local_JSON = inline_response_200_14_updated_at_convertToJSON(inline_response_200_14->created_at);
    if(created_at_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "createdAt", created_at_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // inline_response_200_14->identity_providers
    if (!inline_response_200_14->identity_providers) {
        goto fail;
    }
    
    cJSON *identity_providers = cJSON_AddArrayToObject(item, "identityProviders");
    if(identity_providers == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *identity_providersListEntry;
    if (inline_response_200_14->identity_providers) {
    list_ForEach(identity_providersListEntry, inline_response_200_14->identity_providers) {
    cJSON *itemLocal = inline_response_200_14_identity_providers_convertToJSON(identity_providersListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(identity_providers, itemLocal);
    }
    }


    // inline_response_200_14->deleted
    if (!inline_response_200_14->deleted) {
        goto fail;
    }
    
    if(cJSON_AddBoolToObject(item, "deleted", inline_response_200_14->deleted) == NULL) {
    goto fail; //Bool
    }


    // inline_response_200_14->active
    if (!inline_response_200_14->active) {
        goto fail;
    }
    
    if(cJSON_AddBoolToObject(item, "active", inline_response_200_14->active) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

inline_response_200_14_t *inline_response_200_14_parseFromJSON(cJSON *inline_response_200_14JSON){

    inline_response_200_14_t *inline_response_200_14_local_var = NULL;

    // inline_response_200_14->deleted_at
    cJSON *deleted_at = cJSON_GetObjectItemCaseSensitive(inline_response_200_14JSON, "deletedAt");
    if (!deleted_at) {
        goto end;
    }


    // inline_response_200_14->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(inline_response_200_14JSON, "name");
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }

    // inline_response_200_14->updated_at
    cJSON *updated_at = cJSON_GetObjectItemCaseSensitive(inline_response_200_14JSON, "updatedAt");
    if (!updated_at) {
        goto end;
    }

    inline_response_200_14_updated_at_t *updated_at_local_nonprim = NULL;
    
    updated_at_local_nonprim = inline_response_200_14_updated_at_parseFromJSON(updated_at); //nonprimitive

    // inline_response_200_14->label
    cJSON *label = cJSON_GetObjectItemCaseSensitive(inline_response_200_14JSON, "label");
    if (!label) {
        goto end;
    }

    
    if(!cJSON_IsString(label))
    {
    goto end; //String
    }

    // inline_response_200_14->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(inline_response_200_14JSON, "id");
    if (!id) {
        goto end;
    }

    
    if(!cJSON_IsString(id))
    {
    goto end; //String
    }

    // inline_response_200_14->mfa_provider
    cJSON *mfa_provider = cJSON_GetObjectItemCaseSensitive(inline_response_200_14JSON, "mfaProvider");
    if (!mfa_provider) {
        goto end;
    }

    
    if(!cJSON_IsString(mfa_provider))
    {
    goto end; //String
    }

    // inline_response_200_14->created_at
    cJSON *created_at = cJSON_GetObjectItemCaseSensitive(inline_response_200_14JSON, "createdAt");
    if (!created_at) {
        goto end;
    }

    inline_response_200_14_updated_at_t *created_at_local_nonprim = NULL;
    
    created_at_local_nonprim = inline_response_200_14_updated_at_parseFromJSON(created_at); //nonprimitive

    // inline_response_200_14->identity_providers
    cJSON *identity_providers = cJSON_GetObjectItemCaseSensitive(inline_response_200_14JSON, "identityProviders");
    if (!identity_providers) {
        goto end;
    }

    list_t *identity_providersList;
    
    cJSON *identity_providers_local_nonprimitive;
    if(!cJSON_IsArray(identity_providers)){
        goto end; //nonprimitive container
    }

    identity_providersList = list_create();

    cJSON_ArrayForEach(identity_providers_local_nonprimitive,identity_providers )
    {
        if(!cJSON_IsObject(identity_providers_local_nonprimitive)){
            goto end;
        }
        inline_response_200_14_identity_providers_t *identity_providersItem = inline_response_200_14_identity_providers_parseFromJSON(identity_providers_local_nonprimitive);

        list_addElement(identity_providersList, identity_providersItem);
    }

    // inline_response_200_14->deleted
    cJSON *deleted = cJSON_GetObjectItemCaseSensitive(inline_response_200_14JSON, "deleted");
    if (!deleted) {
        goto end;
    }

    
    if(!cJSON_IsBool(deleted))
    {
    goto end; //Bool
    }

    // inline_response_200_14->active
    cJSON *active = cJSON_GetObjectItemCaseSensitive(inline_response_200_14JSON, "active");
    if (!active) {
        goto end;
    }

    
    if(!cJSON_IsBool(active))
    {
    goto end; //Bool
    }


    inline_response_200_14_local_var = inline_response_200_14_create (
        strdup(name->valuestring),
        updated_at_local_nonprim,
        strdup(label->valuestring),
        strdup(id->valuestring),
        strdup(mfa_provider->valuestring),
        created_at_local_nonprim,
        identity_providersList,
        deleted->valueint,
        active->valueint
        );

    return inline_response_200_14_local_var;
end:
    return NULL;

}
