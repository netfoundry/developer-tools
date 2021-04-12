#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "inline_response_200_3__embedded_model_client_ingress_ports.h"



inline_response_200_3__embedded_model_client_ingress_ports_t *inline_response_200_3__embedded_model_client_ingress_ports_create(
    double high,
    double low
    ) {
    inline_response_200_3__embedded_model_client_ingress_ports_t *inline_response_200_3__embedded_model_client_ingress_ports_local_var = malloc(sizeof(inline_response_200_3__embedded_model_client_ingress_ports_t));
    if (!inline_response_200_3__embedded_model_client_ingress_ports_local_var) {
        return NULL;
    }
    inline_response_200_3__embedded_model_client_ingress_ports_local_var->high = high;
    inline_response_200_3__embedded_model_client_ingress_ports_local_var->low = low;

    return inline_response_200_3__embedded_model_client_ingress_ports_local_var;
}


void inline_response_200_3__embedded_model_client_ingress_ports_free(inline_response_200_3__embedded_model_client_ingress_ports_t *inline_response_200_3__embedded_model_client_ingress_ports) {
    if(NULL == inline_response_200_3__embedded_model_client_ingress_ports){
        return ;
    }
    listEntry_t *listEntry;
    free(inline_response_200_3__embedded_model_client_ingress_ports);
}

cJSON *inline_response_200_3__embedded_model_client_ingress_ports_convertToJSON(inline_response_200_3__embedded_model_client_ingress_ports_t *inline_response_200_3__embedded_model_client_ingress_ports) {
    cJSON *item = cJSON_CreateObject();

    // inline_response_200_3__embedded_model_client_ingress_ports->high
    if (!inline_response_200_3__embedded_model_client_ingress_ports->high) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "high", inline_response_200_3__embedded_model_client_ingress_ports->high) == NULL) {
    goto fail; //Numeric
    }


    // inline_response_200_3__embedded_model_client_ingress_ports->low
    if (!inline_response_200_3__embedded_model_client_ingress_ports->low) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "low", inline_response_200_3__embedded_model_client_ingress_ports->low) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

inline_response_200_3__embedded_model_client_ingress_ports_t *inline_response_200_3__embedded_model_client_ingress_ports_parseFromJSON(cJSON *inline_response_200_3__embedded_model_client_ingress_portsJSON){

    inline_response_200_3__embedded_model_client_ingress_ports_t *inline_response_200_3__embedded_model_client_ingress_ports_local_var = NULL;

    // inline_response_200_3__embedded_model_client_ingress_ports->high
    cJSON *high = cJSON_GetObjectItemCaseSensitive(inline_response_200_3__embedded_model_client_ingress_portsJSON, "high");
    if (!high) {
        goto end;
    }

    
    if(!cJSON_IsNumber(high))
    {
    goto end; //Numeric
    }

    // inline_response_200_3__embedded_model_client_ingress_ports->low
    cJSON *low = cJSON_GetObjectItemCaseSensitive(inline_response_200_3__embedded_model_client_ingress_portsJSON, "low");
    if (!low) {
        goto end;
    }

    
    if(!cJSON_IsNumber(low))
    {
    goto end; //Numeric
    }


    inline_response_200_3__embedded_model_client_ingress_ports_local_var = inline_response_200_3__embedded_model_client_ingress_ports_create (
        high->valuedouble,
        low->valuedouble
        );

    return inline_response_200_3__embedded_model_client_ingress_ports_local_var;
end:
    return NULL;

}
