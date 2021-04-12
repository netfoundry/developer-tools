function New-InlineResponse2002Embedded {
    [CmdletBinding()]
    Param (
        [Parameter(Position = 0, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [Org.OpenAPITools.Model.InlineResponse2002EmbeddedDataCenters[]]
        ${dataCenters}
    )

    Process {
        'Creating object: Org.OpenAPITools.Model.InlineResponse2002Embedded' | Write-Verbose
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        New-Object -TypeName Org.OpenAPITools.Model.InlineResponse2002Embedded -ArgumentList @(
            ${dataCenters}
        )
    }
}
