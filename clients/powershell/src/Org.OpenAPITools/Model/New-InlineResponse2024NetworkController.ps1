function New-InlineResponse2024NetworkController {
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
        [String]
        ${provider},
        [Parameter(Position = 5, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [Org.OpenAPITools.Model.AnyType]
        ${userData},
        [Parameter(Position = 6, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [Org.OpenAPITools.Model.AnyType]
        ${ownerIdentityId},
        [Parameter(Position = 7, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String]
        ${domainName},
        [Parameter(Position = 8, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String]
        ${providerId},
        [Parameter(Position = 9, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String]
        ${id},
        [Parameter(Position = 10, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [Decimal]
        ${port},
        [Parameter(Position = 11, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String]
        ${ipAddress},
        [Parameter(Position = 12, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String]
        ${status},
        [Parameter(Position = 13, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String]
        ${hostId},
        [Parameter(Position = 14, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String]
        ${createdAt},
        [Parameter(Position = 15, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [Org.OpenAPITools.Model.AnyType]
        ${deletedBy},
        [Parameter(Position = 16, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String]
        ${locationMetadataId},
        [Parameter(Position = 17, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String]
        ${dataCenterId}
    )

    Process {
        'Creating object: Org.OpenAPITools.Model.InlineResponse2024NetworkController' | Write-Verbose
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        New-Object -TypeName Org.OpenAPITools.Model.InlineResponse2024NetworkController -ArgumentList @(
            ${deletedAt},
            ${networkId},
            ${name},
            ${updatedAt},
            ${provider},
            ${userData},
            ${ownerIdentityId},
            ${domainName},
            ${providerId},
            ${id},
            ${port},
            ${ipAddress},
            ${status},
            ${hostId},
            ${createdAt},
            ${deletedBy},
            ${locationMetadataId},
            ${dataCenterId}
        )
    }
}
