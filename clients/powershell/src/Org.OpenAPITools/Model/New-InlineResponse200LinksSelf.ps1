function New-InlineResponse200LinksSelf {
    [CmdletBinding()]
    Param (
        [Parameter(Position = 0, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String]
        ${href}
    )

    Process {
        'Creating object: Org.OpenAPITools.Model.InlineResponse200LinksSelf' | Write-Verbose
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        New-Object -TypeName Org.OpenAPITools.Model.InlineResponse200LinksSelf -ArgumentList @(
            ${href}
        )
    }
}
