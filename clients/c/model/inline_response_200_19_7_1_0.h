/*
 * inline_response_200_19_7_1_0.h
 *
 * 
 */

#ifndef _inline_response_200_19_7_1_0_H_
#define _inline_response_200_19_7_1_0_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct inline_response_200_19_7_1_0_t inline_response_200_19_7_1_0_t;




typedef struct inline_response_200_19_7_1_0_t {
    char *ziti_cli_linux_binary_sha_1; // string
    char *ziti_tunnel_linux_binary; // string
    char *ziti_tunnel_linux_binary_sha_1; // string
    char *ziti_controller_binary; // string
    char *ziti_cli_linux_binary_md5; // string
    char *ziti_router_linux_binary_sha_1; // string
    char *ziti_router_linux_binary_sha_256; // string
    char *ziti_router_linux_binary_md5; // string
    char *ziti_windows_desktop_edge; // string
    char *ziti_mac_desktop_edge; // string
    char *ziti_controller_binary_sha_1; // string
    char *ziti_controller_binary_md5; // string
    char *ziti_controller_binary_sha_256; // string
    char *ziti_ios_edge; // string
    char *ziti_cli_linux_binary; // string
    char *ziti_version; // string
    char *ziti_router_linux_binary; // string
    char *ziti_tunnel_linux_binary_sha_256; // string
    char *ziti_android_edge; // string
    char *ziti_tunnel_linux_binary_md5; // string
    char *ziti_cli_linux_binary_sha_256; // string
    int active; //boolean

} inline_response_200_19_7_1_0_t;

inline_response_200_19_7_1_0_t *inline_response_200_19_7_1_0_create(
    char *ziti_cli_linux_binary_sha_1,
    char *ziti_tunnel_linux_binary,
    char *ziti_tunnel_linux_binary_sha_1,
    char *ziti_controller_binary,
    char *ziti_cli_linux_binary_md5,
    char *ziti_router_linux_binary_sha_1,
    char *ziti_router_linux_binary_sha_256,
    char *ziti_router_linux_binary_md5,
    char *ziti_windows_desktop_edge,
    char *ziti_mac_desktop_edge,
    char *ziti_controller_binary_sha_1,
    char *ziti_controller_binary_md5,
    char *ziti_controller_binary_sha_256,
    char *ziti_ios_edge,
    char *ziti_cli_linux_binary,
    char *ziti_version,
    char *ziti_router_linux_binary,
    char *ziti_tunnel_linux_binary_sha_256,
    char *ziti_android_edge,
    char *ziti_tunnel_linux_binary_md5,
    char *ziti_cli_linux_binary_sha_256,
    int active
);

void inline_response_200_19_7_1_0_free(inline_response_200_19_7_1_0_t *inline_response_200_19_7_1_0);

inline_response_200_19_7_1_0_t *inline_response_200_19_7_1_0_parseFromJSON(cJSON *inline_response_200_19_7_1_0JSON);

cJSON *inline_response_200_19_7_1_0_convertToJSON(inline_response_200_19_7_1_0_t *inline_response_200_19_7_1_0);

#endif /* _inline_response_200_19_7_1_0_H_ */

