function New-InlineResponse2003EmbeddedServiceList {
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
        [String]
        ${updatedAt},
        [Parameter(Position = 4, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [Org.OpenAPITools.Model.InlineResponse2003EmbeddedModel]
        ${model},
        [Parameter(Position = 5, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [Org.OpenAPITools.Model.AnyType]
        ${zitiId},
        [Parameter(Position = 6, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String]
        ${ownerIdentityId},
        [Parameter(Position = 7, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String[]]
        ${attributes},
        [Parameter(Position = 8, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String]
        ${modelType},
        [Parameter(Position = 9, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String]
        ${id},
        [Parameter(Position = 10, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [Org.OpenAPITools.Model.InlineResponse2003EmbeddedConfigIdByConfigTypeId]
        ${configIdByConfigTypeId},
        [Parameter(Position = 11, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String]
        ${createdAt},
        [Parameter(Position = 12, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String]
        ${createdBy},
        [Parameter(Position = 13, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [Org.OpenAPITools.Model.AnyType]
        ${deletedBy},
        [Parameter(Position = 14, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [Boolean]
        ${encryptionRequired},
        [Parameter(Position = 15, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [Org.OpenAPITools.Model.AnyType]
        ${authority},
        [Parameter(Position = 16, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [Org.OpenAPITools.Model.InlineResponse200Links]
        ${Underscorelinks}
    )

    Process {
        'Creating object: Org.OpenAPITools.Model.InlineResponse2003EmbeddedServiceList' | Write-Verbose
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        New-Object -TypeName Org.OpenAPITools.Model.InlineResponse2003EmbeddedServiceList -ArgumentList @(
            ${deletedAt},
            ${networkId},
            ${name},
            ${updatedAt},
            ${model},
            ${zitiId},
            ${ownerIdentityId},
            ${attributes},
            ${modelType},
            ${id},
            ${configIdByConfigTypeId},
            ${createdAt},
            ${createdBy},
            ${deletedBy},
            ${encryptionRequired},
            ${authority},
            ${Underscorelinks}
        )
    }
}
