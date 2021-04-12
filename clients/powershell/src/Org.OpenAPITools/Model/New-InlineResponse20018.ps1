function New-InlineResponse20018 {
    [CmdletBinding()]
    Param (
        [Parameter(Position = 0, ValueFromPipelineByPropertyName = $true)]
        [Org.OpenAPITools.Model.InlineResponse20018Embedded]
        ${Underscoreembedded},
        [Parameter(Position = 1, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [Org.OpenAPITools.Model.InlineResponse2002EmbeddedLinks]
        ${Underscorelinks},
        [Parameter(Position = 2, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [Org.OpenAPITools.Model.InlineResponse2001Page]
        ${page}
    )

    Process {
        'Creating object: Org.OpenAPITools.Model.InlineResponse20018' | Write-Verbose
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        New-Object -TypeName Org.OpenAPITools.Model.InlineResponse20018 -ArgumentList @(
            ${Underscoreembedded},
            ${Underscorelinks},
            ${page}
        )
    }
}
