#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "inline_response_200_2__embedded.h"



inline_response_200_2__embedded_t *inline_response_200_2__embedded_create(
    list_t *data_centers
    ) {
    inline_response_200_2__embedded_t *inline_response_200_2__embedded_local_var = malloc(sizeof(inline_response_200_2__embedded_t));
    if (!inline_response_200_2__embedded_local_var) {
        return NULL;
    }
    inline_response_200_2__embedded_local_var->data_centers = data_centers;

    return inline_response_200_2__embedded_local_var;
}


void inline_response_200_2__embedded_free(inline_response_200_2__embedded_t *inline_response_200_2__embedded) {
    if(NULL == inline_response_200_2__embedded){
        return ;
    }
    listEntry_t *listEntry;
    list_ForEach(listEntry, inline_response_200_2__embedded->data_centers) {
        inline_response_200_2__embedded_data_centers_free(listEntry->data);
    }
    list_free(inline_response_200_2__embedded->data_centers);
    free(inline_response_200_2__embedded);
}

cJSON *inline_response_200_2__embedded_convertToJSON(inline_response_200_2__embedded_t *inline_response_200_2__embedded) {
    cJSON *item = cJSON_CreateObject();

    // inline_response_200_2__embedded->data_centers
    if (!inline_response_200_2__embedded->data_centers) {
        goto fail;
    }
    
    cJSON *data_centers = cJSON_AddArrayToObject(item, "dataCenters");
    if(data_centers == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *data_centersListEntry;
    if (inline_response_200_2__embedded->data_centers) {
    list_ForEach(data_centersListEntry, inline_response_200_2__embedded->data_centers) {
    cJSON *itemLocal = inline_response_200_2__embedded_data_centers_convertToJSON(data_centersListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(data_centers, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

inline_response_200_2__embedded_t *inline_response_200_2__embedded_parseFromJSON(cJSON *inline_response_200_2__embeddedJSON){

    inline_response_200_2__embedded_t *inline_response_200_2__embedded_local_var = NULL;

    // inline_response_200_2__embedded->data_centers
    cJSON *data_centers = cJSON_GetObjectItemCaseSensitive(inline_response_200_2__embeddedJSON, "dataCenters");
    if (!data_centers) {
        goto end;
    }

    list_t *data_centersList;
    
    cJSON *data_centers_local_nonprimitive;
    if(!cJSON_IsArray(data_centers)){
        goto end; //nonprimitive container
    }

    data_centersList = list_create();

    cJSON_ArrayForEach(data_centers_local_nonprimitive,data_centers )
    {
        if(!cJSON_IsObject(data_centers_local_nonprimitive)){
            goto end;
        }
        inline_response_200_2__embedded_data_centers_t *data_centersItem = inline_response_200_2__embedded_data_centers_parseFromJSON(data_centers_local_nonprimitive);

        list_addElement(data_centersList, data_centersItem);
    }


    inline_response_200_2__embedded_local_var = inline_response_200_2__embedded_create (
        data_centersList
        );

    return inline_response_200_2__embedded_local_var;
end:
    return NULL;

}
