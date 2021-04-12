function New-InlineResponse2023ModelClientIngress {
    [CmdletBinding()]
    Param (
        [Parameter(Position = 0, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String[]]
        ${addresses},
        [Parameter(Position = 1, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [Org.OpenAPITools.Model.InlineResponse2003EmbeddedModelClientIngressPorts[]]
        ${ports},
        [Parameter(Position = 2, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String[]]
        ${protocols}
    )

    Process {
        'Creating object: Org.OpenAPITools.Model.InlineResponse2023ModelClientIngress' | Write-Verbose
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        New-Object -TypeName Org.OpenAPITools.Model.InlineResponse2023ModelClientIngress -ArgumentList @(
            ${addresses},
            ${ports},
            ${protocols}
        )
    }
}
