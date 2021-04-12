function New-InlineObject5 {
    [CmdletBinding()]
    Param (
        [Parameter(Position = 0, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String[]]
        ${attributes},
        [Parameter(Position = 1, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [Org.OpenAPITools.Model.CoreV2EndpointsEnrollmentMethod]
        ${enrollmentMethod},
        [Parameter(Position = 2, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String]
        ${name},
        [Parameter(Position = 3, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String]
        ${networkId}
    )

    Process {
        'Creating object: Org.OpenAPITools.Model.InlineObject5' | Write-Verbose
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        New-Object -TypeName Org.OpenAPITools.Model.InlineObject5 -ArgumentList @(
            ${attributes},
            ${enrollmentMethod},
            ${name},
            ${networkId}
        )
    }
}
