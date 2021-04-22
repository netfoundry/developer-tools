/*
 * inline_response_200_15__embedded_network_config_metadata_list.h
 *
 * 
 */

#ifndef _inline_response_200_15__embedded_network_config_metadata_list_H_
#define _inline_response_200_15__embedded_network_config_metadata_list_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct inline_response_200_15__embedded_network_config_metadata_list_t inline_response_200_15__embedded_network_config_metadata_list_t;

#include "inline_response_200_2__embedded__links.h"



typedef struct inline_response_200_15__embedded_network_config_metadata_list_t {
    double network_controller_volume_size; //numeric
    double gateway_volume_size; //numeric
    char *name; // string
    char *gcp_transfer_node_size; // string
    char *aws_network_controller_size; // string
    double transfer_node_volume_size; //numeric
    char *aws_gateway_size; // string
    char *ocp_transfer_node_size; // string
    char *aws_transfer_node_size; // string
    char *id; // string
    char *azure_transfer_node_size; // string
    char *alicloud_transfer_node_size; // string
    struct inline_response_200_2__embedded__links_t *_links; //model

} inline_response_200_15__embedded_network_config_metadata_list_t;

inline_response_200_15__embedded_network_config_metadata_list_t *inline_response_200_15__embedded_network_config_metadata_list_create(
    double network_controller_volume_size,
    double gateway_volume_size,
    char *name,
    char *gcp_transfer_node_size,
    char *aws_network_controller_size,
    double transfer_node_volume_size,
    char *aws_gateway_size,
    char *ocp_transfer_node_size,
    char *aws_transfer_node_size,
    char *id,
    char *azure_transfer_node_size,
    char *alicloud_transfer_node_size,
    inline_response_200_2__embedded__links_t *_links
);

void inline_response_200_15__embedded_network_config_metadata_list_free(inline_response_200_15__embedded_network_config_metadata_list_t *inline_response_200_15__embedded_network_config_metadata_list);

inline_response_200_15__embedded_network_config_metadata_list_t *inline_response_200_15__embedded_network_config_metadata_list_parseFromJSON(cJSON *inline_response_200_15__embedded_network_config_metadata_listJSON);

cJSON *inline_response_200_15__embedded_network_config_metadata_list_convertToJSON(inline_response_200_15__embedded_network_config_metadata_list_t *inline_response_200_15__embedded_network_config_metadata_list);

#endif /* _inline_response_200_15__embedded_network_config_metadata_list_H_ */

