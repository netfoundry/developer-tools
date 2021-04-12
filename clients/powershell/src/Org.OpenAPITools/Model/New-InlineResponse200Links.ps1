function New-InlineResponse200Links {
    [CmdletBinding()]
    Param (
        [Parameter(Position = 0, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [Org.OpenAPITools.Model.InlineResponse200LinksNetwork]
        ${network},
        [Parameter(Position = 1, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [Org.OpenAPITools.Model.InlineResponse200LinksSelf]
        ${self}
    )

    Process {
        'Creating object: Org.OpenAPITools.Model.InlineResponse200Links' | Write-Verbose
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        New-Object -TypeName Org.OpenAPITools.Model.InlineResponse200Links -ArgumentList @(
            ${network},
            ${self}
        )
    }
}
