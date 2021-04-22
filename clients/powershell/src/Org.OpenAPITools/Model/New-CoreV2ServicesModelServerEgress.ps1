function New-CoreV2ServicesModelServerEgress {
    [CmdletBinding()]
    Param (
        [Parameter(Position = 0, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String]
        ${host},
        [Parameter(Position = 1, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [Org.OpenAPITools.Model.AnyType]
        ${port},
        [Parameter(Position = 2, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String]
        ${protocol}
    )

    Process {
        'Creating object: Org.OpenAPITools.Model.CoreV2ServicesModelServerEgress' | Write-Verbose
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        New-Object -TypeName Org.OpenAPITools.Model.CoreV2ServicesModelServerEgress -ArgumentList @(
            ${host},
            ${port},
            ${protocol}
        )
    }
}
