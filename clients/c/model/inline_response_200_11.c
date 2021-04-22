#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "inline_response_200_11.h"



inline_response_200_11_t *inline_response_200_11_create(
    char *organization_short_name,
    char *name,
    char *updated_at,
    int ziti_enabled,
    char *id,
    int aws_auto_scaling_gateway_enabled,
    char *created_at,
    int mfa_required,
    int deleted,
    inline_response_200_11__links_t *_links
    ) {
    inline_response_200_11_t *inline_response_200_11_local_var = malloc(sizeof(inline_response_200_11_t));
    if (!inline_response_200_11_local_var) {
        return NULL;
    }
    inline_response_200_11_local_var->organization_short_name = organization_short_name;
    inline_response_200_11_local_var->name = name;
    inline_response_200_11_local_var->updated_at = updated_at;
    inline_response_200_11_local_var->ziti_enabled = ziti_enabled;
    inline_response_200_11_local_var->default_azure_virtual_wan_id = default_azure_virtual_wan_id;
    inline_response_200_11_local_var->owner_identity_id = owner_identity_id;
    inline_response_200_11_local_var->billing_account_id = billing_account_id;
    inline_response_200_11_local_var->id = id;
    inline_response_200_11_local_var->aws_auto_scaling_gateway_enabled = aws_auto_scaling_gateway_enabled;
    inline_response_200_11_local_var->created_at = created_at;
    inline_response_200_11_local_var->mfa_required = mfa_required;
    inline_response_200_11_local_var->deleted = deleted;
    inline_response_200_11_local_var->_links = _links;

    return inline_response_200_11_local_var;
}


void inline_response_200_11_free(inline_response_200_11_t *inline_response_200_11) {
    if(NULL == inline_response_200_11){
        return ;
    }
    listEntry_t *listEntry;
    free(inline_response_200_11->organization_short_name);
    free(inline_response_200_11->name);
    free(inline_response_200_11->updated_at);
    free(inline_response_200_11->id);
    free(inline_response_200_11->created_at);
    inline_response_200_11__links_free(inline_response_200_11->_links);
    free(inline_response_200_11);
}

cJSON *inline_response_200_11_convertToJSON(inline_response_200_11_t *inline_response_200_11) {
    cJSON *item = cJSON_CreateObject();

    // inline_response_200_11->organization_short_name
    if (!inline_response_200_11->organization_short_name) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "organizationShortName", inline_response_200_11->organization_short_name) == NULL) {
    goto fail; //String
    }


    // inline_response_200_11->name
    if (!inline_response_200_11->name) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "name", inline_response_200_11->name) == NULL) {
    goto fail; //String
    }


    // inline_response_200_11->updated_at
    if (!inline_response_200_11->updated_at) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "updatedAt", inline_response_200_11->updated_at) == NULL) {
    goto fail; //String
    }


    // inline_response_200_11->ziti_enabled
    if (!inline_response_200_11->ziti_enabled) {
        goto fail;
    }
    
    if(cJSON_AddBoolToObject(item, "zitiEnabled", inline_response_200_11->ziti_enabled) == NULL) {
    goto fail; //Bool
    }


    // inline_response_200_11->default_azure_virtual_wan_id
    if (!inline_response_200_11->default_azure_virtual_wan_id) {
        goto fail;
    }
    


    // inline_response_200_11->owner_identity_id
    if (!inline_response_200_11->owner_identity_id) {
        goto fail;
    }
    


    // inline_response_200_11->billing_account_id
    if (!inline_response_200_11->billing_account_id) {
        goto fail;
    }
    


    // inline_response_200_11->id
    if (!inline_response_200_11->id) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "id", inline_response_200_11->id) == NULL) {
    goto fail; //String
    }


    // inline_response_200_11->aws_auto_scaling_gateway_enabled
    if (!inline_response_200_11->aws_auto_scaling_gateway_enabled) {
        goto fail;
    }
    
    if(cJSON_AddBoolToObject(item, "awsAutoScalingGatewayEnabled", inline_response_200_11->aws_auto_scaling_gateway_enabled) == NULL) {
    goto fail; //Bool
    }


    // inline_response_200_11->created_at
    if (!inline_response_200_11->created_at) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "createdAt", inline_response_200_11->created_at) == NULL) {
    goto fail; //String
    }


    // inline_response_200_11->mfa_required
    if (!inline_response_200_11->mfa_required) {
        goto fail;
    }
    
    if(cJSON_AddBoolToObject(item, "mfaRequired", inline_response_200_11->mfa_required) == NULL) {
    goto fail; //Bool
    }


    // inline_response_200_11->deleted
    if (!inline_response_200_11->deleted) {
        goto fail;
    }
    
    if(cJSON_AddBoolToObject(item, "deleted", inline_response_200_11->deleted) == NULL) {
    goto fail; //Bool
    }


    // inline_response_200_11->_links
    if (!inline_response_200_11->_links) {
        goto fail;
    }
    
    cJSON *_links_local_JSON = inline_response_200_11__links_convertToJSON(inline_response_200_11->_links);
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

inline_response_200_11_t *inline_response_200_11_parseFromJSON(cJSON *inline_response_200_11JSON){

    inline_response_200_11_t *inline_response_200_11_local_var = NULL;

    // inline_response_200_11->organization_short_name
    cJSON *organization_short_name = cJSON_GetObjectItemCaseSensitive(inline_response_200_11JSON, "organizationShortName");
    if (!organization_short_name) {
        goto end;
    }

    
    if(!cJSON_IsString(organization_short_name))
    {
    goto end; //String
    }

    // inline_response_200_11->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(inline_response_200_11JSON, "name");
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }

    // inline_response_200_11->updated_at
    cJSON *updated_at = cJSON_GetObjectItemCaseSensitive(inline_response_200_11JSON, "updatedAt");
    if (!updated_at) {
        goto end;
    }

    
    if(!cJSON_IsString(updated_at))
    {
    goto end; //String
    }

    // inline_response_200_11->ziti_enabled
    cJSON *ziti_enabled = cJSON_GetObjectItemCaseSensitive(inline_response_200_11JSON, "zitiEnabled");
    if (!ziti_enabled) {
        goto end;
    }

    
    if(!cJSON_IsBool(ziti_enabled))
    {
    goto end; //Bool
    }

    // inline_response_200_11->default_azure_virtual_wan_id
    cJSON *default_azure_virtual_wan_id = cJSON_GetObjectItemCaseSensitive(inline_response_200_11JSON, "defaultAzureVirtualWanId");
    if (!default_azure_virtual_wan_id) {
        goto end;
    }


    // inline_response_200_11->owner_identity_id
    cJSON *owner_identity_id = cJSON_GetObjectItemCaseSensitive(inline_response_200_11JSON, "ownerIdentityId");
    if (!owner_identity_id) {
        goto end;
    }


    // inline_response_200_11->billing_account_id
    cJSON *billing_account_id = cJSON_GetObjectItemCaseSensitive(inline_response_200_11JSON, "billingAccountId");
    if (!billing_account_id) {
        goto end;
    }


    // inline_response_200_11->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(inline_response_200_11JSON, "id");
    if (!id) {
        goto end;
    }

    
    if(!cJSON_IsString(id))
    {
    goto end; //String
    }

    // inline_response_200_11->aws_auto_scaling_gateway_enabled
    cJSON *aws_auto_scaling_gateway_enabled = cJSON_GetObjectItemCaseSensitive(inline_response_200_11JSON, "awsAutoScalingGatewayEnabled");
    if (!aws_auto_scaling_gateway_enabled) {
        goto end;
    }

    
    if(!cJSON_IsBool(aws_auto_scaling_gateway_enabled))
    {
    goto end; //Bool
    }

    // inline_response_200_11->created_at
    cJSON *created_at = cJSON_GetObjectItemCaseSensitive(inline_response_200_11JSON, "createdAt");
    if (!created_at) {
        goto end;
    }

    
    if(!cJSON_IsString(created_at))
    {
    goto end; //String
    }

    // inline_response_200_11->mfa_required
    cJSON *mfa_required = cJSON_GetObjectItemCaseSensitive(inline_response_200_11JSON, "mfaRequired");
    if (!mfa_required) {
        goto end;
    }

    
    if(!cJSON_IsBool(mfa_required))
    {
    goto end; //Bool
    }

    // inline_response_200_11->deleted
    cJSON *deleted = cJSON_GetObjectItemCaseSensitive(inline_response_200_11JSON, "deleted");
    if (!deleted) {
        goto end;
    }

    
    if(!cJSON_IsBool(deleted))
    {
    goto end; //Bool
    }

    // inline_response_200_11->_links
    cJSON *_links = cJSON_GetObjectItemCaseSensitive(inline_response_200_11JSON, "_links");
    if (!_links) {
        goto end;
    }

    inline_response_200_11__links_t *_links_local_nonprim = NULL;
    
    _links_local_nonprim = inline_response_200_11__links_parseFromJSON(_links); //nonprimitive


    inline_response_200_11_local_var = inline_response_200_11_create (
        strdup(organization_short_name->valuestring),
        strdup(name->valuestring),
        strdup(updated_at->valuestring),
        ziti_enabled->valueint,
        strdup(id->valuestring),
        aws_auto_scaling_gateway_enabled->valueint,
        strdup(created_at->valuestring),
        mfa_required->valueint,
        deleted->valueint,
        _links_local_nonprim
        );

    return inline_response_200_11_local_var;
end:
    return NULL;

}
