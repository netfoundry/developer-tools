function New-CoreV2ServicesServiceIdModelClientIngress {
    [CmdletBinding()]
    Param (
        [Parameter(Position = 0, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String[]]
        ${addresses},
        [Parameter(Position = 1, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [Org.OpenAPITools.Model.CoreV2ServicesModelClientIngressPorts[]]
        ${ports},
        [Parameter(Position = 2, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String[]]
        ${protocols}
    )

    Process {
        'Creating object: Org.OpenAPITools.Model.CoreV2ServicesServiceIdModelClientIngress' | Write-Verbose
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        New-Object -TypeName Org.OpenAPITools.Model.CoreV2ServicesServiceIdModelClientIngress -ArgumentList @(
            ${addresses},
            ${ports},
            ${protocols}
        )
    }
}
