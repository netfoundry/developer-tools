function New-InlineResponse2001EmbeddedLinks {
    [CmdletBinding()]
    Param (
        [Parameter(Position = 0, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [Org.OpenAPITools.Model.InlineResponse200LinksSelf]
        ${services},
        [Parameter(Position = 1, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [Org.OpenAPITools.Model.InlineResponse200LinksNetwork]
        ${networks},
        [Parameter(Position = 2, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [Org.OpenAPITools.Model.InlineResponse200LinksSelf]
        ${appMinuswans},
        [Parameter(Position = 3, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [Org.OpenAPITools.Model.InlineResponse200LinksSelf]
        ${endpoints},
        [Parameter(Position = 4, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [Org.OpenAPITools.Model.InlineResponse200LinksSelf]
        ${certificateMinusauthorities},
        [Parameter(Position = 5, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [Org.OpenAPITools.Model.InlineResponse200LinksSelf]
        ${self},
        [Parameter(Position = 6, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [Org.OpenAPITools.Model.InlineResponse200LinksNetwork]
        ${processMinusexecutions},
        [Parameter(Position = 7, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [Org.OpenAPITools.Model.InlineResponse200LinksSelf]
        ${networkMinuscontrollers},
        [Parameter(Position = 8, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [Org.OpenAPITools.Model.InlineResponse200LinksSelf]
        ${postureMinuschecks},
        [Parameter(Position = 9, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [Org.OpenAPITools.Model.InlineResponse200LinksSelf]
        ${edgeMinusrouters},
        [Parameter(Position = 10, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [Org.OpenAPITools.Model.InlineResponse200LinksSelf]
        ${edgeMinusrouterMinuspolicies}
    )

    Process {
        'Creating object: Org.OpenAPITools.Model.InlineResponse2001EmbeddedLinks' | Write-Verbose
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        New-Object -TypeName Org.OpenAPITools.Model.InlineResponse2001EmbeddedLinks -ArgumentList @(
            ${services},
            ${networks},
            ${appMinuswans},
            ${endpoints},
            ${certificateMinusauthorities},
            ${self},
            ${processMinusexecutions},
            ${networkMinuscontrollers},
            ${postureMinuschecks},
            ${edgeMinusrouters},
            ${edgeMinusrouterMinuspolicies}
        )
    }
}
