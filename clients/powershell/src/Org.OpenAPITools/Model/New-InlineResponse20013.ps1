function New-InlineResponse20013 {
    [CmdletBinding()]
    Param (
        [Parameter(Position = 0, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [Org.OpenAPITools.Model.AnyType]
        ${deletedAt},
        [Parameter(Position = 1, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String]
        ${name},
        [Parameter(Position = 2, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String]
        ${updatedAt},
        [Parameter(Position = 3, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String]
        ${size},
        [Parameter(Position = 4, ValueFromPipelineByPropertyName = $true)]
        [String]
        ${locationCode},
        [Parameter(Position = 5, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String]
        ${ownerIdentityId},
        [Parameter(Position = 6, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String]
        ${productVersion},
        [Parameter(Position = 7, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String]
        ${networkGroupId},
        [Parameter(Position = 8, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String]
        ${id},
        [Parameter(Position = 9, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String]
        ${status},
        [Parameter(Position = 10, ValueFromPipelineByPropertyName = $true)]
        [String]
        ${sdsPassword},
        [Parameter(Position = 11, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String]
        ${createdAt},
        [Parameter(Position = 12, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String]
        ${createdBy},
        [Parameter(Position = 13, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [Org.OpenAPITools.Model.AnyType]
        ${deletedBy},
        [Parameter(Position = 14, ValueFromPipelineByPropertyName = $true)]
        [Org.OpenAPITools.Model.AnyType]
        ${networkController},
        [Parameter(Position = 15, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String]
        ${o365BreakoutCategory},
        [Parameter(Position = 16, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [Org.OpenAPITools.Model.InlineResponse2001EmbeddedLinks]
        ${Underscorelinks}
    )

    Process {
        'Creating object: Org.OpenAPITools.Model.InlineResponse20013' | Write-Verbose
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        New-Object -TypeName Org.OpenAPITools.Model.InlineResponse20013 -ArgumentList @(
            ${deletedAt},
            ${name},
            ${updatedAt},
            ${size},
            ${locationCode},
            ${ownerIdentityId},
            ${productVersion},
            ${networkGroupId},
            ${id},
            ${status},
            ${sdsPassword},
            ${createdAt},
            ${createdBy},
            ${deletedBy},
            ${networkController},
            ${o365BreakoutCategory},
            ${Underscorelinks}
        )
    }
}
