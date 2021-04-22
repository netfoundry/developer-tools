#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "inline_response_200_2__embedded_data_centers.h"



inline_response_200_2__embedded_data_centers_t *inline_response_200_2__embedded_data_centers_create(
    double lng,
    char *provider,
    char *location_code,
    char *id,
    char *location_name,
    double lat,
    inline_response_200_2__embedded__links_t *_links
    ) {
    inline_response_200_2__embedded_data_centers_t *inline_response_200_2__embedded_data_centers_local_var = malloc(sizeof(inline_response_200_2__embedded_data_centers_t));
    if (!inline_response_200_2__embedded_data_centers_local_var) {
        return NULL;
    }
    inline_response_200_2__embedded_data_centers_local_var->city = city;
    inline_response_200_2__embedded_data_centers_local_var->continent_code = continent_code;
    inline_response_200_2__embedded_data_centers_local_var->state_code = state_code;
    inline_response_200_2__embedded_data_centers_local_var->lng = lng;
    inline_response_200_2__embedded_data_centers_local_var->provider = provider;
    inline_response_200_2__embedded_data_centers_local_var->state_name = state_name;
    inline_response_200_2__embedded_data_centers_local_var->continent_name = continent_name;
    inline_response_200_2__embedded_data_centers_local_var->isp = isp;
    inline_response_200_2__embedded_data_centers_local_var->location_code = location_code;
    inline_response_200_2__embedded_data_centers_local_var->country_name = country_name;
    inline_response_200_2__embedded_data_centers_local_var->id = id;
    inline_response_200_2__embedded_data_centers_local_var->country_code = country_code;
    inline_response_200_2__embedded_data_centers_local_var->address = address;
    inline_response_200_2__embedded_data_centers_local_var->location_name = location_name;
    inline_response_200_2__embedded_data_centers_local_var->lat = lat;
    inline_response_200_2__embedded_data_centers_local_var->_links = _links;

    return inline_response_200_2__embedded_data_centers_local_var;
}


void inline_response_200_2__embedded_data_centers_free(inline_response_200_2__embedded_data_centers_t *inline_response_200_2__embedded_data_centers) {
    if(NULL == inline_response_200_2__embedded_data_centers){
        return ;
    }
    listEntry_t *listEntry;
    free(inline_response_200_2__embedded_data_centers->provider);
    free(inline_response_200_2__embedded_data_centers->location_code);
    free(inline_response_200_2__embedded_data_centers->id);
    free(inline_response_200_2__embedded_data_centers->location_name);
    inline_response_200_2__embedded__links_free(inline_response_200_2__embedded_data_centers->_links);
    free(inline_response_200_2__embedded_data_centers);
}

cJSON *inline_response_200_2__embedded_data_centers_convertToJSON(inline_response_200_2__embedded_data_centers_t *inline_response_200_2__embedded_data_centers) {
    cJSON *item = cJSON_CreateObject();

    // inline_response_200_2__embedded_data_centers->city
    if (!inline_response_200_2__embedded_data_centers->city) {
        goto fail;
    }
    


    // inline_response_200_2__embedded_data_centers->continent_code
    if (!inline_response_200_2__embedded_data_centers->continent_code) {
        goto fail;
    }
    


    // inline_response_200_2__embedded_data_centers->state_code
    if (!inline_response_200_2__embedded_data_centers->state_code) {
        goto fail;
    }
    


    // inline_response_200_2__embedded_data_centers->lng
    if (!inline_response_200_2__embedded_data_centers->lng) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "lng", inline_response_200_2__embedded_data_centers->lng) == NULL) {
    goto fail; //Numeric
    }


    // inline_response_200_2__embedded_data_centers->provider
    if (!inline_response_200_2__embedded_data_centers->provider) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "provider", inline_response_200_2__embedded_data_centers->provider) == NULL) {
    goto fail; //String
    }


    // inline_response_200_2__embedded_data_centers->state_name
    if (!inline_response_200_2__embedded_data_centers->state_name) {
        goto fail;
    }
    


    // inline_response_200_2__embedded_data_centers->continent_name
    if (!inline_response_200_2__embedded_data_centers->continent_name) {
        goto fail;
    }
    


    // inline_response_200_2__embedded_data_centers->isp
    if (!inline_response_200_2__embedded_data_centers->isp) {
        goto fail;
    }
    


    // inline_response_200_2__embedded_data_centers->location_code
    if (!inline_response_200_2__embedded_data_centers->location_code) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "locationCode", inline_response_200_2__embedded_data_centers->location_code) == NULL) {
    goto fail; //String
    }


    // inline_response_200_2__embedded_data_centers->country_name
    if (!inline_response_200_2__embedded_data_centers->country_name) {
        goto fail;
    }
    


    // inline_response_200_2__embedded_data_centers->id
    if (!inline_response_200_2__embedded_data_centers->id) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "id", inline_response_200_2__embedded_data_centers->id) == NULL) {
    goto fail; //String
    }


    // inline_response_200_2__embedded_data_centers->country_code
    if (!inline_response_200_2__embedded_data_centers->country_code) {
        goto fail;
    }
    


    // inline_response_200_2__embedded_data_centers->address
    if (!inline_response_200_2__embedded_data_centers->address) {
        goto fail;
    }
    


    // inline_response_200_2__embedded_data_centers->location_name
    if (!inline_response_200_2__embedded_data_centers->location_name) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "locationName", inline_response_200_2__embedded_data_centers->location_name) == NULL) {
    goto fail; //String
    }


    // inline_response_200_2__embedded_data_centers->lat
    if (!inline_response_200_2__embedded_data_centers->lat) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "lat", inline_response_200_2__embedded_data_centers->lat) == NULL) {
    goto fail; //Numeric
    }


    // inline_response_200_2__embedded_data_centers->_links
    if (!inline_response_200_2__embedded_data_centers->_links) {
        goto fail;
    }
    
    cJSON *_links_local_JSON = inline_response_200_2__embedded__links_convertToJSON(inline_response_200_2__embedded_data_centers->_links);
    if(_links_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "_links", _links_local_JSON);
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

inline_response_200_2__embedded_data_centers_t *inline_response_200_2__embedded_data_centers_parseFromJSON(cJSON *inline_response_200_2__embedded_data_centersJSON){

    inline_response_200_2__embedded_data_centers_t *inline_response_200_2__embedded_data_centers_local_var = NULL;

    // inline_response_200_2__embedded_data_centers->city
    cJSON *city = cJSON_GetObjectItemCaseSensitive(inline_response_200_2__embedded_data_centersJSON, "city");
    if (!city) {
        goto end;
    }


    // inline_response_200_2__embedded_data_centers->continent_code
    cJSON *continent_code = cJSON_GetObjectItemCaseSensitive(inline_response_200_2__embedded_data_centersJSON, "continentCode");
    if (!continent_code) {
        goto end;
    }


    // inline_response_200_2__embedded_data_centers->state_code
    cJSON *state_code = cJSON_GetObjectItemCaseSensitive(inline_response_200_2__embedded_data_centersJSON, "stateCode");
    if (!state_code) {
        goto end;
    }


    // inline_response_200_2__embedded_data_centers->lng
    cJSON *lng = cJSON_GetObjectItemCaseSensitive(inline_response_200_2__embedded_data_centersJSON, "lng");
    if (!lng) {
        goto end;
    }

    
    if(!cJSON_IsNumber(lng))
    {
    goto end; //Numeric
    }

    // inline_response_200_2__embedded_data_centers->provider
    cJSON *provider = cJSON_GetObjectItemCaseSensitive(inline_response_200_2__embedded_data_centersJSON, "provider");
    if (!provider) {
        goto end;
    }

    
    if(!cJSON_IsString(provider))
    {
    goto end; //String
    }

    // inline_response_200_2__embedded_data_centers->state_name
    cJSON *state_name = cJSON_GetObjectItemCaseSensitive(inline_response_200_2__embedded_data_centersJSON, "stateName");
    if (!state_name) {
        goto end;
    }


    // inline_response_200_2__embedded_data_centers->continent_name
    cJSON *continent_name = cJSON_GetObjectItemCaseSensitive(inline_response_200_2__embedded_data_centersJSON, "continentName");
    if (!continent_name) {
        goto end;
    }


    // inline_response_200_2__embedded_data_centers->isp
    cJSON *isp = cJSON_GetObjectItemCaseSensitive(inline_response_200_2__embedded_data_centersJSON, "isp");
    if (!isp) {
        goto end;
    }


    // inline_response_200_2__embedded_data_centers->location_code
    cJSON *location_code = cJSON_GetObjectItemCaseSensitive(inline_response_200_2__embedded_data_centersJSON, "locationCode");
    if (!location_code) {
        goto end;
    }

    
    if(!cJSON_IsString(location_code))
    {
    goto end; //String
    }

    // inline_response_200_2__embedded_data_centers->country_name
    cJSON *country_name = cJSON_GetObjectItemCaseSensitive(inline_response_200_2__embedded_data_centersJSON, "countryName");
    if (!country_name) {
        goto end;
    }


    // inline_response_200_2__embedded_data_centers->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(inline_response_200_2__embedded_data_centersJSON, "id");
    if (!id) {
        goto end;
    }

    
    if(!cJSON_IsString(id))
    {
    goto end; //String
    }

    // inline_response_200_2__embedded_data_centers->country_code
    cJSON *country_code = cJSON_GetObjectItemCaseSensitive(inline_response_200_2__embedded_data_centersJSON, "countryCode");
    if (!country_code) {
        goto end;
    }


    // inline_response_200_2__embedded_data_centers->address
    cJSON *address = cJSON_GetObjectItemCaseSensitive(inline_response_200_2__embedded_data_centersJSON, "address");
    if (!address) {
        goto end;
    }


    // inline_response_200_2__embedded_data_centers->location_name
    cJSON *location_name = cJSON_GetObjectItemCaseSensitive(inline_response_200_2__embedded_data_centersJSON, "locationName");
    if (!location_name) {
        goto end;
    }

    
    if(!cJSON_IsString(location_name))
    {
    goto end; //String
    }

    // inline_response_200_2__embedded_data_centers->lat
    cJSON *lat = cJSON_GetObjectItemCaseSensitive(inline_response_200_2__embedded_data_centersJSON, "lat");
    if (!lat) {
        goto end;
    }

    
    if(!cJSON_IsNumber(lat))
    {
    goto end; //Numeric
    }

    // inline_response_200_2__embedded_data_centers->_links
    cJSON *_links = cJSON_GetObjectItemCaseSensitive(inline_response_200_2__embedded_data_centersJSON, "_links");
    if (!_links) {
        goto end;
    }

    inline_response_200_2__embedded__links_t *_links_local_nonprim = NULL;
    
    _links_local_nonprim = inline_response_200_2__embedded__links_parseFromJSON(_links); //nonprimitive


    inline_response_200_2__embedded_data_centers_local_var = inline_response_200_2__embedded_data_centers_create (
        lng->valuedouble,
        strdup(provider->valuestring),
        strdup(location_code->valuestring),
        strdup(id->valuestring),
        strdup(location_name->valuestring),
        lat->valuedouble,
        _links_local_nonprim
        );

    return inline_response_200_2__embedded_data_centers_local_var;
end:
    return NULL;

}
