function New-InlineResponse20016 {
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
        ${email},
        [Parameter(Position = 4, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String]
        ${description},
        [Parameter(Position = 5, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String]
        ${awsCognitoClientId},
        [Parameter(Position = 6, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [Org.OpenAPITools.Model.AnyType]
        ${auth0ClientId},
        [Parameter(Position = 7, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String]
        ${id},
        [Parameter(Position = 8, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String]
        ${contactEmail},
        [Parameter(Position = 9, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [Org.OpenAPITools.Model.InlineResponse20014UpdatedAt]
        ${createdAt},
        [Parameter(Position = 10, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String]
        ${organizationId},
        [Parameter(Position = 11, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String]
        ${tenantId},
        [Parameter(Position = 12, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String]
        ${type},
        [Parameter(Position = 13, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String]
        ${authenticationUrl},
        [Parameter(Position = 14, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [Boolean]
        ${active}
    )

    Process {
        'Creating object: Org.OpenAPITools.Model.InlineResponse20016' | Write-Verbose
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        New-Object -TypeName Org.OpenAPITools.Model.InlineResponse20016 -ArgumentList @(
            ${deletedAt},
            ${name},
            ${updatedAt},
            ${email},
            ${description},
            ${awsCognitoClientId},
            ${auth0ClientId},
            ${id},
            ${contactEmail},
            ${createdAt},
            ${organizationId},
            ${tenantId},
            ${type},
            ${authenticationUrl},
            ${active}
        )
    }
}
