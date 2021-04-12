function New-InlineObject3 {
    [CmdletBinding()]
    Param (
        [Parameter(Position = 0, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [Org.OpenAPITools.Model.CoreV2ServicesServiceIdModel]
        ${model},
        [Parameter(Position = 1, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String]
        ${modelType},
        [Parameter(Position = 2, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String]
        ${name}
    )

    Process {
        'Creating object: Org.OpenAPITools.Model.InlineObject3' | Write-Verbose
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        New-Object -TypeName Org.OpenAPITools.Model.InlineObject3 -ArgumentList @(
            ${model},
            ${modelType},
            ${name}
        )
    }
}
