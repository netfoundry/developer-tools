#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "inline_response_200_17__links.h"



inline_response_200_17__links_t *inline_response_200_17__links_create(
    inline_response_200__links_self_t *first,
    inline_response_200__links_self_t *last
    ) {
    inline_response_200_17__links_t *inline_response_200_17__links_local_var = malloc(sizeof(inline_response_200_17__links_t));
    if (!inline_response_200_17__links_local_var) {
        return NULL;
    }
    inline_response_200_17__links_local_var->first = first;
    inline_response_200_17__links_local_var->last = last;

    return inline_response_200_17__links_local_var;
}


void inline_response_200_17__links_free(inline_response_200_17__links_t *inline_response_200_17__links) {
    if(NULL == inline_response_200_17__links){
        return ;
    }
    listEntry_t *listEntry;
    inline_response_200__links_self_free(inline_response_200_17__links->first);
    inline_response_200__links_self_free(inline_response_200_17__links->last);
    free(inline_response_200_17__links);
}

cJSON *inline_response_200_17__links_convertToJSON(inline_response_200_17__links_t *inline_response_200_17__links) {
    cJSON *item = cJSON_CreateObject();

    // inline_response_200_17__links->first
    if (!inline_response_200_17__links->first) {
        goto fail;
    }
    
    cJSON *first_local_JSON = inline_response_200__links_self_convertToJSON(inline_response_200_17__links->first);
    if(first_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "first", first_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // inline_response_200_17__links->last
    if (!inline_response_200_17__links->last) {
        goto fail;
    }
    
    cJSON *last_local_JSON = inline_response_200__links_self_convertToJSON(inline_response_200_17__links->last);
    if(last_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "last", last_local_JSON);
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

inline_response_200_17__links_t *inline_response_200_17__links_parseFromJSON(cJSON *inline_response_200_17__linksJSON){

    inline_response_200_17__links_t *inline_response_200_17__links_local_var = NULL;

    // inline_response_200_17__links->first
    cJSON *first = cJSON_GetObjectItemCaseSensitive(inline_response_200_17__linksJSON, "first");
    if (!first) {
        goto end;
    }

    inline_response_200__links_self_t *first_local_nonprim = NULL;
    
    first_local_nonprim = inline_response_200__links_self_parseFromJSON(first); //nonprimitive

    // inline_response_200_17__links->last
    cJSON *last = cJSON_GetObjectItemCaseSensitive(inline_response_200_17__linksJSON, "last");
    if (!last) {
        goto end;
    }

    inline_response_200__links_self_t *last_local_nonprim = NULL;
    
    last_local_nonprim = inline_response_200__links_self_parseFromJSON(last); //nonprimitive


    inline_response_200_17__links_local_var = inline_response_200_17__links_create (
        first_local_nonprim,
        last_local_nonprim
        );

    return inline_response_200_17__links_local_var;
end:
    return NULL;

}
