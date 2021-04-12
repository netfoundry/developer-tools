function New-InlineResponse2001LinksSelf {
    [CmdletBinding()]
    Param (
        [Parameter(Position = 0, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String]
        ${href},
        [Parameter(Position = 1, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [Boolean]
        ${templated}
    )

    Process {
        'Creating object: Org.OpenAPITools.Model.InlineResponse2001LinksSelf' | Write-Verbose
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        New-Object -TypeName Org.OpenAPITools.Model.InlineResponse2001LinksSelf -ArgumentList @(
            ${href},
            ${templated}
        )
    }
}
