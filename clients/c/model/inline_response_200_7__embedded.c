#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "inline_response_200_7__embedded.h"



inline_response_200_7__embedded_t *inline_response_200_7__embedded_create(
    list_t *endpoint_list
    ) {
    inline_response_200_7__embedded_t *inline_response_200_7__embedded_local_var = malloc(sizeof(inline_response_200_7__embedded_t));
    if (!inline_response_200_7__embedded_local_var) {
        return NULL;
    }
    inline_response_200_7__embedded_local_var->endpoint_list = endpoint_list;

    return inline_response_200_7__embedded_local_var;
}


void inline_response_200_7__embedded_free(inline_response_200_7__embedded_t *inline_response_200_7__embedded) {
    if(NULL == inline_response_200_7__embedded){
        return ;
    }
    listEntry_t *listEntry;
    list_ForEach(listEntry, inline_response_200_7__embedded->endpoint_list) {
        inline_response_200_7__embedded_endpoint_list_free(listEntry->data);
    }
    list_free(inline_response_200_7__embedded->endpoint_list);
    free(inline_response_200_7__embedded);
}

cJSON *inline_response_200_7__embedded_convertToJSON(inline_response_200_7__embedded_t *inline_response_200_7__embedded) {
    cJSON *item = cJSON_CreateObject();

    // inline_response_200_7__embedded->endpoint_list
    if (!inline_response_200_7__embedded->endpoint_list) {
        goto fail;
    }
    
    cJSON *endpoint_list = cJSON_AddArrayToObject(item, "endpointList");
    if(endpoint_list == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *endpoint_listListEntry;
    if (inline_response_200_7__embedded->endpoint_list) {
    list_ForEach(endpoint_listListEntry, inline_response_200_7__embedded->endpoint_list) {
    cJSON *itemLocal = inline_response_200_7__embedded_endpoint_list_convertToJSON(endpoint_listListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(endpoint_list, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

inline_response_200_7__embedded_t *inline_response_200_7__embedded_parseFromJSON(cJSON *inline_response_200_7__embeddedJSON){

    inline_response_200_7__embedded_t *inline_response_200_7__embedded_local_var = NULL;

    // inline_response_200_7__embedded->endpoint_list
    cJSON *endpoint_list = cJSON_GetObjectItemCaseSensitive(inline_response_200_7__embeddedJSON, "endpointList");
    if (!endpoint_list) {
        goto end;
    }

    list_t *endpoint_listList;
    
    cJSON *endpoint_list_local_nonprimitive;
    if(!cJSON_IsArray(endpoint_list)){
        goto end; //nonprimitive container
    }

    endpoint_listList = list_create();

    cJSON_ArrayForEach(endpoint_list_local_nonprimitive,endpoint_list )
    {
        if(!cJSON_IsObject(endpoint_list_local_nonprimitive)){
            goto end;
        }
        inline_response_200_7__embedded_endpoint_list_t *endpoint_listItem = inline_response_200_7__embedded_endpoint_list_parseFromJSON(endpoint_list_local_nonprimitive);

        list_addElement(endpoint_listList, endpoint_listItem);
    }


    inline_response_200_7__embedded_local_var = inline_response_200_7__embedded_create (
        endpoint_listList
        );

    return inline_response_200_7__embedded_local_var;
end:
    return NULL;

}
