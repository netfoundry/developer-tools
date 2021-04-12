/*
 * inline_response_200_19_7_3_16.h
 *
 * 
 */

#ifndef _inline_response_200_19_7_3_16_H_
#define _inline_response_200_19_7_3_16_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct inline_response_200_19_7_3_16_t inline_response_200_19_7_3_16_t;




typedef struct inline_response_200_19_7_3_16_t {
    char *ziti_cli_linux_binary_sha_1; // string
    char *ziti_tunnel_linux_binary; // string
    char *ziti_tunnel_linux_binary_sha_1; // string
    char *ziti_controller_binary; // string
    char *ziti_cli_linux_binary_md5; // string
    char *ziti_router_linux_binary_sha_1; // string
    char *ziti_router_linux_arm_binary_md5; // string
    char *ziti_router_linux_binary_sha_256; // string
    char *ziti_cli_linux_arm_binary; // string
    char *ziti_router_linux_binary_md5; // string
    char *ziti_windows_desktop_edge; // string
    char *ziti_router_linux_arm_binary_sha_256; // string
    char *ziti_mac_desktop_edge; // string
    char *ziti_controller_binary_sha_1; // string
    char *ziti_controller_binary_md5; // string
    char *ziti_controller_binary_sha_256; // string
    char *ziti_ios_edge; // string
    char *ziti_cli_linux_binary; // string
    char *ziti_router_linux_arm_binary_sha_1; // string
    char *ziti_version; // string
    char *ziti_fabric_binary; // string
    char *ziti_cli_linux_arm_binary_sha_1; // string
    char *ziti_tunnel_linux_arm_binary_sha_1; // string
    char *ziti_tunnel_linux_arm_binary; // string
    char *ziti_cli_linux_arm_binary_sha_256; // string
    char *ziti_fabric_binary_sha_256; // string
    char *ziti_router_linux_binary; // string
    char *ziti_tunnel_linux_binary_sha_256; // string
    char *ziti_android_edge; // string
    char *ziti_tunnel_linux_arm_binary_md5; // string
    char *ziti_fabric_binary_md5; // string
    char *ziti_tunnel_linux_binary_md5; // string
    char *ziti_router_linux_arm_binary; // string
    char *ziti_fabric_binary_sha_1; // string
    char *ziti_cli_linux_arm_binary_md5; // string
    char *ziti_tunnel_linux_arm_binary_sha_256; // string
    char *ziti_cli_linux_binary_sha_256; // string
    int active; //boolean

} inline_response_200_19_7_3_16_t;

inline_response_200_19_7_3_16_t *inline_response_200_19_7_3_16_create(
    char *ziti_cli_linux_binary_sha_1,
    char *ziti_tunnel_linux_binary,
    char *ziti_tunnel_linux_binary_sha_1,
    char *ziti_controller_binary,
    char *ziti_cli_linux_binary_md5,
    char *ziti_router_linux_binary_sha_1,
    char *ziti_router_linux_arm_binary_md5,
    char *ziti_router_linux_binary_sha_256,
    char *ziti_cli_linux_arm_binary,
    char *ziti_router_linux_binary_md5,
    char *ziti_windows_desktop_edge,
    char *ziti_router_linux_arm_binary_sha_256,
    char *ziti_mac_desktop_edge,
    char *ziti_controller_binary_sha_1,
    char *ziti_controller_binary_md5,
    char *ziti_controller_binary_sha_256,
    char *ziti_ios_edge,
    char *ziti_cli_linux_binary,
    char *ziti_router_linux_arm_binary_sha_1,
    char *ziti_version,
    char *ziti_fabric_binary,
    char *ziti_cli_linux_arm_binary_sha_1,
    char *ziti_tunnel_linux_arm_binary_sha_1,
    char *ziti_tunnel_linux_arm_binary,
    char *ziti_cli_linux_arm_binary_sha_256,
    char *ziti_fabric_binary_sha_256,
    char *ziti_router_linux_binary,
    char *ziti_tunnel_linux_binary_sha_256,
    char *ziti_android_edge,
    char *ziti_tunnel_linux_arm_binary_md5,
    char *ziti_fabric_binary_md5,
    char *ziti_tunnel_linux_binary_md5,
    char *ziti_router_linux_arm_binary,
    char *ziti_fabric_binary_sha_1,
    char *ziti_cli_linux_arm_binary_md5,
    char *ziti_tunnel_linux_arm_binary_sha_256,
    char *ziti_cli_linux_binary_sha_256,
    int active
);

void inline_response_200_19_7_3_16_free(inline_response_200_19_7_3_16_t *inline_response_200_19_7_3_16);

inline_response_200_19_7_3_16_t *inline_response_200_19_7_3_16_parseFromJSON(cJSON *inline_response_200_19_7_3_16JSON);

cJSON *inline_response_200_19_7_3_16_convertToJSON(inline_response_200_19_7_3_16_t *inline_response_200_19_7_3_16);

#endif /* _inline_response_200_19_7_3_16_H_ */

