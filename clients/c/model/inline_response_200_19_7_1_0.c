#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "inline_response_200_19_7_1_0.h"



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
    ) {
    inline_response_200_19_7_1_0_t *inline_response_200_19_7_1_0_local_var = malloc(sizeof(inline_response_200_19_7_1_0_t));
    if (!inline_response_200_19_7_1_0_local_var) {
        return NULL;
    }
    inline_response_200_19_7_1_0_local_var->ziti_cli_linux_binary_sha_1 = ziti_cli_linux_binary_sha_1;
    inline_response_200_19_7_1_0_local_var->ziti_tunnel_linux_binary = ziti_tunnel_linux_binary;
    inline_response_200_19_7_1_0_local_var->ziti_tunnel_linux_binary_sha_1 = ziti_tunnel_linux_binary_sha_1;
    inline_response_200_19_7_1_0_local_var->ziti_controller_binary = ziti_controller_binary;
    inline_response_200_19_7_1_0_local_var->ziti_cli_linux_binary_md5 = ziti_cli_linux_binary_md5;
    inline_response_200_19_7_1_0_local_var->ziti_router_linux_binary_sha_1 = ziti_router_linux_binary_sha_1;
    inline_response_200_19_7_1_0_local_var->ziti_router_linux_binary_sha_256 = ziti_router_linux_binary_sha_256;
    inline_response_200_19_7_1_0_local_var->ziti_router_linux_binary_md5 = ziti_router_linux_binary_md5;
    inline_response_200_19_7_1_0_local_var->ziti_windows_desktop_edge = ziti_windows_desktop_edge;
    inline_response_200_19_7_1_0_local_var->ziti_mac_desktop_edge = ziti_mac_desktop_edge;
    inline_response_200_19_7_1_0_local_var->ziti_controller_binary_sha_1 = ziti_controller_binary_sha_1;
    inline_response_200_19_7_1_0_local_var->ziti_controller_binary_md5 = ziti_controller_binary_md5;
    inline_response_200_19_7_1_0_local_var->ziti_controller_binary_sha_256 = ziti_controller_binary_sha_256;
    inline_response_200_19_7_1_0_local_var->ziti_ios_edge = ziti_ios_edge;
    inline_response_200_19_7_1_0_local_var->ziti_cli_linux_binary = ziti_cli_linux_binary;
    inline_response_200_19_7_1_0_local_var->ziti_version = ziti_version;
    inline_response_200_19_7_1_0_local_var->ziti_router_linux_binary = ziti_router_linux_binary;
    inline_response_200_19_7_1_0_local_var->ziti_tunnel_linux_binary_sha_256 = ziti_tunnel_linux_binary_sha_256;
    inline_response_200_19_7_1_0_local_var->ziti_android_edge = ziti_android_edge;
    inline_response_200_19_7_1_0_local_var->ziti_tunnel_linux_binary_md5 = ziti_tunnel_linux_binary_md5;
    inline_response_200_19_7_1_0_local_var->ziti_cli_linux_binary_sha_256 = ziti_cli_linux_binary_sha_256;
    inline_response_200_19_7_1_0_local_var->active = active;

    return inline_response_200_19_7_1_0_local_var;
}


void inline_response_200_19_7_1_0_free(inline_response_200_19_7_1_0_t *inline_response_200_19_7_1_0) {
    if(NULL == inline_response_200_19_7_1_0){
        return ;
    }
    listEntry_t *listEntry;
    free(inline_response_200_19_7_1_0->ziti_cli_linux_binary_sha_1);
    free(inline_response_200_19_7_1_0->ziti_tunnel_linux_binary);
    free(inline_response_200_19_7_1_0->ziti_tunnel_linux_binary_sha_1);
    free(inline_response_200_19_7_1_0->ziti_controller_binary);
    free(inline_response_200_19_7_1_0->ziti_cli_linux_binary_md5);
    free(inline_response_200_19_7_1_0->ziti_router_linux_binary_sha_1);
    free(inline_response_200_19_7_1_0->ziti_router_linux_binary_sha_256);
    free(inline_response_200_19_7_1_0->ziti_router_linux_binary_md5);
    free(inline_response_200_19_7_1_0->ziti_windows_desktop_edge);
    free(inline_response_200_19_7_1_0->ziti_mac_desktop_edge);
    free(inline_response_200_19_7_1_0->ziti_controller_binary_sha_1);
    free(inline_response_200_19_7_1_0->ziti_controller_binary_md5);
    free(inline_response_200_19_7_1_0->ziti_controller_binary_sha_256);
    free(inline_response_200_19_7_1_0->ziti_ios_edge);
    free(inline_response_200_19_7_1_0->ziti_cli_linux_binary);
    free(inline_response_200_19_7_1_0->ziti_version);
    free(inline_response_200_19_7_1_0->ziti_router_linux_binary);
    free(inline_response_200_19_7_1_0->ziti_tunnel_linux_binary_sha_256);
    free(inline_response_200_19_7_1_0->ziti_android_edge);
    free(inline_response_200_19_7_1_0->ziti_tunnel_linux_binary_md5);
    free(inline_response_200_19_7_1_0->ziti_cli_linux_binary_sha_256);
    free(inline_response_200_19_7_1_0);
}

cJSON *inline_response_200_19_7_1_0_convertToJSON(inline_response_200_19_7_1_0_t *inline_response_200_19_7_1_0) {
    cJSON *item = cJSON_CreateObject();

    // inline_response_200_19_7_1_0->ziti_cli_linux_binary_sha_1
    if (!inline_response_200_19_7_1_0->ziti_cli_linux_binary_sha_1) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "zitiCliLinuxBinary.sha-1", inline_response_200_19_7_1_0->ziti_cli_linux_binary_sha_1) == NULL) {
    goto fail; //String
    }


    // inline_response_200_19_7_1_0->ziti_tunnel_linux_binary
    if (!inline_response_200_19_7_1_0->ziti_tunnel_linux_binary) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "zitiTunnelLinuxBinary", inline_response_200_19_7_1_0->ziti_tunnel_linux_binary) == NULL) {
    goto fail; //String
    }


    // inline_response_200_19_7_1_0->ziti_tunnel_linux_binary_sha_1
    if (!inline_response_200_19_7_1_0->ziti_tunnel_linux_binary_sha_1) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "zitiTunnelLinuxBinary.sha-1", inline_response_200_19_7_1_0->ziti_tunnel_linux_binary_sha_1) == NULL) {
    goto fail; //String
    }


    // inline_response_200_19_7_1_0->ziti_controller_binary
    if (!inline_response_200_19_7_1_0->ziti_controller_binary) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "zitiControllerBinary", inline_response_200_19_7_1_0->ziti_controller_binary) == NULL) {
    goto fail; //String
    }


    // inline_response_200_19_7_1_0->ziti_cli_linux_binary_md5
    if (!inline_response_200_19_7_1_0->ziti_cli_linux_binary_md5) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "zitiCliLinuxBinary.md5", inline_response_200_19_7_1_0->ziti_cli_linux_binary_md5) == NULL) {
    goto fail; //String
    }


    // inline_response_200_19_7_1_0->ziti_router_linux_binary_sha_1
    if (!inline_response_200_19_7_1_0->ziti_router_linux_binary_sha_1) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "zitiRouterLinuxBinary.sha-1", inline_response_200_19_7_1_0->ziti_router_linux_binary_sha_1) == NULL) {
    goto fail; //String
    }


    // inline_response_200_19_7_1_0->ziti_router_linux_binary_sha_256
    if (!inline_response_200_19_7_1_0->ziti_router_linux_binary_sha_256) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "zitiRouterLinuxBinary.sha-256", inline_response_200_19_7_1_0->ziti_router_linux_binary_sha_256) == NULL) {
    goto fail; //String
    }


    // inline_response_200_19_7_1_0->ziti_router_linux_binary_md5
    if (!inline_response_200_19_7_1_0->ziti_router_linux_binary_md5) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "zitiRouterLinuxBinary.md5", inline_response_200_19_7_1_0->ziti_router_linux_binary_md5) == NULL) {
    goto fail; //String
    }


    // inline_response_200_19_7_1_0->ziti_windows_desktop_edge
    if (!inline_response_200_19_7_1_0->ziti_windows_desktop_edge) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "zitiWindowsDesktopEdge", inline_response_200_19_7_1_0->ziti_windows_desktop_edge) == NULL) {
    goto fail; //String
    }


    // inline_response_200_19_7_1_0->ziti_mac_desktop_edge
    if (!inline_response_200_19_7_1_0->ziti_mac_desktop_edge) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "zitiMacDesktopEdge", inline_response_200_19_7_1_0->ziti_mac_desktop_edge) == NULL) {
    goto fail; //String
    }


    // inline_response_200_19_7_1_0->ziti_controller_binary_sha_1
    if (!inline_response_200_19_7_1_0->ziti_controller_binary_sha_1) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "zitiControllerBinary.sha-1", inline_response_200_19_7_1_0->ziti_controller_binary_sha_1) == NULL) {
    goto fail; //String
    }


    // inline_response_200_19_7_1_0->ziti_controller_binary_md5
    if (!inline_response_200_19_7_1_0->ziti_controller_binary_md5) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "zitiControllerBinary.md5", inline_response_200_19_7_1_0->ziti_controller_binary_md5) == NULL) {
    goto fail; //String
    }


    // inline_response_200_19_7_1_0->ziti_controller_binary_sha_256
    if (!inline_response_200_19_7_1_0->ziti_controller_binary_sha_256) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "zitiControllerBinary.sha-256", inline_response_200_19_7_1_0->ziti_controller_binary_sha_256) == NULL) {
    goto fail; //String
    }


    // inline_response_200_19_7_1_0->ziti_ios_edge
    if (!inline_response_200_19_7_1_0->ziti_ios_edge) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "zitiIosEdge", inline_response_200_19_7_1_0->ziti_ios_edge) == NULL) {
    goto fail; //String
    }


    // inline_response_200_19_7_1_0->ziti_cli_linux_binary
    if (!inline_response_200_19_7_1_0->ziti_cli_linux_binary) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "zitiCliLinuxBinary", inline_response_200_19_7_1_0->ziti_cli_linux_binary) == NULL) {
    goto fail; //String
    }


    // inline_response_200_19_7_1_0->ziti_version
    if (!inline_response_200_19_7_1_0->ziti_version) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "zitiVersion", inline_response_200_19_7_1_0->ziti_version) == NULL) {
    goto fail; //String
    }


    // inline_response_200_19_7_1_0->ziti_router_linux_binary
    if (!inline_response_200_19_7_1_0->ziti_router_linux_binary) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "zitiRouterLinuxBinary", inline_response_200_19_7_1_0->ziti_router_linux_binary) == NULL) {
    goto fail; //String
    }


    // inline_response_200_19_7_1_0->ziti_tunnel_linux_binary_sha_256
    if (!inline_response_200_19_7_1_0->ziti_tunnel_linux_binary_sha_256) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "zitiTunnelLinuxBinary.sha-256", inline_response_200_19_7_1_0->ziti_tunnel_linux_binary_sha_256) == NULL) {
    goto fail; //String
    }


    // inline_response_200_19_7_1_0->ziti_android_edge
    if (!inline_response_200_19_7_1_0->ziti_android_edge) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "zitiAndroidEdge", inline_response_200_19_7_1_0->ziti_android_edge) == NULL) {
    goto fail; //String
    }


    // inline_response_200_19_7_1_0->ziti_tunnel_linux_binary_md5
    if (!inline_response_200_19_7_1_0->ziti_tunnel_linux_binary_md5) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "zitiTunnelLinuxBinary.md5", inline_response_200_19_7_1_0->ziti_tunnel_linux_binary_md5) == NULL) {
    goto fail; //String
    }


    // inline_response_200_19_7_1_0->ziti_cli_linux_binary_sha_256
    if (!inline_response_200_19_7_1_0->ziti_cli_linux_binary_sha_256) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "zitiCliLinuxBinary.sha-256", inline_response_200_19_7_1_0->ziti_cli_linux_binary_sha_256) == NULL) {
    goto fail; //String
    }


    // inline_response_200_19_7_1_0->active
    if (!inline_response_200_19_7_1_0->active) {
        goto fail;
    }
    
    if(cJSON_AddBoolToObject(item, "active", inline_response_200_19_7_1_0->active) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

inline_response_200_19_7_1_0_t *inline_response_200_19_7_1_0_parseFromJSON(cJSON *inline_response_200_19_7_1_0JSON){

    inline_response_200_19_7_1_0_t *inline_response_200_19_7_1_0_local_var = NULL;

    // inline_response_200_19_7_1_0->ziti_cli_linux_binary_sha_1
    cJSON *ziti_cli_linux_binary_sha_1 = cJSON_GetObjectItemCaseSensitive(inline_response_200_19_7_1_0JSON, "zitiCliLinuxBinary.sha-1");
    if (!ziti_cli_linux_binary_sha_1) {
        goto end;
    }

    
    if(!cJSON_IsString(ziti_cli_linux_binary_sha_1))
    {
    goto end; //String
    }

    // inline_response_200_19_7_1_0->ziti_tunnel_linux_binary
    cJSON *ziti_tunnel_linux_binary = cJSON_GetObjectItemCaseSensitive(inline_response_200_19_7_1_0JSON, "zitiTunnelLinuxBinary");
    if (!ziti_tunnel_linux_binary) {
        goto end;
    }

    
    if(!cJSON_IsString(ziti_tunnel_linux_binary))
    {
    goto end; //String
    }

    // inline_response_200_19_7_1_0->ziti_tunnel_linux_binary_sha_1
    cJSON *ziti_tunnel_linux_binary_sha_1 = cJSON_GetObjectItemCaseSensitive(inline_response_200_19_7_1_0JSON, "zitiTunnelLinuxBinary.sha-1");
    if (!ziti_tunnel_linux_binary_sha_1) {
        goto end;
    }

    
    if(!cJSON_IsString(ziti_tunnel_linux_binary_sha_1))
    {
    goto end; //String
    }

    // inline_response_200_19_7_1_0->ziti_controller_binary
    cJSON *ziti_controller_binary = cJSON_GetObjectItemCaseSensitive(inline_response_200_19_7_1_0JSON, "zitiControllerBinary");
    if (!ziti_controller_binary) {
        goto end;
    }

    
    if(!cJSON_IsString(ziti_controller_binary))
    {
    goto end; //String
    }

    // inline_response_200_19_7_1_0->ziti_cli_linux_binary_md5
    cJSON *ziti_cli_linux_binary_md5 = cJSON_GetObjectItemCaseSensitive(inline_response_200_19_7_1_0JSON, "zitiCliLinuxBinary.md5");
    if (!ziti_cli_linux_binary_md5) {
        goto end;
    }

    
    if(!cJSON_IsString(ziti_cli_linux_binary_md5))
    {
    goto end; //String
    }

    // inline_response_200_19_7_1_0->ziti_router_linux_binary_sha_1
    cJSON *ziti_router_linux_binary_sha_1 = cJSON_GetObjectItemCaseSensitive(inline_response_200_19_7_1_0JSON, "zitiRouterLinuxBinary.sha-1");
    if (!ziti_router_linux_binary_sha_1) {
        goto end;
    }

    
    if(!cJSON_IsString(ziti_router_linux_binary_sha_1))
    {
    goto end; //String
    }

    // inline_response_200_19_7_1_0->ziti_router_linux_binary_sha_256
    cJSON *ziti_router_linux_binary_sha_256 = cJSON_GetObjectItemCaseSensitive(inline_response_200_19_7_1_0JSON, "zitiRouterLinuxBinary.sha-256");
    if (!ziti_router_linux_binary_sha_256) {
        goto end;
    }

    
    if(!cJSON_IsString(ziti_router_linux_binary_sha_256))
    {
    goto end; //String
    }

    // inline_response_200_19_7_1_0->ziti_router_linux_binary_md5
    cJSON *ziti_router_linux_binary_md5 = cJSON_GetObjectItemCaseSensitive(inline_response_200_19_7_1_0JSON, "zitiRouterLinuxBinary.md5");
    if (!ziti_router_linux_binary_md5) {
        goto end;
    }

    
    if(!cJSON_IsString(ziti_router_linux_binary_md5))
    {
    goto end; //String
    }

    // inline_response_200_19_7_1_0->ziti_windows_desktop_edge
    cJSON *ziti_windows_desktop_edge = cJSON_GetObjectItemCaseSensitive(inline_response_200_19_7_1_0JSON, "zitiWindowsDesktopEdge");
    if (!ziti_windows_desktop_edge) {
        goto end;
    }

    
    if(!cJSON_IsString(ziti_windows_desktop_edge))
    {
    goto end; //String
    }

    // inline_response_200_19_7_1_0->ziti_mac_desktop_edge
    cJSON *ziti_mac_desktop_edge = cJSON_GetObjectItemCaseSensitive(inline_response_200_19_7_1_0JSON, "zitiMacDesktopEdge");
    if (!ziti_mac_desktop_edge) {
        goto end;
    }

    
    if(!cJSON_IsString(ziti_mac_desktop_edge))
    {
    goto end; //String
    }

    // inline_response_200_19_7_1_0->ziti_controller_binary_sha_1
    cJSON *ziti_controller_binary_sha_1 = cJSON_GetObjectItemCaseSensitive(inline_response_200_19_7_1_0JSON, "zitiControllerBinary.sha-1");
    if (!ziti_controller_binary_sha_1) {
        goto end;
    }

    
    if(!cJSON_IsString(ziti_controller_binary_sha_1))
    {
    goto end; //String
    }

    // inline_response_200_19_7_1_0->ziti_controller_binary_md5
    cJSON *ziti_controller_binary_md5 = cJSON_GetObjectItemCaseSensitive(inline_response_200_19_7_1_0JSON, "zitiControllerBinary.md5");
    if (!ziti_controller_binary_md5) {
        goto end;
    }

    
    if(!cJSON_IsString(ziti_controller_binary_md5))
    {
    goto end; //String
    }

    // inline_response_200_19_7_1_0->ziti_controller_binary_sha_256
    cJSON *ziti_controller_binary_sha_256 = cJSON_GetObjectItemCaseSensitive(inline_response_200_19_7_1_0JSON, "zitiControllerBinary.sha-256");
    if (!ziti_controller_binary_sha_256) {
        goto end;
    }

    
    if(!cJSON_IsString(ziti_controller_binary_sha_256))
    {
    goto end; //String
    }

    // inline_response_200_19_7_1_0->ziti_ios_edge
    cJSON *ziti_ios_edge = cJSON_GetObjectItemCaseSensitive(inline_response_200_19_7_1_0JSON, "zitiIosEdge");
    if (!ziti_ios_edge) {
        goto end;
    }

    
    if(!cJSON_IsString(ziti_ios_edge))
    {
    goto end; //String
    }

    // inline_response_200_19_7_1_0->ziti_cli_linux_binary
    cJSON *ziti_cli_linux_binary = cJSON_GetObjectItemCaseSensitive(inline_response_200_19_7_1_0JSON, "zitiCliLinuxBinary");
    if (!ziti_cli_linux_binary) {
        goto end;
    }

    
    if(!cJSON_IsString(ziti_cli_linux_binary))
    {
    goto end; //String
    }

    // inline_response_200_19_7_1_0->ziti_version
    cJSON *ziti_version = cJSON_GetObjectItemCaseSensitive(inline_response_200_19_7_1_0JSON, "zitiVersion");
    if (!ziti_version) {
        goto end;
    }

    
    if(!cJSON_IsString(ziti_version))
    {
    goto end; //String
    }

    // inline_response_200_19_7_1_0->ziti_router_linux_binary
    cJSON *ziti_router_linux_binary = cJSON_GetObjectItemCaseSensitive(inline_response_200_19_7_1_0JSON, "zitiRouterLinuxBinary");
    if (!ziti_router_linux_binary) {
        goto end;
    }

    
    if(!cJSON_IsString(ziti_router_linux_binary))
    {
    goto end; //String
    }

    // inline_response_200_19_7_1_0->ziti_tunnel_linux_binary_sha_256
    cJSON *ziti_tunnel_linux_binary_sha_256 = cJSON_GetObjectItemCaseSensitive(inline_response_200_19_7_1_0JSON, "zitiTunnelLinuxBinary.sha-256");
    if (!ziti_tunnel_linux_binary_sha_256) {
        goto end;
    }

    
    if(!cJSON_IsString(ziti_tunnel_linux_binary_sha_256))
    {
    goto end; //String
    }

    // inline_response_200_19_7_1_0->ziti_android_edge
    cJSON *ziti_android_edge = cJSON_GetObjectItemCaseSensitive(inline_response_200_19_7_1_0JSON, "zitiAndroidEdge");
    if (!ziti_android_edge) {
        goto end;
    }

    
    if(!cJSON_IsString(ziti_android_edge))
    {
    goto end; //String
    }

    // inline_response_200_19_7_1_0->ziti_tunnel_linux_binary_md5
    cJSON *ziti_tunnel_linux_binary_md5 = cJSON_GetObjectItemCaseSensitive(inline_response_200_19_7_1_0JSON, "zitiTunnelLinuxBinary.md5");
    if (!ziti_tunnel_linux_binary_md5) {
        goto end;
    }

    
    if(!cJSON_IsString(ziti_tunnel_linux_binary_md5))
    {
    goto end; //String
    }

    // inline_response_200_19_7_1_0->ziti_cli_linux_binary_sha_256
    cJSON *ziti_cli_linux_binary_sha_256 = cJSON_GetObjectItemCaseSensitive(inline_response_200_19_7_1_0JSON, "zitiCliLinuxBinary.sha-256");
    if (!ziti_cli_linux_binary_sha_256) {
        goto end;
    }

    
    if(!cJSON_IsString(ziti_cli_linux_binary_sha_256))
    {
    goto end; //String
    }

    // inline_response_200_19_7_1_0->active
    cJSON *active = cJSON_GetObjectItemCaseSensitive(inline_response_200_19_7_1_0JSON, "active");
    if (!active) {
        goto end;
    }

    
    if(!cJSON_IsBool(active))
    {
    goto end; //Bool
    }


    inline_response_200_19_7_1_0_local_var = inline_response_200_19_7_1_0_create (
        strdup(ziti_cli_linux_binary_sha_1->valuestring),
        strdup(ziti_tunnel_linux_binary->valuestring),
        strdup(ziti_tunnel_linux_binary_sha_1->valuestring),
        strdup(ziti_controller_binary->valuestring),
        strdup(ziti_cli_linux_binary_md5->valuestring),
        strdup(ziti_router_linux_binary_sha_1->valuestring),
        strdup(ziti_router_linux_binary_sha_256->valuestring),
        strdup(ziti_router_linux_binary_md5->valuestring),
        strdup(ziti_windows_desktop_edge->valuestring),
        strdup(ziti_mac_desktop_edge->valuestring),
        strdup(ziti_controller_binary_sha_1->valuestring),
        strdup(ziti_controller_binary_md5->valuestring),
        strdup(ziti_controller_binary_sha_256->valuestring),
        strdup(ziti_ios_edge->valuestring),
        strdup(ziti_cli_linux_binary->valuestring),
        strdup(ziti_version->valuestring),
        strdup(ziti_router_linux_binary->valuestring),
        strdup(ziti_tunnel_linux_binary_sha_256->valuestring),
        strdup(ziti_android_edge->valuestring),
        strdup(ziti_tunnel_linux_binary_md5->valuestring),
        strdup(ziti_cli_linux_binary_sha_256->valuestring),
        active->valueint
        );

    return inline_response_200_19_7_1_0_local_var;
end:
    return NULL;

}
