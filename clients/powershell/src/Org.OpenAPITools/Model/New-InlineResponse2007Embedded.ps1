function New-InlineResponse2007Embedded {
    [CmdletBinding()]
    Param (
        [Parameter(Position = 0, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [Org.OpenAPITools.Model.InlineResponse2007EmbeddedEndpointList[]]
        ${endpointList}
    )

    Process {
        'Creating object: Org.OpenAPITools.Model.InlineResponse2007Embedded' | Write-Verbose
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        New-Object -TypeName Org.OpenAPITools.Model.InlineResponse2007Embedded -ArgumentList @(
            ${endpointList}
        )
    }
}
