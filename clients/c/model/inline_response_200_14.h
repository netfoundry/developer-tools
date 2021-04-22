/*
 * inline_response_200_14.h
 *
 * 
 */

#ifndef _inline_response_200_14_H_
#define _inline_response_200_14_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct inline_response_200_14_t inline_response_200_14_t;

#include "any_type.h"
#include "inline_response_200_14_identity_providers.h"
#include "inline_response_200_14_updated_at.h"



typedef struct inline_response_200_14_t {
    char *name; // string
    struct inline_response_200_14_updated_at_t *updated_at; //model
    char *label; // string
    char *id; // string
    char *mfa_provider; // string
    struct inline_response_200_14_updated_at_t *created_at; //model
    list_t *identity_providers; //nonprimitive container
    int deleted; //boolean
    int active; //boolean

} inline_response_200_14_t;

inline_response_200_14_t *inline_response_200_14_create(
    char *name,
    inline_response_200_14_updated_at_t *updated_at,
    char *label,
    char *id,
    char *mfa_provider,
    inline_response_200_14_updated_at_t *created_at,
    list_t *identity_providers,
    int deleted,
    int active
);

void inline_response_200_14_free(inline_response_200_14_t *inline_response_200_14);

inline_response_200_14_t *inline_response_200_14_parseFromJSON(cJSON *inline_response_200_14JSON);

cJSON *inline_response_200_14_convertToJSON(inline_response_200_14_t *inline_response_200_14);

#endif /* _inline_response_200_14_H_ */

