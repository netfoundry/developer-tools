function New-InlineResponse5001Status {
    [CmdletBinding()]
    Param (
        [Parameter(Position = 0, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [Decimal]
        ${code},
        [Parameter(Position = 1, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String]
        ${label}
    )

    Process {
        'Creating object: Org.OpenAPITools.Model.InlineResponse5001Status' | Write-Verbose
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        New-Object -TypeName Org.OpenAPITools.Model.InlineResponse5001Status -ArgumentList @(
            ${code},
            ${label}
        )
    }
}
