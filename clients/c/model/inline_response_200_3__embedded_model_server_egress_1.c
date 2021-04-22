#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "inline_response_200_3__embedded_model_server_egress_1.h"



inline_response_200_3__embedded_model_server_egress_1_t *inline_response_200_3__embedded_model_server_egress_1_create(
    char *host,
    double port,
    char *protocol
    ) {
    inline_response_200_3__embedded_model_server_egress_1_t *inline_response_200_3__embedded_model_server_egress_1_local_var = malloc(sizeof(inline_response_200_3__embedded_model_server_egress_1_t));
    if (!inline_response_200_3__embedded_model_server_egress_1_local_var) {
        return NULL;
    }
    inline_response_200_3__embedded_model_server_egress_1_local_var->host = host;
    inline_response_200_3__embedded_model_server_egress_1_local_var->port = port;
    inline_response_200_3__embedded_model_server_egress_1_local_var->protocol = protocol;

    return inline_response_200_3__embedded_model_server_egress_1_local_var;
}


void inline_response_200_3__embedded_model_server_egress_1_free(inline_response_200_3__embedded_model_server_egress_1_t *inline_response_200_3__embedded_model_server_egress_1) {
    if(NULL == inline_response_200_3__embedded_model_server_egress_1){
        return ;
    }
    listEntry_t *listEntry;
    free(inline_response_200_3__embedded_model_server_egress_1->host);
    free(inline_response_200_3__embedded_model_server_egress_1->protocol);
    free(inline_response_200_3__embedded_model_server_egress_1);
}

cJSON *inline_response_200_3__embedded_model_server_egress_1_convertToJSON(inline_response_200_3__embedded_model_server_egress_1_t *inline_response_200_3__embedded_model_server_egress_1) {
    cJSON *item = cJSON_CreateObject();

    // inline_response_200_3__embedded_model_server_egress_1->host
    if (!inline_response_200_3__embedded_model_server_egress_1->host) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "host", inline_response_200_3__embedded_model_server_egress_1->host) == NULL) {
    goto fail; //String
    }


    // inline_response_200_3__embedded_model_server_egress_1->port
    if (!inline_response_200_3__embedded_model_server_egress_1->port) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "port", inline_response_200_3__embedded_model_server_egress_1->port) == NULL) {
    goto fail; //Numeric
    }


    // inline_response_200_3__embedded_model_server_egress_1->protocol
    if (!inline_response_200_3__embedded_model_server_egress_1->protocol) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "protocol", inline_response_200_3__embedded_model_server_egress_1->protocol) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

inline_response_200_3__embedded_model_server_egress_1_t *inline_response_200_3__embedded_model_server_egress_1_parseFromJSON(cJSON *inline_response_200_3__embedded_model_server_egress_1JSON){

    inline_response_200_3__embedded_model_server_egress_1_t *inline_response_200_3__embedded_model_server_egress_1_local_var = NULL;

    // inline_response_200_3__embedded_model_server_egress_1->host
    cJSON *host = cJSON_GetObjectItemCaseSensitive(inline_response_200_3__embedded_model_server_egress_1JSON, "host");
    if (!host) {
        goto end;
    }

    
    if(!cJSON_IsString(host))
    {
    goto end; //String
    }

    // inline_response_200_3__embedded_model_server_egress_1->port
    cJSON *port = cJSON_GetObjectItemCaseSensitive(inline_response_200_3__embedded_model_server_egress_1JSON, "port");
    if (!port) {
        goto end;
    }

    
    if(!cJSON_IsNumber(port))
    {
    goto end; //Numeric
    }

    // inline_response_200_3__embedded_model_server_egress_1->protocol
    cJSON *protocol = cJSON_GetObjectItemCaseSensitive(inline_response_200_3__embedded_model_server_egress_1JSON, "protocol");
    if (!protocol) {
        goto end;
    }

    
    if(!cJSON_IsString(protocol))
    {
    goto end; //String
    }


    inline_response_200_3__embedded_model_server_egress_1_local_var = inline_response_200_3__embedded_model_server_egress_1_create (
        strdup(host->valuestring),
        port->valuedouble,
        strdup(protocol->valuestring)
        );

    return inline_response_200_3__embedded_model_server_egress_1_local_var;
end:
    return NULL;

}
