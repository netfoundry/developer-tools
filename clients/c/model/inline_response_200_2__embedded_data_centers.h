/*
 * inline_response_200_2__embedded_data_centers.h
 *
 * 
 */

#ifndef _inline_response_200_2__embedded_data_centers_H_
#define _inline_response_200_2__embedded_data_centers_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct inline_response_200_2__embedded_data_centers_t inline_response_200_2__embedded_data_centers_t;

#include "any_type.h"
#include "inline_response_200_2__embedded__links.h"



typedef struct inline_response_200_2__embedded_data_centers_t {
    double lng; //numeric
    char *provider; // string
    char *location_code; // string
    char *id; // string
    char *location_name; // string
    double lat; //numeric
    struct inline_response_200_2__embedded__links_t *_links; //model

} inline_response_200_2__embedded_data_centers_t;

inline_response_200_2__embedded_data_centers_t *inline_response_200_2__embedded_data_centers_create(
    double lng,
    char *provider,
    char *location_code,
    char *id,
    char *location_name,
    double lat,
    inline_response_200_2__embedded__links_t *_links
);

void inline_response_200_2__embedded_data_centers_free(inline_response_200_2__embedded_data_centers_t *inline_response_200_2__embedded_data_centers);

inline_response_200_2__embedded_data_centers_t *inline_response_200_2__embedded_data_centers_parseFromJSON(cJSON *inline_response_200_2__embedded_data_centersJSON);

cJSON *inline_response_200_2__embedded_data_centers_convertToJSON(inline_response_200_2__embedded_data_centers_t *inline_response_200_2__embedded_data_centers);

#endif /* _inline_response_200_2__embedded_data_centers_H_ */

