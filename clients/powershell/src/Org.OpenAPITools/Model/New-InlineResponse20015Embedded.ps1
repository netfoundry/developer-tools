function New-InlineResponse20015Embedded {
    [CmdletBinding()]
    Param (
        [Parameter(Position = 0, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [Org.OpenAPITools.Model.InlineResponse20015EmbeddedNetworkConfigMetadataList[]]
        ${networkConfigMetadataList}
    )

    Process {
        'Creating object: Org.OpenAPITools.Model.InlineResponse20015Embedded' | Write-Verbose
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        New-Object -TypeName Org.OpenAPITools.Model.InlineResponse20015Embedded -ArgumentList @(
            ${networkConfigMetadataList}
        )
    }
}
