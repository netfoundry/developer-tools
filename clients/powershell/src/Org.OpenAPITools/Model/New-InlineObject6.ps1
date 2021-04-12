function New-InlineObject6 {
    [CmdletBinding()]
    Param (
        [Parameter(Position = 0, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String]
        ${networkId},
        [Parameter(Position = 1, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String]
        ${name},
        [Parameter(Position = 2, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String[]]
        ${attributes},
        [Parameter(Position = 3, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [Boolean]
        ${linkListener},
        [Parameter(Position = 4, ValueFromPipelineByPropertyName = $true)]
        [String]
        ${dataCenterId}
    )

    Process {
        'Creating object: Org.OpenAPITools.Model.InlineObject6' | Write-Verbose
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        New-Object -TypeName Org.OpenAPITools.Model.InlineObject6 -ArgumentList @(
            ${networkId},
            ${name},
            ${attributes},
            ${linkListener},
            ${dataCenterId}
        )
    }
}
