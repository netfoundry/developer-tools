#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "inline_response_200_6__embedded.h"



inline_response_200_6__embedded_t *inline_response_200_6__embedded_create(
    list_t *app_wan_list
    ) {
    inline_response_200_6__embedded_t *inline_response_200_6__embedded_local_var = malloc(sizeof(inline_response_200_6__embedded_t));
    if (!inline_response_200_6__embedded_local_var) {
        return NULL;
    }
    inline_response_200_6__embedded_local_var->app_wan_list = app_wan_list;

    return inline_response_200_6__embedded_local_var;
}


void inline_response_200_6__embedded_free(inline_response_200_6__embedded_t *inline_response_200_6__embedded) {
    if(NULL == inline_response_200_6__embedded){
        return ;
    }
    listEntry_t *listEntry;
    list_ForEach(listEntry, inline_response_200_6__embedded->app_wan_list) {
        inline_response_200_free(listEntry->data);
    }
    list_free(inline_response_200_6__embedded->app_wan_list);
    free(inline_response_200_6__embedded);
}

cJSON *inline_response_200_6__embedded_convertToJSON(inline_response_200_6__embedded_t *inline_response_200_6__embedded) {
    cJSON *item = cJSON_CreateObject();

    // inline_response_200_6__embedded->app_wan_list
    if (!inline_response_200_6__embedded->app_wan_list) {
        goto fail;
    }
    
    cJSON *app_wan_list = cJSON_AddArrayToObject(item, "appWanList");
    if(app_wan_list == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *app_wan_listListEntry;
    if (inline_response_200_6__embedded->app_wan_list) {
    list_ForEach(app_wan_listListEntry, inline_response_200_6__embedded->app_wan_list) {
    cJSON *itemLocal = inline_response_200_convertToJSON(app_wan_listListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(app_wan_list, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

inline_response_200_6__embedded_t *inline_response_200_6__embedded_parseFromJSON(cJSON *inline_response_200_6__embeddedJSON){

    inline_response_200_6__embedded_t *inline_response_200_6__embedded_local_var = NULL;

    // inline_response_200_6__embedded->app_wan_list
    cJSON *app_wan_list = cJSON_GetObjectItemCaseSensitive(inline_response_200_6__embeddedJSON, "appWanList");
    if (!app_wan_list) {
        goto end;
    }

    list_t *app_wan_listList;
    
    cJSON *app_wan_list_local_nonprimitive;
    if(!cJSON_IsArray(app_wan_list)){
        goto end; //nonprimitive container
    }

    app_wan_listList = list_create();

    cJSON_ArrayForEach(app_wan_list_local_nonprimitive,app_wan_list )
    {
        if(!cJSON_IsObject(app_wan_list_local_nonprimitive)){
            goto end;
        }
        inline_response_200_t *app_wan_listItem = inline_response_200_parseFromJSON(app_wan_list_local_nonprimitive);

        list_addElement(app_wan_listList, app_wan_listItem);
    }


    inline_response_200_6__embedded_local_var = inline_response_200_6__embedded_create (
        app_wan_listList
        );

    return inline_response_200_6__embedded_local_var;
end:
    return NULL;

}
