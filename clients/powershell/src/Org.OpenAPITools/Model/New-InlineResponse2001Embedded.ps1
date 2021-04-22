function New-InlineResponse2001Embedded {
    [CmdletBinding()]
    Param (
        [Parameter(Position = 0, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [Org.OpenAPITools.Model.InlineResponse2001EmbeddedNetworkList[]]
        ${networkList}
    )

    Process {
        'Creating object: Org.OpenAPITools.Model.InlineResponse2001Embedded' | Write-Verbose
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        New-Object -TypeName Org.OpenAPITools.Model.InlineResponse2001Embedded -ArgumentList @(
            ${networkList}
        )
    }
}
