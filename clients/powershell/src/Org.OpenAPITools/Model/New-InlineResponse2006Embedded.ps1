function New-InlineResponse2006Embedded {
    [CmdletBinding()]
    Param (
        [Parameter(Position = 0, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [Org.OpenAPITools.Model.InlineResponse200[]]
        ${appWanList}
    )

    Process {
        'Creating object: Org.OpenAPITools.Model.InlineResponse2006Embedded' | Write-Verbose
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        New-Object -TypeName Org.OpenAPITools.Model.InlineResponse2006Embedded -ArgumentList @(
            ${appWanList}
        )
    }
}
