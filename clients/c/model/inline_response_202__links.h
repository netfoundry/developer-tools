/*
 * inline_response_202__links.h
 *
 * 
 */

#ifndef _inline_response_202__links_H_
#define _inline_response_202__links_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct inline_response_202__links_t inline_response_202__links_t;

#include "inline_response_200__links_network.h"
#include "inline_response_200__links_self.h"



typedef struct inline_response_202__links_t {
    struct inline_response_200__links_self_t *services; //model
    struct inline_response_200__links_network_t *networks; //model
    struct inline_response_200__links_self_t *app_wans; //model
    struct inline_response_200__links_network_t *process; //model
    struct inline_response_200__links_self_t *endpoints; //model
    struct inline_response_200__links_self_t *certificate_authorities; //model
    struct inline_response_200__links_self_t *self; //model
    struct inline_response_200__links_network_t *process_executions; //model
    struct inline_response_200__links_self_t *network_controllers; //model
    struct inline_response_200__links_self_t *posture_checks; //model
    struct inline_response_200__links_self_t *edge_routers; //model
    struct inline_response_200__links_self_t *edge_router_policies; //model

} inline_response_202__links_t;

inline_response_202__links_t *inline_response_202__links_create(
    inline_response_200__links_self_t *services,
    inline_response_200__links_network_t *networks,
    inline_response_200__links_self_t *app_wans,
    inline_response_200__links_network_t *process,
    inline_response_200__links_self_t *endpoints,
    inline_response_200__links_self_t *certificate_authorities,
    inline_response_200__links_self_t *self,
    inline_response_200__links_network_t *process_executions,
    inline_response_200__links_self_t *network_controllers,
    inline_response_200__links_self_t *posture_checks,
    inline_response_200__links_self_t *edge_routers,
    inline_response_200__links_self_t *edge_router_policies
);

void inline_response_202__links_free(inline_response_202__links_t *inline_response_202__links);

inline_response_202__links_t *inline_response_202__links_parseFromJSON(cJSON *inline_response_202__linksJSON);

cJSON *inline_response_202__links_convertToJSON(inline_response_202__links_t *inline_response_202__links);

#endif /* _inline_response_202__links_H_ */

