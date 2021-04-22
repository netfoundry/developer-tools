#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "inline_response_200_3__embedded_model_server_egress.h"



inline_response_200_3__embedded_model_server_egress_t *inline_response_200_3__embedded_model_server_egress_create(
    char *host,
    double port,
    int dial_intercept_protocol,
    char *address,
    ) {
    inline_response_200_3__embedded_model_server_egress_t *inline_response_200_3__embedded_model_server_egress_local_var = malloc(sizeof(inline_response_200_3__embedded_model_server_egress_t));
    if (!inline_response_200_3__embedded_model_server_egress_local_var) {
        return NULL;
    }
    inline_response_200_3__embedded_model_server_egress_local_var->host = host;
    inline_response_200_3__embedded_model_server_egress_local_var->dial_intercept_address = dial_intercept_address;
    inline_response_200_3__embedded_model_server_egress_local_var->dial_intercept_port = dial_intercept_port;
    inline_response_200_3__embedded_model_server_egress_local_var->port = port;
    inline_response_200_3__embedded_model_server_egress_local_var->dial_intercept_protocol = dial_intercept_protocol;
    inline_response_200_3__embedded_model_server_egress_local_var->address = address;
    inline_response_200_3__embedded_model_server_egress_local_var->protocol = protocol;

    return inline_response_200_3__embedded_model_server_egress_local_var;
}


void inline_response_200_3__embedded_model_server_egress_free(inline_response_200_3__embedded_model_server_egress_t *inline_response_200_3__embedded_model_server_egress) {
    if(NULL == inline_response_200_3__embedded_model_server_egress){
        return ;
    }
    listEntry_t *listEntry;
    free(inline_response_200_3__embedded_model_server_egress->host);
    free(inline_response_200_3__embedded_model_server_egress->address);
    free(inline_response_200_3__embedded_model_server_egress);
}

cJSON *inline_response_200_3__embedded_model_server_egress_convertToJSON(inline_response_200_3__embedded_model_server_egress_t *inline_response_200_3__embedded_model_server_egress) {
    cJSON *item = cJSON_CreateObject();

    // inline_response_200_3__embedded_model_server_egress->host
    if(inline_response_200_3__embedded_model_server_egress->host) { 
    if(cJSON_AddStringToObject(item, "host", inline_response_200_3__embedded_model_server_egress->host) == NULL) {
    goto fail; //String
    }
     } 


    // inline_response_200_3__embedded_model_server_egress->dial_intercept_address
    if(inline_response_200_3__embedded_model_server_egress->dial_intercept_address) { 
     } 


    // inline_response_200_3__embedded_model_server_egress->dial_intercept_port
    if(inline_response_200_3__embedded_model_server_egress->dial_intercept_port) { 
     } 


    // inline_response_200_3__embedded_model_server_egress->port
    if (!inline_response_200_3__embedded_model_server_egress->port) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "port", inline_response_200_3__embedded_model_server_egress->port) == NULL) {
    goto fail; //Numeric
    }


    // inline_response_200_3__embedded_model_server_egress->dial_intercept_protocol
    if(inline_response_200_3__embedded_model_server_egress->dial_intercept_protocol) { 
    if(cJSON_AddBoolToObject(item, "dialInterceptProtocol", inline_response_200_3__embedded_model_server_egress->dial_intercept_protocol) == NULL) {
    goto fail; //Bool
    }
     } 


    // inline_response_200_3__embedded_model_server_egress->address
    if(inline_response_200_3__embedded_model_server_egress->address) { 
    if(cJSON_AddStringToObject(item, "address", inline_response_200_3__embedded_model_server_egress->address) == NULL) {
    goto fail; //String
    }
     } 


    // inline_response_200_3__embedded_model_server_egress->protocol
    if (!inline_response_200_3__embedded_model_server_egress->protocol) {
        goto fail;
    }
    

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

inline_response_200_3__embedded_model_server_egress_t *inline_response_200_3__embedded_model_server_egress_parseFromJSON(cJSON *inline_response_200_3__embedded_model_server_egressJSON){

    inline_response_200_3__embedded_model_server_egress_t *inline_response_200_3__embedded_model_server_egress_local_var = NULL;

    // inline_response_200_3__embedded_model_server_egress->host
    cJSON *host = cJSON_GetObjectItemCaseSensitive(inline_response_200_3__embedded_model_server_egressJSON, "host");
    if (host) { 
    if(!cJSON_IsString(host))
    {
    goto end; //String
    }
    }

    // inline_response_200_3__embedded_model_server_egress->dial_intercept_address
    cJSON *dial_intercept_address = cJSON_GetObjectItemCaseSensitive(inline_response_200_3__embedded_model_server_egressJSON, "dialInterceptAddress");
    }

    // inline_response_200_3__embedded_model_server_egress->dial_intercept_port
    cJSON *dial_intercept_port = cJSON_GetObjectItemCaseSensitive(inline_response_200_3__embedded_model_server_egressJSON, "dialInterceptPort");
    }

    // inline_response_200_3__embedded_model_server_egress->port
    cJSON *port = cJSON_GetObjectItemCaseSensitive(inline_response_200_3__embedded_model_server_egressJSON, "port");
    if (!port) {
        goto end;
    }

    
    if(!cJSON_IsNumber(port))
    {
    goto end; //Numeric
    }

    // inline_response_200_3__embedded_model_server_egress->dial_intercept_protocol
    cJSON *dial_intercept_protocol = cJSON_GetObjectItemCaseSensitive(inline_response_200_3__embedded_model_server_egressJSON, "dialInterceptProtocol");
    if (dial_intercept_protocol) { 
    if(!cJSON_IsBool(dial_intercept_protocol))
    {
    goto end; //Bool
    }
    }

    // inline_response_200_3__embedded_model_server_egress->address
    cJSON *address = cJSON_GetObjectItemCaseSensitive(inline_response_200_3__embedded_model_server_egressJSON, "address");
    if (address) { 
    if(!cJSON_IsString(address))
    {
    goto end; //String
    }
    }

    // inline_response_200_3__embedded_model_server_egress->protocol
    cJSON *protocol = cJSON_GetObjectItemCaseSensitive(inline_response_200_3__embedded_model_server_egressJSON, "protocol");
    if (!protocol) {
        goto end;
    }



    inline_response_200_3__embedded_model_server_egress_local_var = inline_response_200_3__embedded_model_server_egress_create (
        host ? strdup(host->valuestring) : NULL,
        port->valuedouble,
        dial_intercept_protocol ? dial_intercept_protocol->valueint : 0,
        address ? strdup(address->valuestring) : NULL,
        );

    return inline_response_200_3__embedded_model_server_egress_local_var;
end:
    return NULL;

}
