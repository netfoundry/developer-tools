function New-CoreV2ServicesModelEdgeRouterHosts {
    [CmdletBinding()]
    Param (
        [Parameter(Position = 0, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String]
        ${edgeRouterId},
        [Parameter(Position = 1, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [Org.OpenAPITools.Model.CoreV2ServicesModelServerEgress]
        ${serverEgress}
    )

    Process {
        'Creating object: Org.OpenAPITools.Model.CoreV2ServicesModelEdgeRouterHosts' | Write-Verbose
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        New-Object -TypeName Org.OpenAPITools.Model.CoreV2ServicesModelEdgeRouterHosts -ArgumentList @(
            ${edgeRouterId},
            ${serverEgress}
        )
    }
}
