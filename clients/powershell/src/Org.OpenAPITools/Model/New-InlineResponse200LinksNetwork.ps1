function New-InlineResponse200LinksNetwork {
    [CmdletBinding()]
    Param (
        [Parameter(Position = 0, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String]
        ${href},
        [Parameter(Position = 1, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String]
        ${profile}
    )

    Process {
        'Creating object: Org.OpenAPITools.Model.InlineResponse200LinksNetwork' | Write-Verbose
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        New-Object -TypeName Org.OpenAPITools.Model.InlineResponse200LinksNetwork -ArgumentList @(
            ${href},
            ${profile}
        )
    }
}
