function New-InlineResponse20014UpdatedAt {
    [CmdletBinding()]
    Param (
        [Parameter(Position = 0, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [Decimal]
        ${epochSecond},
        [Parameter(Position = 1, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [Decimal]
        ${nano}
    )

    Process {
        'Creating object: Org.OpenAPITools.Model.InlineResponse20014UpdatedAt' | Write-Verbose
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        New-Object -TypeName Org.OpenAPITools.Model.InlineResponse20014UpdatedAt -ArgumentList @(
            ${epochSecond},
            ${nano}
        )
    }
}
