function New-InlineResponse2003EmbeddedModelClientIngress {
    [CmdletBinding()]
    Param (
        [Parameter(Position = 0, ValueFromPipelineByPropertyName = $true)]
        [String[]]
        ${protocols},
        [Parameter(Position = 1, ValueFromPipelineByPropertyName = $true)]
        [String]
        ${host},
        [Parameter(Position = 2, ValueFromPipelineByPropertyName = $true)]
        [Org.OpenAPITools.Model.InlineResponse2003EmbeddedModelClientIngressPorts[]]
        ${ports},
        [Parameter(Position = 3, ValueFromPipelineByPropertyName = $true)]
        [System.Nullable[Decimal]]
        ${port},
        [Parameter(Position = 4, ValueFromPipelineByPropertyName = $true)]
        [String[]]
        ${addresses}
    )

    Process {
        'Creating object: Org.OpenAPITools.Model.InlineResponse2003EmbeddedModelClientIngress' | Write-Verbose
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        New-Object -TypeName Org.OpenAPITools.Model.InlineResponse2003EmbeddedModelClientIngress -ArgumentList @(
            ${protocols},
            ${host},
            ${ports},
            ${port},
            ${addresses}
        )
    }
}
