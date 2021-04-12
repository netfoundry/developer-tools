function New-InlineResponse20018Embedded {
    [CmdletBinding()]
    Param (
        [Parameter(Position = 0, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [Org.OpenAPITools.Model.InlineResponse20012[]]
        ${edgeRouterList}
    )

    Process {
        'Creating object: Org.OpenAPITools.Model.InlineResponse20018Embedded' | Write-Verbose
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        New-Object -TypeName Org.OpenAPITools.Model.InlineResponse20018Embedded -ArgumentList @(
            ${edgeRouterList}
        )
    }
}
