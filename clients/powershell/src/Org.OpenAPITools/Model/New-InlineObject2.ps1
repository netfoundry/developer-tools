function New-InlineObject2 {
    [CmdletBinding()]
    Param (
        [Parameter(Position = 0, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String[]]
        ${edgeRouterAttributes},
        [Parameter(Position = 1, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String[]]
        ${endpointAttributes},
        [Parameter(Position = 2, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String]
        ${name},
        [Parameter(Position = 3, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String]
        ${networkId}
    )

    Process {
        'Creating object: Org.OpenAPITools.Model.InlineObject2' | Write-Verbose
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        New-Object -TypeName Org.OpenAPITools.Model.InlineObject2 -ArgumentList @(
            ${edgeRouterAttributes},
            ${endpointAttributes},
            ${name},
            ${networkId}
        )
    }
}
