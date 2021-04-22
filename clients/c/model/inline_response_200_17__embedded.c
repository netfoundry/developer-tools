#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "inline_response_200_17__embedded.h"



inline_response_200_17__embedded_t *inline_response_200_17__embedded_create(
    list_t *organizations
    ) {
    inline_response_200_17__embedded_t *inline_response_200_17__embedded_local_var = malloc(sizeof(inline_response_200_17__embedded_t));
    if (!inline_response_200_17__embedded_local_var) {
        return NULL;
    }
    inline_response_200_17__embedded_local_var->organizations = organizations;

    return inline_response_200_17__embedded_local_var;
}


void inline_response_200_17__embedded_free(inline_response_200_17__embedded_t *inline_response_200_17__embedded) {
    if(NULL == inline_response_200_17__embedded){
        return ;
    }
    listEntry_t *listEntry;
    list_ForEach(listEntry, inline_response_200_17__embedded->organizations) {
        inline_response_200_17__embedded_organizations_free(listEntry->data);
    }
    list_free(inline_response_200_17__embedded->organizations);
    free(inline_response_200_17__embedded);
}

cJSON *inline_response_200_17__embedded_convertToJSON(inline_response_200_17__embedded_t *inline_response_200_17__embedded) {
    cJSON *item = cJSON_CreateObject();

    // inline_response_200_17__embedded->organizations
    if (!inline_response_200_17__embedded->organizations) {
        goto fail;
    }
    
    cJSON *organizations = cJSON_AddArrayToObject(item, "organizations");
    if(organizations == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *organizationsListEntry;
    if (inline_response_200_17__embedded->organizations) {
    list_ForEach(organizationsListEntry, inline_response_200_17__embedded->organizations) {
    cJSON *itemLocal = inline_response_200_17__embedded_organizations_convertToJSON(organizationsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(organizations, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

inline_response_200_17__embedded_t *inline_response_200_17__embedded_parseFromJSON(cJSON *inline_response_200_17__embeddedJSON){

    inline_response_200_17__embedded_t *inline_response_200_17__embedded_local_var = NULL;

    // inline_response_200_17__embedded->organizations
    cJSON *organizations = cJSON_GetObjectItemCaseSensitive(inline_response_200_17__embeddedJSON, "organizations");
    if (!organizations) {
        goto end;
    }

    list_t *organizationsList;
    
    cJSON *organizations_local_nonprimitive;
    if(!cJSON_IsArray(organizations)){
        goto end; //nonprimitive container
    }

    organizationsList = list_create();

    cJSON_ArrayForEach(organizations_local_nonprimitive,organizations )
    {
        if(!cJSON_IsObject(organizations_local_nonprimitive)){
            goto end;
        }
        inline_response_200_17__embedded_organizations_t *organizationsItem = inline_response_200_17__embedded_organizations_parseFromJSON(organizations_local_nonprimitive);

        list_addElement(organizationsList, organizationsItem);
    }


    inline_response_200_17__embedded_local_var = inline_response_200_17__embedded_create (
        organizationsList
        );

    return inline_response_200_17__embedded_local_var;
end:
    return NULL;

}
