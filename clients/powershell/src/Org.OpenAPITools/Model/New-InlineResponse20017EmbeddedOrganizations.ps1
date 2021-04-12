function New-InlineResponse20017EmbeddedOrganizations {
    [CmdletBinding()]
    Param (
        [Parameter(Position = 0, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String]
        ${organizationShortName},
        [Parameter(Position = 1, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String]
        ${name},
        [Parameter(Position = 2, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String]
        ${updatedAt},
        [Parameter(Position = 3, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [Boolean]
        ${zitiEnabled},
        [Parameter(Position = 4, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [Org.OpenAPITools.Model.AnyType]
        ${defaultAzureVirtualWanId},
        [Parameter(Position = 5, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [Org.OpenAPITools.Model.AnyType]
        ${ownerIdentityId},
        [Parameter(Position = 6, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String]
        ${billingAccountId},
        [Parameter(Position = 7, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String]
        ${id},
        [Parameter(Position = 8, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [Boolean]
        ${awsAutoScalingGatewayEnabled},
        [Parameter(Position = 9, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String]
        ${createdAt},
        [Parameter(Position = 10, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [Boolean]
        ${mfaRequired},
        [Parameter(Position = 11, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [Boolean]
        ${deleted},
        [Parameter(Position = 12, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [Org.OpenAPITools.Model.InlineResponse20011Links]
        ${Underscorelinks}
    )

    Process {
        'Creating object: Org.OpenAPITools.Model.InlineResponse20017EmbeddedOrganizations' | Write-Verbose
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        New-Object -TypeName Org.OpenAPITools.Model.InlineResponse20017EmbeddedOrganizations -ArgumentList @(
            ${organizationShortName},
            ${name},
            ${updatedAt},
            ${zitiEnabled},
            ${defaultAzureVirtualWanId},
            ${ownerIdentityId},
            ${billingAccountId},
            ${id},
            ${awsAutoScalingGatewayEnabled},
            ${createdAt},
            ${mfaRequired},
            ${deleted},
            ${Underscorelinks}
        )
    }
}
