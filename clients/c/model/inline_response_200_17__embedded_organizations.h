/*
 * inline_response_200_17__embedded_organizations.h
 *
 * 
 */

#ifndef _inline_response_200_17__embedded_organizations_H_
#define _inline_response_200_17__embedded_organizations_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct inline_response_200_17__embedded_organizations_t inline_response_200_17__embedded_organizations_t;

#include "any_type.h"
#include "inline_response_200_11__links.h"



typedef struct inline_response_200_17__embedded_organizations_t {
    char *organization_short_name; // string
    char *name; // string
    char *updated_at; // string
    int ziti_enabled; //boolean
    char *billing_account_id; // string
    char *id; // string
    int aws_auto_scaling_gateway_enabled; //boolean
    char *created_at; // string
    int mfa_required; //boolean
    int deleted; //boolean
    struct inline_response_200_11__links_t *_links; //model

} inline_response_200_17__embedded_organizations_t;

inline_response_200_17__embedded_organizations_t *inline_response_200_17__embedded_organizations_create(
    char *organization_short_name,
    char *name,
    char *updated_at,
    int ziti_enabled,
    char *billing_account_id,
    char *id,
    int aws_auto_scaling_gateway_enabled,
    char *created_at,
    int mfa_required,
    int deleted,
    inline_response_200_11__links_t *_links
);

void inline_response_200_17__embedded_organizations_free(inline_response_200_17__embedded_organizations_t *inline_response_200_17__embedded_organizations);

inline_response_200_17__embedded_organizations_t *inline_response_200_17__embedded_organizations_parseFromJSON(cJSON *inline_response_200_17__embedded_organizationsJSON);

cJSON *inline_response_200_17__embedded_organizations_convertToJSON(inline_response_200_17__embedded_organizations_t *inline_response_200_17__embedded_organizations);

#endif /* _inline_response_200_17__embedded_organizations_H_ */

