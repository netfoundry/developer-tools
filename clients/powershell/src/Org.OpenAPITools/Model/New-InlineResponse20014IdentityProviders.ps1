function New-InlineResponse20014IdentityProviders {
    [CmdletBinding()]
    Param (
        [Parameter(Position = 0, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [Org.OpenAPITools.Model.AnyType]
        ${deletedAt},
        [Parameter(Position = 1, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String]
        ${name},
        [Parameter(Position = 2, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [Org.OpenAPITools.Model.AnyType]
        ${updatedAt},
        [Parameter(Position = 3, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String]
        ${auth0ConnectionType},
        [Parameter(Position = 4, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String]
        ${auth0ConnectionId},
        [Parameter(Position = 5, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String]
        ${id},
        [Parameter(Position = 6, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [Org.OpenAPITools.Model.InlineResponse20014UpdatedAt]
        ${createdAt},
        [Parameter(Position = 7, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String]
        ${organizationId},
        [Parameter(Position = 8, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [Boolean]
        ${active}
    )

    Process {
        'Creating object: Org.OpenAPITools.Model.InlineResponse20014IdentityProviders' | Write-Verbose
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        New-Object -TypeName Org.OpenAPITools.Model.InlineResponse20014IdentityProviders -ArgumentList @(
            ${deletedAt},
            ${name},
            ${updatedAt},
            ${auth0ConnectionType},
            ${auth0ConnectionId},
            ${id},
            ${createdAt},
            ${organizationId},
            ${active}
        )
    }
}
