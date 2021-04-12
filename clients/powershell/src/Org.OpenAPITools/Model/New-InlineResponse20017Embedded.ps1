function New-InlineResponse20017Embedded {
    [CmdletBinding()]
    Param (
        [Parameter(Position = 0, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [Org.OpenAPITools.Model.InlineResponse20017EmbeddedOrganizations[]]
        ${organizations}
    )

    Process {
        'Creating object: Org.OpenAPITools.Model.InlineResponse20017Embedded' | Write-Verbose
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        New-Object -TypeName Org.OpenAPITools.Model.InlineResponse20017Embedded -ArgumentList @(
            ${organizations}
        )
    }
}
