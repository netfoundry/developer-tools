function New-CoreV2ServicesServiceIdModel {
    [CmdletBinding()]
    Param (
        [Parameter(Position = 0, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String[]]
        ${bindEndpointAttributes},
        [Parameter(Position = 1, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [Org.OpenAPITools.Model.CoreV2ServicesServiceIdModelClientIngress]
        ${clientIngress},
        [Parameter(Position = 2, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String[]]
        ${edgeRouterAttributes},
        [Parameter(Position = 3, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [Org.OpenAPITools.Model.CoreV2ServicesServiceIdModelServerEgress]
        ${serverEgress}
    )

    Process {
        'Creating object: Org.OpenAPITools.Model.CoreV2ServicesServiceIdModel' | Write-Verbose
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        New-Object -TypeName Org.OpenAPITools.Model.CoreV2ServicesServiceIdModel -ArgumentList @(
            ${bindEndpointAttributes},
            ${clientIngress},
            ${edgeRouterAttributes},
            ${serverEgress}
        )
    }
}
