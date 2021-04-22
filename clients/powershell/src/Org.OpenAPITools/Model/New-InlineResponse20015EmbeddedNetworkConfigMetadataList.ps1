function New-InlineResponse20015EmbeddedNetworkConfigMetadataList {
    [CmdletBinding()]
    Param (
        [Parameter(Position = 0, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [Decimal]
        ${networkControllerVolumeSize},
        [Parameter(Position = 1, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [Decimal]
        ${gatewayVolumeSize},
        [Parameter(Position = 2, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String]
        ${name},
        [Parameter(Position = 3, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String]
        ${gcpTransferNodeSize},
        [Parameter(Position = 4, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String]
        ${awsNetworkControllerSize},
        [Parameter(Position = 5, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [Decimal]
        ${transferNodeVolumeSize},
        [Parameter(Position = 6, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String]
        ${awsGatewaySize},
        [Parameter(Position = 7, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String]
        ${ocpTransferNodeSize},
        [Parameter(Position = 8, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String]
        ${awsTransferNodeSize},
        [Parameter(Position = 9, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String]
        ${id},
        [Parameter(Position = 10, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String]
        ${azureTransferNodeSize},
        [Parameter(Position = 11, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String]
        ${alicloudTransferNodeSize},
        [Parameter(Position = 12, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [Org.OpenAPITools.Model.InlineResponse2002EmbeddedLinks]
        ${Underscorelinks}
    )

    Process {
        'Creating object: Org.OpenAPITools.Model.InlineResponse20015EmbeddedNetworkConfigMetadataList' | Write-Verbose
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        New-Object -TypeName Org.OpenAPITools.Model.InlineResponse20015EmbeddedNetworkConfigMetadataList -ArgumentList @(
            ${networkControllerVolumeSize},
            ${gatewayVolumeSize},
            ${name},
            ${gcpTransferNodeSize},
            ${awsNetworkControllerSize},
            ${transferNodeVolumeSize},
            ${awsGatewaySize},
            ${ocpTransferNodeSize},
            ${awsTransferNodeSize},
            ${id},
            ${azureTransferNodeSize},
            ${alicloudTransferNodeSize},
            ${Underscorelinks}
        )
    }
}
