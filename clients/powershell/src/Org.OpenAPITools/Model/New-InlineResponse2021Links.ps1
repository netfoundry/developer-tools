function New-InlineResponse2021Links {
    [CmdletBinding()]
    Param (
        [Parameter(Position = 0, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [Org.OpenAPITools.Model.InlineResponse200LinksNetwork]
        ${network},
        [Parameter(Position = 1, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [Org.OpenAPITools.Model.InlineResponse200LinksNetwork]
        ${process},
        [Parameter(Position = 2, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [Org.OpenAPITools.Model.InlineResponse200LinksSelf]
        ${self}
    )

    Process {
        'Creating object: Org.OpenAPITools.Model.InlineResponse2021Links' | Write-Verbose
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        New-Object -TypeName Org.OpenAPITools.Model.InlineResponse2021Links -ArgumentList @(
            ${network},
            ${process},
            ${self}
        )
    }
}
