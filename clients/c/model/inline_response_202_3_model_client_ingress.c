#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "inline_response_202_3_model_client_ingress.h"



inline_response_202_3_model_client_ingress_t *inline_response_202_3_model_client_ingress_create(
    list_t *addresses,
    list_t *ports,
    list_t *protocols
    ) {
    inline_response_202_3_model_client_ingress_t *inline_response_202_3_model_client_ingress_local_var = malloc(sizeof(inline_response_202_3_model_client_ingress_t));
    if (!inline_response_202_3_model_client_ingress_local_var) {
        return NULL;
    }
    inline_response_202_3_model_client_ingress_local_var->addresses = addresses;
    inline_response_202_3_model_client_ingress_local_var->ports = ports;
    inline_response_202_3_model_client_ingress_local_var->protocols = protocols;

    return inline_response_202_3_model_client_ingress_local_var;
}


void inline_response_202_3_model_client_ingress_free(inline_response_202_3_model_client_ingress_t *inline_response_202_3_model_client_ingress) {
    if(NULL == inline_response_202_3_model_client_ingress){
        return ;
    }
    listEntry_t *listEntry;
    list_ForEach(listEntry, inline_response_202_3_model_client_ingress->addresses) {
        free(listEntry->data);
    }
    list_free(inline_response_202_3_model_client_ingress->addresses);
    list_ForEach(listEntry, inline_response_202_3_model_client_ingress->ports) {
        inline_response_200_3__embedded_model_client_ingress_ports_free(listEntry->data);
    }
    list_free(inline_response_202_3_model_client_ingress->ports);
    list_ForEach(listEntry, inline_response_202_3_model_client_ingress->protocols) {
        free(listEntry->data);
    }
    list_free(inline_response_202_3_model_client_ingress->protocols);
    free(inline_response_202_3_model_client_ingress);
}

cJSON *inline_response_202_3_model_client_ingress_convertToJSON(inline_response_202_3_model_client_ingress_t *inline_response_202_3_model_client_ingress) {
    cJSON *item = cJSON_CreateObject();

    // inline_response_202_3_model_client_ingress->addresses
    if (!inline_response_202_3_model_client_ingress->addresses) {
        goto fail;
    }
    
    cJSON *addresses = cJSON_AddArrayToObject(item, "addresses");
    if(addresses == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *addressesListEntry;
    list_ForEach(addressesListEntry, inline_response_202_3_model_client_ingress->addresses) {
    if(cJSON_AddStringToObject(addresses, "", (char*)addressesListEntry->data) == NULL)
    {
        goto fail;
    }
    }


    // inline_response_202_3_model_client_ingress->ports
    if (!inline_response_202_3_model_client_ingress->ports) {
        goto fail;
    }
    
    cJSON *ports = cJSON_AddArrayToObject(item, "ports");
    if(ports == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *portsListEntry;
    if (inline_response_202_3_model_client_ingress->ports) {
    list_ForEach(portsListEntry, inline_response_202_3_model_client_ingress->ports) {
    cJSON *itemLocal = inline_response_200_3__embedded_model_client_ingress_ports_convertToJSON(portsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(ports, itemLocal);
    }
    }


    // inline_response_202_3_model_client_ingress->protocols
    if (!inline_response_202_3_model_client_ingress->protocols) {
        goto fail;
    }
    
    cJSON *protocols = cJSON_AddArrayToObject(item, "protocols");
    if(protocols == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *protocolsListEntry;
    list_ForEach(protocolsListEntry, inline_response_202_3_model_client_ingress->protocols) {
    if(cJSON_AddStringToObject(protocols, "", (char*)protocolsListEntry->data) == NULL)
    {
        goto fail;
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

inline_response_202_3_model_client_ingress_t *inline_response_202_3_model_client_ingress_parseFromJSON(cJSON *inline_response_202_3_model_client_ingressJSON){

    inline_response_202_3_model_client_ingress_t *inline_response_202_3_model_client_ingress_local_var = NULL;

    // inline_response_202_3_model_client_ingress->addresses
    cJSON *addresses = cJSON_GetObjectItemCaseSensitive(inline_response_202_3_model_client_ingressJSON, "addresses");
    if (!addresses) {
        goto end;
    }

    list_t *addressesList;
    
    cJSON *addresses_local;
    if(!cJSON_IsArray(addresses)) {
        goto end;//primitive container
    }
    addressesList = list_create();

    cJSON_ArrayForEach(addresses_local, addresses)
    {
        if(!cJSON_IsString(addresses_local))
        {
            goto end;
        }
        list_addElement(addressesList , strdup(addresses_local->valuestring));
    }

    // inline_response_202_3_model_client_ingress->ports
    cJSON *ports = cJSON_GetObjectItemCaseSensitive(inline_response_202_3_model_client_ingressJSON, "ports");
    if (!ports) {
        goto end;
    }

    list_t *portsList;
    
    cJSON *ports_local_nonprimitive;
    if(!cJSON_IsArray(ports)){
        goto end; //nonprimitive container
    }

    portsList = list_create();

    cJSON_ArrayForEach(ports_local_nonprimitive,ports )
    {
        if(!cJSON_IsObject(ports_local_nonprimitive)){
            goto end;
        }
        inline_response_200_3__embedded_model_client_ingress_ports_t *portsItem = inline_response_200_3__embedded_model_client_ingress_ports_parseFromJSON(ports_local_nonprimitive);

        list_addElement(portsList, portsItem);
    }

    // inline_response_202_3_model_client_ingress->protocols
    cJSON *protocols = cJSON_GetObjectItemCaseSensitive(inline_response_202_3_model_client_ingressJSON, "protocols");
    if (!protocols) {
        goto end;
    }

    list_t *protocolsList;
    
    cJSON *protocols_local;
    if(!cJSON_IsArray(protocols)) {
        goto end;//primitive container
    }
    protocolsList = list_create();

    cJSON_ArrayForEach(protocols_local, protocols)
    {
        if(!cJSON_IsString(protocols_local))
        {
            goto end;
        }
        list_addElement(protocolsList , strdup(protocols_local->valuestring));
    }


    inline_response_202_3_model_client_ingress_local_var = inline_response_202_3_model_client_ingress_create (
        addressesList,
        portsList,
        protocolsList
        );

    return inline_response_202_3_model_client_ingress_local_var;
end:
    return NULL;

}
