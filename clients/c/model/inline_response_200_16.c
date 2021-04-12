#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "inline_response_200_16.h"



inline_response_200_16_t *inline_response_200_16_create(
    char *name,
    char *email,
    char *description,
    char *aws_cognito_client_id,
    char *id,
    char *contact_email,
    inline_response_200_14_updated_at_t *created_at,
    char *organization_id,
    char *tenant_id,
    char *type,
    char *authentication_url,
    int active
    ) {
    inline_response_200_16_t *inline_response_200_16_local_var = malloc(sizeof(inline_response_200_16_t));
    if (!inline_response_200_16_local_var) {
        return NULL;
    }
    inline_response_200_16_local_var->deleted_at = deleted_at;
    inline_response_200_16_local_var->name = name;
    inline_response_200_16_local_var->updated_at = updated_at;
    inline_response_200_16_local_var->email = email;
    inline_response_200_16_local_var->description = description;
    inline_response_200_16_local_var->aws_cognito_client_id = aws_cognito_client_id;
    inline_response_200_16_local_var->auth0_client_id = auth0_client_id;
    inline_response_200_16_local_var->id = id;
    inline_response_200_16_local_var->contact_email = contact_email;
    inline_response_200_16_local_var->created_at = created_at;
    inline_response_200_16_local_var->organization_id = organization_id;
    inline_response_200_16_local_var->tenant_id = tenant_id;
    inline_response_200_16_local_var->type = type;
    inline_response_200_16_local_var->authentication_url = authentication_url;
    inline_response_200_16_local_var->active = active;

    return inline_response_200_16_local_var;
}


void inline_response_200_16_free(inline_response_200_16_t *inline_response_200_16) {
    if(NULL == inline_response_200_16){
        return ;
    }
    listEntry_t *listEntry;
    free(inline_response_200_16->name);
    free(inline_response_200_16->email);
    free(inline_response_200_16->description);
    free(inline_response_200_16->aws_cognito_client_id);
    free(inline_response_200_16->id);
    free(inline_response_200_16->contact_email);
    inline_response_200_14_updated_at_free(inline_response_200_16->created_at);
    free(inline_response_200_16->organization_id);
    free(inline_response_200_16->tenant_id);
    free(inline_response_200_16->type);
    free(inline_response_200_16->authentication_url);
    free(inline_response_200_16);
}

cJSON *inline_response_200_16_convertToJSON(inline_response_200_16_t *inline_response_200_16) {
    cJSON *item = cJSON_CreateObject();

    // inline_response_200_16->deleted_at
    if (!inline_response_200_16->deleted_at) {
        goto fail;
    }
    


    // inline_response_200_16->name
    if (!inline_response_200_16->name) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "name", inline_response_200_16->name) == NULL) {
    goto fail; //String
    }


    // inline_response_200_16->updated_at
    if (!inline_response_200_16->updated_at) {
        goto fail;
    }
    


    // inline_response_200_16->email
    if (!inline_response_200_16->email) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "email", inline_response_200_16->email) == NULL) {
    goto fail; //String
    }


    // inline_response_200_16->description
    if (!inline_response_200_16->description) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "description", inline_response_200_16->description) == NULL) {
    goto fail; //String
    }


    // inline_response_200_16->aws_cognito_client_id
    if (!inline_response_200_16->aws_cognito_client_id) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "awsCognitoClientId", inline_response_200_16->aws_cognito_client_id) == NULL) {
    goto fail; //String
    }


    // inline_response_200_16->auth0_client_id
    if (!inline_response_200_16->auth0_client_id) {
        goto fail;
    }
    


    // inline_response_200_16->id
    if (!inline_response_200_16->id) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "id", inline_response_200_16->id) == NULL) {
    goto fail; //String
    }


    // inline_response_200_16->contact_email
    if (!inline_response_200_16->contact_email) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "contactEmail", inline_response_200_16->contact_email) == NULL) {
    goto fail; //String
    }


    // inline_response_200_16->created_at
    if (!inline_response_200_16->created_at) {
        goto fail;
    }
    
    cJSON *created_at_local_JSON = inline_response_200_14_updated_at_convertToJSON(inline_response_200_16->created_at);
    if(created_at_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "createdAt", created_at_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // inline_response_200_16->organization_id
    if (!inline_response_200_16->organization_id) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "organizationId", inline_response_200_16->organization_id) == NULL) {
    goto fail; //String
    }


    // inline_response_200_16->tenant_id
    if (!inline_response_200_16->tenant_id) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "tenantId", inline_response_200_16->tenant_id) == NULL) {
    goto fail; //String
    }


    // inline_response_200_16->type
    if (!inline_response_200_16->type) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "type", inline_response_200_16->type) == NULL) {
    goto fail; //String
    }


    // inline_response_200_16->authentication_url
    if (!inline_response_200_16->authentication_url) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "authenticationUrl", inline_response_200_16->authentication_url) == NULL) {
    goto fail; //String
    }


    // inline_response_200_16->active
    if (!inline_response_200_16->active) {
        goto fail;
    }
    
    if(cJSON_AddBoolToObject(item, "active", inline_response_200_16->active) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

inline_response_200_16_t *inline_response_200_16_parseFromJSON(cJSON *inline_response_200_16JSON){

    inline_response_200_16_t *inline_response_200_16_local_var = NULL;

    // inline_response_200_16->deleted_at
    cJSON *deleted_at = cJSON_GetObjectItemCaseSensitive(inline_response_200_16JSON, "deletedAt");
    if (!deleted_at) {
        goto end;
    }


    // inline_response_200_16->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(inline_response_200_16JSON, "name");
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }

    // inline_response_200_16->updated_at
    cJSON *updated_at = cJSON_GetObjectItemCaseSensitive(inline_response_200_16JSON, "updatedAt");
    if (!updated_at) {
        goto end;
    }


    // inline_response_200_16->email
    cJSON *email = cJSON_GetObjectItemCaseSensitive(inline_response_200_16JSON, "email");
    if (!email) {
        goto end;
    }

    
    if(!cJSON_IsString(email))
    {
    goto end; //String
    }

    // inline_response_200_16->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(inline_response_200_16JSON, "description");
    if (!description) {
        goto end;
    }

    
    if(!cJSON_IsString(description))
    {
    goto end; //String
    }

    // inline_response_200_16->aws_cognito_client_id
    cJSON *aws_cognito_client_id = cJSON_GetObjectItemCaseSensitive(inline_response_200_16JSON, "awsCognitoClientId");
    if (!aws_cognito_client_id) {
        goto end;
    }

    
    if(!cJSON_IsString(aws_cognito_client_id))
    {
    goto end; //String
    }

    // inline_response_200_16->auth0_client_id
    cJSON *auth0_client_id = cJSON_GetObjectItemCaseSensitive(inline_response_200_16JSON, "auth0ClientId");
    if (!auth0_client_id) {
        goto end;
    }


    // inline_response_200_16->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(inline_response_200_16JSON, "id");
    if (!id) {
        goto end;
    }

    
    if(!cJSON_IsString(id))
    {
    goto end; //String
    }

    // inline_response_200_16->contact_email
    cJSON *contact_email = cJSON_GetObjectItemCaseSensitive(inline_response_200_16JSON, "contactEmail");
    if (!contact_email) {
        goto end;
    }

    
    if(!cJSON_IsString(contact_email))
    {
    goto end; //String
    }

    // inline_response_200_16->created_at
    cJSON *created_at = cJSON_GetObjectItemCaseSensitive(inline_response_200_16JSON, "createdAt");
    if (!created_at) {
        goto end;
    }

    inline_response_200_14_updated_at_t *created_at_local_nonprim = NULL;
    
    created_at_local_nonprim = inline_response_200_14_updated_at_parseFromJSON(created_at); //nonprimitive

    // inline_response_200_16->organization_id
    cJSON *organization_id = cJSON_GetObjectItemCaseSensitive(inline_response_200_16JSON, "organizationId");
    if (!organization_id) {
        goto end;
    }

    
    if(!cJSON_IsString(organization_id))
    {
    goto end; //String
    }

    // inline_response_200_16->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(inline_response_200_16JSON, "tenantId");
    if (!tenant_id) {
        goto end;
    }

    
    if(!cJSON_IsString(tenant_id))
    {
    goto end; //String
    }

    // inline_response_200_16->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(inline_response_200_16JSON, "type");
    if (!type) {
        goto end;
    }

    
    if(!cJSON_IsString(type))
    {
    goto end; //String
    }

    // inline_response_200_16->authentication_url
    cJSON *authentication_url = cJSON_GetObjectItemCaseSensitive(inline_response_200_16JSON, "authenticationUrl");
    if (!authentication_url) {
        goto end;
    }

    
    if(!cJSON_IsString(authentication_url))
    {
    goto end; //String
    }

    // inline_response_200_16->active
    cJSON *active = cJSON_GetObjectItemCaseSensitive(inline_response_200_16JSON, "active");
    if (!active) {
        goto end;
    }

    
    if(!cJSON_IsBool(active))
    {
    goto end; //Bool
    }


    inline_response_200_16_local_var = inline_response_200_16_create (
        strdup(name->valuestring),
        strdup(email->valuestring),
        strdup(description->valuestring),
        strdup(aws_cognito_client_id->valuestring),
        strdup(id->valuestring),
        strdup(contact_email->valuestring),
        created_at_local_nonprim,
        strdup(organization_id->valuestring),
        strdup(tenant_id->valuestring),
        strdup(type->valuestring),
        strdup(authentication_url->valuestring),
        active->valueint
        );

    return inline_response_200_16_local_var;
end:
    return NULL;

}
