function New-InlineResponse2009 {
    [CmdletBinding()]
    Param (
        [Parameter(Position = 0, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String]
        ${expiresAt},
        [Parameter(Position = 1, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String]
        ${registrationKey}
    )

    Process {
        'Creating object: Org.OpenAPITools.Model.InlineResponse2009' | Write-Verbose
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        New-Object -TypeName Org.OpenAPITools.Model.InlineResponse2009 -ArgumentList @(
            ${expiresAt},
            ${registrationKey}
        )
    }
}
