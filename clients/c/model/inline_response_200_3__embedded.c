#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "inline_response_200_3__embedded.h"



inline_response_200_3__embedded_t *inline_response_200_3__embedded_create(
    list_t *service_list
    ) {
    inline_response_200_3__embedded_t *inline_response_200_3__embedded_local_var = malloc(sizeof(inline_response_200_3__embedded_t));
    if (!inline_response_200_3__embedded_local_var) {
        return NULL;
    }
    inline_response_200_3__embedded_local_var->service_list = service_list;

    return inline_response_200_3__embedded_local_var;
}


void inline_response_200_3__embedded_free(inline_response_200_3__embedded_t *inline_response_200_3__embedded) {
    if(NULL == inline_response_200_3__embedded){
        return ;
    }
    listEntry_t *listEntry;
    list_ForEach(listEntry, inline_response_200_3__embedded->service_list) {
        inline_response_200_3__embedded_service_list_free(listEntry->data);
    }
    list_free(inline_response_200_3__embedded->service_list);
    free(inline_response_200_3__embedded);
}

cJSON *inline_response_200_3__embedded_convertToJSON(inline_response_200_3__embedded_t *inline_response_200_3__embedded) {
    cJSON *item = cJSON_CreateObject();

    // inline_response_200_3__embedded->service_list
    if (!inline_response_200_3__embedded->service_list) {
        goto fail;
    }
    
    cJSON *service_list = cJSON_AddArrayToObject(item, "serviceList");
    if(service_list == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *service_listListEntry;
    if (inline_response_200_3__embedded->service_list) {
    list_ForEach(service_listListEntry, inline_response_200_3__embedded->service_list) {
    cJSON *itemLocal = inline_response_200_3__embedded_service_list_convertToJSON(service_listListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(service_list, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

inline_response_200_3__embedded_t *inline_response_200_3__embedded_parseFromJSON(cJSON *inline_response_200_3__embeddedJSON){

    inline_response_200_3__embedded_t *inline_response_200_3__embedded_local_var = NULL;

    // inline_response_200_3__embedded->service_list
    cJSON *service_list = cJSON_GetObjectItemCaseSensitive(inline_response_200_3__embeddedJSON, "serviceList");
    if (!service_list) {
        goto end;
    }

    list_t *service_listList;
    
    cJSON *service_list_local_nonprimitive;
    if(!cJSON_IsArray(service_list)){
        goto end; //nonprimitive container
    }

    service_listList = list_create();

    cJSON_ArrayForEach(service_list_local_nonprimitive,service_list )
    {
        if(!cJSON_IsObject(service_list_local_nonprimitive)){
            goto end;
        }
        inline_response_200_3__embedded_service_list_t *service_listItem = inline_response_200_3__embedded_service_list_parseFromJSON(service_list_local_nonprimitive);

        list_addElement(service_listList, service_listItem);
    }


    inline_response_200_3__embedded_local_var = inline_response_200_3__embedded_create (
        service_listList
        );

    return inline_response_200_3__embedded_local_var;
end:
    return NULL;

}
