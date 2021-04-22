function New-CoreV2ServicesModelClientIngress {
    [CmdletBinding()]
    Param (
        [Parameter(Position = 0, ValueFromPipelineByPropertyName = $true)]
        [String[]]
        ${protocols},
        [Parameter(Position = 1, ValueFromPipelineByPropertyName = $true)]
        [String]
        ${host},
        [Parameter(Position = 2, ValueFromPipelineByPropertyName = $true)]
        [Org.OpenAPITools.Model.CoreV2ServicesModelClientIngressPorts[]]
        ${ports},
        [Parameter(Position = 3, ValueFromPipelineByPropertyName = $true)]
        [Org.OpenAPITools.Model.AnyType]
        ${port},
        [Parameter(Position = 4, ValueFromPipelineByPropertyName = $true)]
        [String[]]
        ${addresses}
    )

    Process {
        'Creating object: Org.OpenAPITools.Model.CoreV2ServicesModelClientIngress' | Write-Verbose
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        New-Object -TypeName Org.OpenAPITools.Model.CoreV2ServicesModelClientIngress -ArgumentList @(
            ${protocols},
            ${host},
            ${ports},
            ${port},
            ${addresses}
        )
    }
}
