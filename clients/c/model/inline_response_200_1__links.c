#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "inline_response_200_1__links.h"



inline_response_200_1__links_t *inline_response_200_1__links_create(
    inline_response_200_1__links_self_t *self
    ) {
    inline_response_200_1__links_t *inline_response_200_1__links_local_var = malloc(sizeof(inline_response_200_1__links_t));
    if (!inline_response_200_1__links_local_var) {
        return NULL;
    }
    inline_response_200_1__links_local_var->self = self;

    return inline_response_200_1__links_local_var;
}


void inline_response_200_1__links_free(inline_response_200_1__links_t *inline_response_200_1__links) {
    if(NULL == inline_response_200_1__links){
        return ;
    }
    listEntry_t *listEntry;
    inline_response_200_1__links_self_free(inline_response_200_1__links->self);
    free(inline_response_200_1__links);
}

cJSON *inline_response_200_1__links_convertToJSON(inline_response_200_1__links_t *inline_response_200_1__links) {
    cJSON *item = cJSON_CreateObject();

    // inline_response_200_1__links->self
    if (!inline_response_200_1__links->self) {
        goto fail;
    }
    
    cJSON *self_local_JSON = inline_response_200_1__links_self_convertToJSON(inline_response_200_1__links->self);
    if(self_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "self", self_local_JSON);
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

inline_response_200_1__links_t *inline_response_200_1__links_parseFromJSON(cJSON *inline_response_200_1__linksJSON){

    inline_response_200_1__links_t *inline_response_200_1__links_local_var = NULL;

    // inline_response_200_1__links->self
    cJSON *self = cJSON_GetObjectItemCaseSensitive(inline_response_200_1__linksJSON, "self");
    if (!self) {
        goto end;
    }

    inline_response_200_1__links_self_t *self_local_nonprim = NULL;
    
    self_local_nonprim = inline_response_200_1__links_self_parseFromJSON(self); //nonprimitive


    inline_response_200_1__links_local_var = inline_response_200_1__links_create (
        self_local_nonprim
        );

    return inline_response_200_1__links_local_var;
end:
    return NULL;

}
