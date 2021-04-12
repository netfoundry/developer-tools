-module(openapi_inline_response_200_19_7_1_0).

-export([encode/1]).

-export_type([openapi_inline_response_200_19_7_1_0/0]).

-type openapi_inline_response_200_19_7_1_0() ::
    #{ 'zitiCliLinuxBinary_sha_1' := binary(),
       'zitiTunnelLinuxBinary' := binary(),
       'zitiTunnelLinuxBinary_sha_1' := binary(),
       'zitiControllerBinary' := binary(),
       'zitiCliLinuxBinary_md5' := binary(),
       'zitiRouterLinuxBinary_sha_1' := binary(),
       'zitiRouterLinuxBinary_sha_256' := binary(),
       'zitiRouterLinuxBinary_md5' := binary(),
       'zitiWindowsDesktopEdge' := binary(),
       'zitiMacDesktopEdge' := binary(),
       'zitiControllerBinary_sha_1' := binary(),
       'zitiControllerBinary_md5' := binary(),
       'zitiControllerBinary_sha_256' := binary(),
       'zitiIosEdge' := binary(),
       'zitiCliLinuxBinary' := binary(),
       'zitiVersion' := binary(),
       'zitiRouterLinuxBinary' := binary(),
       'zitiTunnelLinuxBinary_sha_256' := binary(),
       'zitiAndroidEdge' := binary(),
       'zitiTunnelLinuxBinary_md5' := binary(),
       'zitiCliLinuxBinary_sha_256' := binary(),
       'active' := boolean()
     }.

encode(#{ 'zitiCliLinuxBinary_sha_1' := ZitiCliLinuxBinarySha1,
          'zitiTunnelLinuxBinary' := ZitiTunnelLinuxBinary,
          'zitiTunnelLinuxBinary_sha_1' := ZitiTunnelLinuxBinarySha1,
          'zitiControllerBinary' := ZitiControllerBinary,
          'zitiCliLinuxBinary_md5' := ZitiCliLinuxBinaryMd5,
          'zitiRouterLinuxBinary_sha_1' := ZitiRouterLinuxBinarySha1,
          'zitiRouterLinuxBinary_sha_256' := ZitiRouterLinuxBinarySha256,
          'zitiRouterLinuxBinary_md5' := ZitiRouterLinuxBinaryMd5,
          'zitiWindowsDesktopEdge' := ZitiWindowsDesktopEdge,
          'zitiMacDesktopEdge' := ZitiMacDesktopEdge,
          'zitiControllerBinary_sha_1' := ZitiControllerBinarySha1,
          'zitiControllerBinary_md5' := ZitiControllerBinaryMd5,
          'zitiControllerBinary_sha_256' := ZitiControllerBinarySha256,
          'zitiIosEdge' := ZitiIosEdge,
          'zitiCliLinuxBinary' := ZitiCliLinuxBinary,
          'zitiVersion' := ZitiVersion,
          'zitiRouterLinuxBinary' := ZitiRouterLinuxBinary,
          'zitiTunnelLinuxBinary_sha_256' := ZitiTunnelLinuxBinarySha256,
          'zitiAndroidEdge' := ZitiAndroidEdge,
          'zitiTunnelLinuxBinary_md5' := ZitiTunnelLinuxBinaryMd5,
          'zitiCliLinuxBinary_sha_256' := ZitiCliLinuxBinarySha256,
          'active' := Active
        }) ->
    #{ 'zitiCliLinuxBinary.sha-1' => ZitiCliLinuxBinarySha1,
       'zitiTunnelLinuxBinary' => ZitiTunnelLinuxBinary,
       'zitiTunnelLinuxBinary.sha-1' => ZitiTunnelLinuxBinarySha1,
       'zitiControllerBinary' => ZitiControllerBinary,
       'zitiCliLinuxBinary.md5' => ZitiCliLinuxBinaryMd5,
       'zitiRouterLinuxBinary.sha-1' => ZitiRouterLinuxBinarySha1,
       'zitiRouterLinuxBinary.sha-256' => ZitiRouterLinuxBinarySha256,
       'zitiRouterLinuxBinary.md5' => ZitiRouterLinuxBinaryMd5,
       'zitiWindowsDesktopEdge' => ZitiWindowsDesktopEdge,
       'zitiMacDesktopEdge' => ZitiMacDesktopEdge,
       'zitiControllerBinary.sha-1' => ZitiControllerBinarySha1,
       'zitiControllerBinary.md5' => ZitiControllerBinaryMd5,
       'zitiControllerBinary.sha-256' => ZitiControllerBinarySha256,
       'zitiIosEdge' => ZitiIosEdge,
       'zitiCliLinuxBinary' => ZitiCliLinuxBinary,
       'zitiVersion' => ZitiVersion,
       'zitiRouterLinuxBinary' => ZitiRouterLinuxBinary,
       'zitiTunnelLinuxBinary.sha-256' => ZitiTunnelLinuxBinarySha256,
       'zitiAndroidEdge' => ZitiAndroidEdge,
       'zitiTunnelLinuxBinary.md5' => ZitiTunnelLinuxBinaryMd5,
       'zitiCliLinuxBinary.sha-256' => ZitiCliLinuxBinarySha256,
       'active' => Active
     }.
