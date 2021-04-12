function New-InlineResponse500 {
    [CmdletBinding()]
    Param (
        [Parameter(Position = 0, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String]
        ${error},
        [Parameter(Position = 1, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String]
        ${message},
        [Parameter(Position = 2, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [Decimal]
        ${status},
        [Parameter(Position = 3, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String]
        ${timestamp}
    )

    Process {
        'Creating object: Org.OpenAPITools.Model.InlineResponse500' | Write-Verbose
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        New-Object -TypeName Org.OpenAPITools.Model.InlineResponse500 -ArgumentList @(
            ${error},
            ${message},
            ${status},
            ${timestamp}
        )
    }
}
