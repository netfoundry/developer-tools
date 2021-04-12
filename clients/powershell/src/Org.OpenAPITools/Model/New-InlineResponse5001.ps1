function New-InlineResponse5001 {
    [CmdletBinding()]
    Param (
        [Parameter(Position = 0, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String[]]
        ${errors},
        [Parameter(Position = 1, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [Org.OpenAPITools.Model.InlineResponse5001Status]
        ${status},
        [Parameter(Position = 2, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String]
        ${traceId}
    )

    Process {
        'Creating object: Org.OpenAPITools.Model.InlineResponse5001' | Write-Verbose
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        New-Object -TypeName Org.OpenAPITools.Model.InlineResponse5001 -ArgumentList @(
            ${errors},
            ${status},
            ${traceId}
        )
    }
}
