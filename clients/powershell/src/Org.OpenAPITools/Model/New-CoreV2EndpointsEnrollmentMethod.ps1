function New-CoreV2EndpointsEnrollmentMethod {
    [CmdletBinding()]
    Param (
        [Parameter(Position = 0, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [Boolean]
        ${ott}
    )

    Process {
        'Creating object: Org.OpenAPITools.Model.CoreV2EndpointsEnrollmentMethod' | Write-Verbose
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        New-Object -TypeName Org.OpenAPITools.Model.CoreV2EndpointsEnrollmentMethod -ArgumentList @(
            ${ott}
        )
    }
}
