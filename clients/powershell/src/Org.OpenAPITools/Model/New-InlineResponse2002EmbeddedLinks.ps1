function New-InlineResponse2002EmbeddedLinks {
    [CmdletBinding()]
    Param (
        [Parameter(Position = 0, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [Org.OpenAPITools.Model.InlineResponse200LinksSelf]
        ${self}
    )

    Process {
        'Creating object: Org.OpenAPITools.Model.InlineResponse2002EmbeddedLinks' | Write-Verbose
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        New-Object -TypeName Org.OpenAPITools.Model.InlineResponse2002EmbeddedLinks -ArgumentList @(
            ${self}
        )
    }
}
