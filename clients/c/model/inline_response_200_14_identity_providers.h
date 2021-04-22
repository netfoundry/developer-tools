/*
 * inline_response_200_14_identity_providers.h
 *
 * 
 */

#ifndef _inline_response_200_14_identity_providers_H_
#define _inline_response_200_14_identity_providers_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct inline_response_200_14_identity_providers_t inline_response_200_14_identity_providers_t;

#include "any_type.h"
#include "inline_response_200_14_updated_at.h"



typedef struct inline_response_200_14_identity_providers_t {
    char *name; // string
    char *auth0_connection_type; // string
    char *auth0_connection_id; // string
    char *id; // string
    struct inline_response_200_14_updated_at_t *created_at; //model
    char *organization_id; // string
    int active; //boolean

} inline_response_200_14_identity_providers_t;

inline_response_200_14_identity_providers_t *inline_response_200_14_identity_providers_create(
    char *name,
    char *auth0_connection_type,
    char *auth0_connection_id,
    char *id,
    inline_response_200_14_updated_at_t *created_at,
    char *organization_id,
    int active
);

void inline_response_200_14_identity_providers_free(inline_response_200_14_identity_providers_t *inline_response_200_14_identity_providers);

inline_response_200_14_identity_providers_t *inline_response_200_14_identity_providers_parseFromJSON(cJSON *inline_response_200_14_identity_providersJSON);

cJSON *inline_response_200_14_identity_providers_convertToJSON(inline_response_200_14_identity_providers_t *inline_response_200_14_identity_providers);

#endif /* _inline_response_200_14_identity_providers_H_ */

