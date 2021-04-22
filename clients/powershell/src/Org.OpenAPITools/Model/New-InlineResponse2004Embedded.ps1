function New-InlineResponse2004Embedded {
    [CmdletBinding()]
    Param (
        [Parameter(Position = 0, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [Org.OpenAPITools.Model.InlineResponse2004EmbeddedEdgeRouterPolicyList[]]
        ${edgeRouterPolicyList}
    )

    Process {
        'Creating object: Org.OpenAPITools.Model.InlineResponse2004Embedded' | Write-Verbose
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        New-Object -TypeName Org.OpenAPITools.Model.InlineResponse2004Embedded -ArgumentList @(
            ${edgeRouterPolicyList}
        )
    }
}
