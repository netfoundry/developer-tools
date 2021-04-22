function New-InlineResponse2003Embedded {
    [CmdletBinding()]
    Param (
        [Parameter(Position = 0, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [Org.OpenAPITools.Model.InlineResponse2003EmbeddedServiceList[]]
        ${serviceList}
    )

    Process {
        'Creating object: Org.OpenAPITools.Model.InlineResponse2003Embedded' | Write-Verbose
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        New-Object -TypeName Org.OpenAPITools.Model.InlineResponse2003Embedded -ArgumentList @(
            ${serviceList}
        )
    }
}
