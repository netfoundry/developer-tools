#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "inline_response_200_17__embedded_organizations.h"



inline_response_200_17__embedded_organizations_t *inline_response_200_17__embedded_organizations_create(
    char *organization_short_name,
    char *name,
    char *updated_at,
    int ziti_enabled,
    char *billing_account_id,
    char *id,
    int aws_auto_scaling_gateway_enabled,
    char *created_at,
    int mfa_required,
    int deleted,
    inline_response_200_11__links_t *_links
    ) {
    inline_response_200_17__embedded_organizations_t *inline_response_200_17__embedded_organizations_local_var = malloc(sizeof(inline_response_200_17__embedded_organizations_t));
    if (!inline_response_200_17__embedded_organizations_local_var) {
        return NULL;
    }
    inline_response_200_17__embedded_organizations_local_var->organization_short_name = organization_short_name;
    inline_response_200_17__embedded_organizations_local_var->name = name;
    inline_response_200_17__embedded_organizations_local_var->updated_at = updated_at;
    inline_response_200_17__embedded_organizations_local_var->ziti_enabled = ziti_enabled;
    inline_response_200_17__embedded_organizations_local_var->default_azure_virtual_wan_id = default_azure_virtual_wan_id;
    inline_response_200_17__embedded_organizations_local_var->owner_identity_id = owner_identity_id;
    inline_response_200_17__embedded_organizations_local_var->billing_account_id = billing_account_id;
    inline_response_200_17__embedded_organizations_local_var->id = id;
    inline_response_200_17__embedded_organizations_local_var->aws_auto_scaling_gateway_enabled = aws_auto_scaling_gateway_enabled;
    inline_response_200_17__embedded_organizations_local_var->created_at = created_at;
    inline_response_200_17__embedded_organizations_local_var->mfa_required = mfa_required;
    inline_response_200_17__embedded_organizations_local_var->deleted = deleted;
    inline_response_200_17__embedded_organizations_local_var->_links = _links;

    return inline_response_200_17__embedded_organizations_local_var;
}


void inline_response_200_17__embedded_organizations_free(inline_response_200_17__embedded_organizations_t *inline_response_200_17__embedded_organizations) {
    if(NULL == inline_response_200_17__embedded_organizations){
        return ;
    }
    listEntry_t *listEntry;
    free(inline_response_200_17__embedded_organizations->organization_short_name);
    free(inline_response_200_17__embedded_organizations->name);
    free(inline_response_200_17__embedded_organizations->updated_at);
    free(inline_response_200_17__embedded_organizations->billing_account_id);
    free(inline_response_200_17__embedded_organizations->id);
    free(inline_response_200_17__embedded_organizations->created_at);
    inline_response_200_11__links_free(inline_response_200_17__embedded_organizations->_links);
    free(inline_response_200_17__embedded_organizations);
}

cJSON *inline_response_200_17__embedded_organizations_convertToJSON(inline_response_200_17__embedded_organizations_t *inline_response_200_17__embedded_organizations) {
    cJSON *item = cJSON_CreateObject();

    // inline_response_200_17__embedded_organizations->organization_short_name
    if (!inline_response_200_17__embedded_organizations->organization_short_name) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "organizationShortName", inline_response_200_17__embedded_organizations->organization_short_name) == NULL) {
    goto fail; //String
    }


    // inline_response_200_17__embedded_organizations->name
    if (!inline_response_200_17__embedded_organizations->name) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "name", inline_response_200_17__embedded_organizations->name) == NULL) {
    goto fail; //String
    }


    // inline_response_200_17__embedded_organizations->updated_at
    if (!inline_response_200_17__embedded_organizations->updated_at) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "updatedAt", inline_response_200_17__embedded_organizations->updated_at) == NULL) {
    goto fail; //String
    }


    // inline_response_200_17__embedded_organizations->ziti_enabled
    if (!inline_response_200_17__embedded_organizations->ziti_enabled) {
        goto fail;
    }
    
    if(cJSON_AddBoolToObject(item, "zitiEnabled", inline_response_200_17__embedded_organizations->ziti_enabled) == NULL) {
    goto fail; //Bool
    }


    // inline_response_200_17__embedded_organizations->default_azure_virtual_wan_id
    if (!inline_response_200_17__embedded_organizations->default_azure_virtual_wan_id) {
        goto fail;
    }
    


    // inline_response_200_17__embedded_organizations->owner_identity_id
    if (!inline_response_200_17__embedded_organizations->owner_identity_id) {
        goto fail;
    }
    


    // inline_response_200_17__embedded_organizations->billing_account_id
    if (!inline_response_200_17__embedded_organizations->billing_account_id) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "billingAccountId", inline_response_200_17__embedded_organizations->billing_account_id) == NULL) {
    goto fail; //String
    }


    // inline_response_200_17__embedded_organizations->id
    if (!inline_response_200_17__embedded_organizations->id) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "id", inline_response_200_17__embedded_organizations->id) == NULL) {
    goto fail; //String
    }


    // inline_response_200_17__embedded_organizations->aws_auto_scaling_gateway_enabled
    if (!inline_response_200_17__embedded_organizations->aws_auto_scaling_gateway_enabled) {
        goto fail;
    }
    
    if(cJSON_AddBoolToObject(item, "awsAutoScalingGatewayEnabled", inline_response_200_17__embedded_organizations->aws_auto_scaling_gateway_enabled) == NULL) {
    goto fail; //Bool
    }


    // inline_response_200_17__embedded_organizations->created_at
    if (!inline_response_200_17__embedded_organizations->created_at) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "createdAt", inline_response_200_17__embedded_organizations->created_at) == NULL) {
    goto fail; //String
    }


    // inline_response_200_17__embedded_organizations->mfa_required
    if (!inline_response_200_17__embedded_organizations->mfa_required) {
        goto fail;
    }
    
    if(cJSON_AddBoolToObject(item, "mfaRequired", inline_response_200_17__embedded_organizations->mfa_required) == NULL) {
    goto fail; //Bool
    }


    // inline_response_200_17__embedded_organizations->deleted
    if (!inline_response_200_17__embedded_organizations->deleted) {
        goto fail;
    }
    
    if(cJSON_AddBoolToObject(item, "deleted", inline_response_200_17__embedded_organizations->deleted) == NULL) {
    goto fail; //Bool
    }


    // inline_response_200_17__embedded_organizations->_links
    if (!inline_response_200_17__embedded_organizations->_links) {
        goto fail;
    }
    
    cJSON *_links_local_JSON = inline_response_200_11__links_convertToJSON(inline_response_200_17__embedded_organizations->_links);
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

inline_response_200_17__embedded_organizations_t *inline_response_200_17__embedded_organizations_parseFromJSON(cJSON *inline_response_200_17__embedded_organizationsJSON){

    inline_response_200_17__embedded_organizations_t *inline_response_200_17__embedded_organizations_local_var = NULL;

    // inline_response_200_17__embedded_organizations->organization_short_name
    cJSON *organization_short_name = cJSON_GetObjectItemCaseSensitive(inline_response_200_17__embedded_organizationsJSON, "organizationShortName");
    if (!organization_short_name) {
        goto end;
    }

    
    if(!cJSON_IsString(organization_short_name))
    {
    goto end; //String
    }

    // inline_response_200_17__embedded_organizations->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(inline_response_200_17__embedded_organizationsJSON, "name");
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }

    // inline_response_200_17__embedded_organizations->updated_at
    cJSON *updated_at = cJSON_GetObjectItemCaseSensitive(inline_response_200_17__embedded_organizationsJSON, "updatedAt");
    if (!updated_at) {
        goto end;
    }

    
    if(!cJSON_IsString(updated_at))
    {
    goto end; //String
    }

    // inline_response_200_17__embedded_organizations->ziti_enabled
    cJSON *ziti_enabled = cJSON_GetObjectItemCaseSensitive(inline_response_200_17__embedded_organizationsJSON, "zitiEnabled");
    if (!ziti_enabled) {
        goto end;
    }

    
    if(!cJSON_IsBool(ziti_enabled))
    {
    goto end; //Bool
    }

    // inline_response_200_17__embedded_organizations->default_azure_virtual_wan_id
    cJSON *default_azure_virtual_wan_id = cJSON_GetObjectItemCaseSensitive(inline_response_200_17__embedded_organizationsJSON, "defaultAzureVirtualWanId");
    if (!default_azure_virtual_wan_id) {
        goto end;
    }


    // inline_response_200_17__embedded_organizations->owner_identity_id
    cJSON *owner_identity_id = cJSON_GetObjectItemCaseSensitive(inline_response_200_17__embedded_organizationsJSON, "ownerIdentityId");
    if (!owner_identity_id) {
        goto end;
    }


    // inline_response_200_17__embedded_organizations->billing_account_id
    cJSON *billing_account_id = cJSON_GetObjectItemCaseSensitive(inline_response_200_17__embedded_organizationsJSON, "billingAccountId");
    if (!billing_account_id) {
        goto end;
    }

    
    if(!cJSON_IsString(billing_account_id))
    {
    goto end; //String
    }

    // inline_response_200_17__embedded_organizations->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(inline_response_200_17__embedded_organizationsJSON, "id");
    if (!id) {
        goto end;
    }

    
    if(!cJSON_IsString(id))
    {
    goto end; //String
    }

    // inline_response_200_17__embedded_organizations->aws_auto_scaling_gateway_enabled
    cJSON *aws_auto_scaling_gateway_enabled = cJSON_GetObjectItemCaseSensitive(inline_response_200_17__embedded_organizationsJSON, "awsAutoScalingGatewayEnabled");
    if (!aws_auto_scaling_gateway_enabled) {
        goto end;
    }

    
    if(!cJSON_IsBool(aws_auto_scaling_gateway_enabled))
    {
    goto end; //Bool
    }

    // inline_response_200_17__embedded_organizations->created_at
    cJSON *created_at = cJSON_GetObjectItemCaseSensitive(inline_response_200_17__embedded_organizationsJSON, "createdAt");
    if (!created_at) {
        goto end;
    }

    
    if(!cJSON_IsString(created_at))
    {
    goto end; //String
    }

    // inline_response_200_17__embedded_organizations->mfa_required
    cJSON *mfa_required = cJSON_GetObjectItemCaseSensitive(inline_response_200_17__embedded_organizationsJSON, "mfaRequired");
    if (!mfa_required) {
        goto end;
    }

    
    if(!cJSON_IsBool(mfa_required))
    {
    goto end; //Bool
    }

    // inline_response_200_17__embedded_organizations->deleted
    cJSON *deleted = cJSON_GetObjectItemCaseSensitive(inline_response_200_17__embedded_organizationsJSON, "deleted");
    if (!deleted) {
        goto end;
    }

    
    if(!cJSON_IsBool(deleted))
    {
    goto end; //Bool
    }

    // inline_response_200_17__embedded_organizations->_links
    cJSON *_links = cJSON_GetObjectItemCaseSensitive(inline_response_200_17__embedded_organizationsJSON, "_links");
    if (!_links) {
        goto end;
    }

    inline_response_200_11__links_t *_links_local_nonprim = NULL;
    
    _links_local_nonprim = inline_response_200_11__links_parseFromJSON(_links); //nonprimitive


    inline_response_200_17__embedded_organizations_local_var = inline_response_200_17__embedded_organizations_create (
        strdup(organization_short_name->valuestring),
        strdup(name->valuestring),
        strdup(updated_at->valuestring),
        ziti_enabled->valueint,
        strdup(billing_account_id->valuestring),
        strdup(id->valuestring),
        aws_auto_scaling_gateway_enabled->valueint,
        strdup(created_at->valuestring),
        mfa_required->valueint,
        deleted->valueint,
        _links_local_nonprim
        );

    return inline_response_200_17__embedded_organizations_local_var;
end:
    return NULL;

}
