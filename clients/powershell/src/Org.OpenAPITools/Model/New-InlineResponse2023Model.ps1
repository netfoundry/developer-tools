function New-InlineResponse2023Model {
    [CmdletBinding()]
    Param (
        [Parameter(Position = 0, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String[]]
        ${bindEndpointAttributes},
        [Parameter(Position = 1, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [Org.OpenAPITools.Model.InlineResponse2023ModelClientIngress]
        ${clientIngress},
        [Parameter(Position = 2, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String[]]
        ${edgeRouterAttributes},
        [Parameter(Position = 3, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [Org.OpenAPITools.Model.CoreV2ServicesServiceIdModelServerEgress]
        ${serverEgress}
    )

    Process {
        'Creating object: Org.OpenAPITools.Model.InlineResponse2023Model' | Write-Verbose
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        New-Object -TypeName Org.OpenAPITools.Model.InlineResponse2023Model -ArgumentList @(
            ${bindEndpointAttributes},
            ${clientIngress},
            ${edgeRouterAttributes},
            ${serverEgress}
        )
    }
}
