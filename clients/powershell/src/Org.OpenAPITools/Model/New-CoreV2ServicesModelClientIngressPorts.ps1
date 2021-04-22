function New-CoreV2ServicesModelClientIngressPorts {
    [CmdletBinding()]
    Param (
        [Parameter(Position = 0, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String]
        ${high},
        [Parameter(Position = 1, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String]
        ${low}
    )

    Process {
        'Creating object: Org.OpenAPITools.Model.CoreV2ServicesModelClientIngressPorts' | Write-Verbose
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        New-Object -TypeName Org.OpenAPITools.Model.CoreV2ServicesModelClientIngressPorts -ArgumentList @(
            ${high},
            ${low}
        )
    }
}
