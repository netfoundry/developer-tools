function New-InlineResponse2004EmbeddedEdgeRouterPolicyList {
    [CmdletBinding()]
    Param (
        [Parameter(Position = 0, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [Org.OpenAPITools.Model.AnyType]
        ${deletedAt},
        [Parameter(Position = 1, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String]
        ${networkId},
        [Parameter(Position = 2, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String]
        ${name},
        [Parameter(Position = 3, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String[]]
        ${edgeRouterAttributes},
        [Parameter(Position = 4, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String]
        ${updatedAt},
        [Parameter(Position = 5, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String]
        ${zitiId},
        [Parameter(Position = 6, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String]
        ${ownerIdentityId},
        [Parameter(Position = 7, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String]
        ${id},
        [Parameter(Position = 8, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String]
        ${createdAt},
        [Parameter(Position = 9, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String]
        ${createdBy},
        [Parameter(Position = 10, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [Org.OpenAPITools.Model.AnyType]
        ${deletedBy},
        [Parameter(Position = 11, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String[]]
        ${endpointAttributes},
        [Parameter(Position = 12, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [Org.OpenAPITools.Model.InlineResponse200Links]
        ${Underscorelinks}
    )

    Process {
        'Creating object: Org.OpenAPITools.Model.InlineResponse2004EmbeddedEdgeRouterPolicyList' | Write-Verbose
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        New-Object -TypeName Org.OpenAPITools.Model.InlineResponse2004EmbeddedEdgeRouterPolicyList -ArgumentList @(
            ${deletedAt},
            ${networkId},
            ${name},
            ${edgeRouterAttributes},
            ${updatedAt},
            ${zitiId},
            ${ownerIdentityId},
            ${id},
            ${createdAt},
            ${createdBy},
            ${deletedBy},
            ${endpointAttributes},
            ${Underscorelinks}
        )
    }
}
