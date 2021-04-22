function New-CoreV2ServicesModel {
    [CmdletBinding()]
    Param (
        [Parameter(Position = 0, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String[]]
        ${edgeRouterAttributes},
        [Parameter(Position = 1, ValueFromPipelineByPropertyName = $true)]
        [Org.OpenAPITools.Model.InlineResponse2003EmbeddedModelServerEgress]
        ${serverEgress},
        [Parameter(Position = 2, ValueFromPipelineByPropertyName = $true)]
        [String[]]
        ${bindEndpointAttributes},
        [Parameter(Position = 3, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [Org.OpenAPITools.Model.CoreV2ServicesModelClientIngress]
        ${clientIngress},
        [Parameter(Position = 4, ValueFromPipelineByPropertyName = $true)]
        [Org.OpenAPITools.Model.CoreV2ServicesModelEdgeRouterHosts[]]
        ${edgeRouterHosts}
    )

    Process {
        'Creating object: Org.OpenAPITools.Model.CoreV2ServicesModel' | Write-Verbose
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        New-Object -TypeName Org.OpenAPITools.Model.CoreV2ServicesModel -ArgumentList @(
            ${edgeRouterAttributes},
            ${serverEgress},
            ${bindEndpointAttributes},
            ${clientIngress},
            ${edgeRouterHosts}
        )
    }
}
