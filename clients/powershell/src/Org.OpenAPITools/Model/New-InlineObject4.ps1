function New-InlineObject4 {
    [CmdletBinding()]
    Param (
        [Parameter(Position = 0, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String[]]
        ${serviceAttributes},
        [Parameter(Position = 1, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String]
        ${networkId},
        [Parameter(Position = 2, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String]
        ${name},
        [Parameter(Position = 3, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [Org.OpenAPITools.Model.AnyType[]]
        ${postureCheckAttributes},
        [Parameter(Position = 4, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String[]]
        ${endpointAttributes}
    )

    Process {
        'Creating object: Org.OpenAPITools.Model.InlineObject4' | Write-Verbose
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        New-Object -TypeName Org.OpenAPITools.Model.InlineObject4 -ArgumentList @(
            ${serviceAttributes},
            ${networkId},
            ${name},
            ${postureCheckAttributes},
            ${endpointAttributes}
        )
    }
}
