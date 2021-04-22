#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "inline_response_200_1_page.h"



inline_response_200_1_page_t *inline_response_200_1_page_create(
    double number,
    double size,
    double total_elements,
    double total_pages
    ) {
    inline_response_200_1_page_t *inline_response_200_1_page_local_var = malloc(sizeof(inline_response_200_1_page_t));
    if (!inline_response_200_1_page_local_var) {
        return NULL;
    }
    inline_response_200_1_page_local_var->number = number;
    inline_response_200_1_page_local_var->size = size;
    inline_response_200_1_page_local_var->total_elements = total_elements;
    inline_response_200_1_page_local_var->total_pages = total_pages;

    return inline_response_200_1_page_local_var;
}


void inline_response_200_1_page_free(inline_response_200_1_page_t *inline_response_200_1_page) {
    if(NULL == inline_response_200_1_page){
        return ;
    }
    listEntry_t *listEntry;
    free(inline_response_200_1_page);
}

cJSON *inline_response_200_1_page_convertToJSON(inline_response_200_1_page_t *inline_response_200_1_page) {
    cJSON *item = cJSON_CreateObject();

    // inline_response_200_1_page->number
    if (!inline_response_200_1_page->number) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "number", inline_response_200_1_page->number) == NULL) {
    goto fail; //Numeric
    }


    // inline_response_200_1_page->size
    if (!inline_response_200_1_page->size) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "size", inline_response_200_1_page->size) == NULL) {
    goto fail; //Numeric
    }


    // inline_response_200_1_page->total_elements
    if (!inline_response_200_1_page->total_elements) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "totalElements", inline_response_200_1_page->total_elements) == NULL) {
    goto fail; //Numeric
    }


    // inline_response_200_1_page->total_pages
    if (!inline_response_200_1_page->total_pages) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "totalPages", inline_response_200_1_page->total_pages) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

inline_response_200_1_page_t *inline_response_200_1_page_parseFromJSON(cJSON *inline_response_200_1_pageJSON){

    inline_response_200_1_page_t *inline_response_200_1_page_local_var = NULL;

    // inline_response_200_1_page->number
    cJSON *number = cJSON_GetObjectItemCaseSensitive(inline_response_200_1_pageJSON, "number");
    if (!number) {
        goto end;
    }

    
    if(!cJSON_IsNumber(number))
    {
    goto end; //Numeric
    }

    // inline_response_200_1_page->size
    cJSON *size = cJSON_GetObjectItemCaseSensitive(inline_response_200_1_pageJSON, "size");
    if (!size) {
        goto end;
    }

    
    if(!cJSON_IsNumber(size))
    {
    goto end; //Numeric
    }

    // inline_response_200_1_page->total_elements
    cJSON *total_elements = cJSON_GetObjectItemCaseSensitive(inline_response_200_1_pageJSON, "totalElements");
    if (!total_elements) {
        goto end;
    }

    
    if(!cJSON_IsNumber(total_elements))
    {
    goto end; //Numeric
    }

    // inline_response_200_1_page->total_pages
    cJSON *total_pages = cJSON_GetObjectItemCaseSensitive(inline_response_200_1_pageJSON, "totalPages");
    if (!total_pages) {
        goto end;
    }

    
    if(!cJSON_IsNumber(total_pages))
    {
    goto end; //Numeric
    }


    inline_response_200_1_page_local_var = inline_response_200_1_page_create (
        number->valuedouble,
        size->valuedouble,
        total_elements->valuedouble,
        total_pages->valuedouble
        );

    return inline_response_200_1_page_local_var;
end:
    return NULL;

}
