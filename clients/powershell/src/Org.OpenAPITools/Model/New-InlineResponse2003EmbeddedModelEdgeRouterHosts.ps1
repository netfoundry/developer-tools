function New-InlineResponse2003EmbeddedModelEdgeRouterHosts {
    [CmdletBinding()]
    Param (
        [Parameter(Position = 0, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String]
        ${edgeRouterId},
        [Parameter(Position = 1, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [Org.OpenAPITools.Model.InlineResponse2003EmbeddedModelServerEgress1]
        ${serverEgress}
    )

    Process {
        'Creating object: Org.OpenAPITools.Model.InlineResponse2003EmbeddedModelEdgeRouterHosts' | Write-Verbose
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        New-Object -TypeName Org.OpenAPITools.Model.InlineResponse2003EmbeddedModelEdgeRouterHosts -ArgumentList @(
            ${edgeRouterId},
            ${serverEgress}
        )
    }
}
