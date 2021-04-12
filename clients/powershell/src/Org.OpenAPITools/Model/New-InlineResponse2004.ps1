function New-InlineResponse2004 {
    [CmdletBinding()]
    Param (
        [Parameter(Position = 0, ValueFromPipelineByPropertyName = $true)]
        [Org.OpenAPITools.Model.InlineResponse2004Embedded]
        ${Underscoreembedded},
        [Parameter(Position = 1, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [Org.OpenAPITools.Model.InlineResponse2002EmbeddedLinks]
        ${Underscorelinks},
        [Parameter(Position = 2, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [Org.OpenAPITools.Model.InlineResponse2001Page]
        ${page}
    )

    Process {
        'Creating object: Org.OpenAPITools.Model.InlineResponse2004' | Write-Verbose
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        New-Object -TypeName Org.OpenAPITools.Model.InlineResponse2004 -ArgumentList @(
            ${Underscoreembedded},
            ${Underscorelinks},
            ${page}
        )
    }
}
