-module(openapi_inline_response_200_15__embedded_network_config_metadata_list).

-export([encode/1]).

-export_type([openapi_inline_response_200_15__embedded_network_config_metadata_list/0]).

-type openapi_inline_response_200_15__embedded_network_config_metadata_list() ::
    #{ 'networkControllerVolumeSize' := integer(),
       'gatewayVolumeSize' := integer(),
       'name' := binary(),
       'gcpTransferNodeSize' := binary(),
       'awsNetworkControllerSize' := binary(),
       'transferNodeVolumeSize' := integer(),
       'awsGatewaySize' := binary(),
       'ocpTransferNodeSize' := binary(),
       'awsTransferNodeSize' := binary(),
       'id' := binary(),
       'azureTransferNodeSize' := binary(),
       'alicloudTransferNodeSize' := binary(),
       '_links' := openapi_inline_response_200_2__embedded__links:openapi_inline_response_200_2__embedded__links()
     }.

encode(#{ 'networkControllerVolumeSize' := NetworkControllerVolumeSize,
          'gatewayVolumeSize' := GatewayVolumeSize,
          'name' := Name,
          'gcpTransferNodeSize' := GcpTransferNodeSize,
          'awsNetworkControllerSize' := AwsNetworkControllerSize,
          'transferNodeVolumeSize' := TransferNodeVolumeSize,
          'awsGatewaySize' := AwsGatewaySize,
          'ocpTransferNodeSize' := OcpTransferNodeSize,
          'awsTransferNodeSize' := AwsTransferNodeSize,
          'id' := Id,
          'azureTransferNodeSize' := AzureTransferNodeSize,
          'alicloudTransferNodeSize' := AlicloudTransferNodeSize,
          '_links' := Links
        }) ->
    #{ 'networkControllerVolumeSize' => NetworkControllerVolumeSize,
       'gatewayVolumeSize' => GatewayVolumeSize,
       'name' => Name,
       'gcpTransferNodeSize' => GcpTransferNodeSize,
       'awsNetworkControllerSize' => AwsNetworkControllerSize,
       'transferNodeVolumeSize' => TransferNodeVolumeSize,
       'awsGatewaySize' => AwsGatewaySize,
       'ocpTransferNodeSize' => OcpTransferNodeSize,
       'awsTransferNodeSize' => AwsTransferNodeSize,
       'id' => Id,
       'azureTransferNodeSize' => AzureTransferNodeSize,
       'alicloudTransferNodeSize' => AlicloudTransferNodeSize,
       '_links' => Links
     }.
