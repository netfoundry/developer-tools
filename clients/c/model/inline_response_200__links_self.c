#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "inline_response_200__links_self.h"



inline_response_200__links_self_t *inline_response_200__links_self_create(
    char *href
    ) {
    inline_response_200__links_self_t *inline_response_200__links_self_local_var = malloc(sizeof(inline_response_200__links_self_t));
    if (!inline_response_200__links_self_local_var) {
        return NULL;
    }
    inline_response_200__links_self_local_var->href = href;

    return inline_response_200__links_self_local_var;
}


void inline_response_200__links_self_free(inline_response_200__links_self_t *inline_response_200__links_self) {
    if(NULL == inline_response_200__links_self){
        return ;
    }
    listEntry_t *listEntry;
    free(inline_response_200__links_self->href);
    free(inline_response_200__links_self);
}

cJSON *inline_response_200__links_self_convertToJSON(inline_response_200__links_self_t *inline_response_200__links_self) {
    cJSON *item = cJSON_CreateObject();

    // inline_response_200__links_self->href
    if (!inline_response_200__links_self->href) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "href", inline_response_200__links_self->href) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

inline_response_200__links_self_t *inline_response_200__links_self_parseFromJSON(cJSON *inline_response_200__links_selfJSON){

    inline_response_200__links_self_t *inline_response_200__links_self_local_var = NULL;

    // inline_response_200__links_self->href
    cJSON *href = cJSON_GetObjectItemCaseSensitive(inline_response_200__links_selfJSON, "href");
    if (!href) {
        goto end;
    }

    
    if(!cJSON_IsString(href))
    {
    goto end; //String
    }


    inline_response_200__links_self_local_var = inline_response_200__links_self_create (
        strdup(href->valuestring)
        );

    return inline_response_200__links_self_local_var;
end:
    return NULL;

}
