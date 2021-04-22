/*
 * inline_response_200_16.h
 *
 * 
 */

#ifndef _inline_response_200_16_H_
#define _inline_response_200_16_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct inline_response_200_16_t inline_response_200_16_t;

#include "any_type.h"
#include "inline_response_200_14_updated_at.h"



typedef struct inline_response_200_16_t {
    char *name; // string
    char *email; // string
    char *description; // string
    char *aws_cognito_client_id; // string
    char *id; // string
    char *contact_email; // string
    struct inline_response_200_14_updated_at_t *created_at; //model
    char *organization_id; // string
    char *tenant_id; // string
    char *type; // string
    char *authentication_url; // string
    int active; //boolean

} inline_response_200_16_t;

inline_response_200_16_t *inline_response_200_16_create(
    char *name,
    char *email,
    char *description,
    char *aws_cognito_client_id,
    char *id,
    char *contact_email,
    inline_response_200_14_updated_at_t *created_at,
    char *organization_id,
    char *tenant_id,
    char *type,
    char *authentication_url,
    int active
);

void inline_response_200_16_free(inline_response_200_16_t *inline_response_200_16);

inline_response_200_16_t *inline_response_200_16_parseFromJSON(cJSON *inline_response_200_16JSON);

cJSON *inline_response_200_16_convertToJSON(inline_response_200_16_t *inline_response_200_16);

#endif /* _inline_response_200_16_H_ */

