#!/usr/bin/env zsh
#
# get the well-known CA certs of a Ziti controller as importable PEM and DER files
#
# EXAMPLE
#
# $ ./export-ziti-ca.sh 13.36.15.32         
# SUCCESS: certificates exported in /tmp/export-ziti-ca-13-36-15-32/:
# total 16K
# -rw-rw-r-- 1 kbingham kbingham 1.7K Sep 20 12:47 NetFoundry.der
# -rw-rw-r-- 1 kbingham kbingham 2.3K Sep 20 12:47 NetFoundry.pem
# -rw-rw-r-- 1 kbingham kbingham 1.5K Sep 20 12:47 Ziti-Controller-Intermediate-CA.der
# -rw-rw-r-- 1 kbingham kbingham 2.1K Sep 20 12:47 Ziti-Controller-Intermediate-CA.pem
# Ctrl-c to preserve files, <enter> to clean up
#

set -o pipefail
set -e
set -u

#
## make sure the controller's IPv4 is provided as $1, $ziti_ctrl_ip, or $ZITI_CTRL_IP
#
: ZITI_CTRL_IP="${ziti_ctrl_ip:-}" # adapt to common lowercase var name for compatibility
if [[ -z "${ZITI_CTRL_IP:-}" ]]; then # if null
    if [[ ${#@} -eq 1 ]]; then        # if param
        ZITI_CTRL_IP="$1"
    else
        echo "ERROR: need Ziti controller IPv4 as \$ziti_ctrl_ip or \$1" >&2
        exit 1
    fi
fi
[[ "${ZITI_CTRL_IP}" =~ ([0-9]{1,3}\.?){4} ]] || {
    echo "ERROR: \"${ZITI_CTRL_IP}\" is not an IPv4 address" >&2
    exit 1
}

#
## run-lock with atomic mkdir to avoid race conditions on tmp file operations
#
BASENAME=$(basename $0)
LOCKDIR="/tmp/${BASENAME/.*sh/}-${ZITI_CTRL_IP//./-}/"
[[ -d "${LOCKDIR}" ]] && {            # detect and preserve prior state
    echo "ERROR: tmp dir exists, run 'rm -r \"${LOCKDIR}\"' and retry" >&2
    exit 1
}
mkdir "${LOCKDIR}" || {               # in case a colliding filename exists
    echo "ERROR: failed to create a temporary lock directory in \"${LOCKDIR}\"" >&2
    exit 1
}

cd "${LOCKDIR}"

# download the b64 encoding of the DER-form of the PKCS7 trust store,
#  convert to ASCII as PEM-form,
#  split into separate files with predictable prefix and serial number suffix,
#  one per certificate 
curl -sSfk "https://${ZITI_CTRL_IP}/.well-known/est/cacerts" \
| openssl base64 -d \
| openssl pkcs7 -inform DER -outform PEM -print_certs \
| csplit --quiet --prefix 'cert-' - '/-----BEGIN CERTIFICATE-----/' '{*}'

# de-duplicate certificates by sha256 fingerprint
for DUPLICATE in ./cert-*; do
    grep -Eqe '-----BEGIN CERTIFICATE-----' "${DUPLICATE}" || {
        rm "${DUPLICATE}" # clean detritus created by csplit
        continue
    }
    openssl x509 -inform PEM -outform DER < "${DUPLICATE}" > "${DUPLICATE}.der"
    SHA256SUM=$(openssl sha256 < "${DUPLICATE}.der"|cut -f2 -d' ')
    mv "${DUPLICATE}.der" "sha256-${SHA256SUM}.der"
    rm "${DUPLICATE}"
done

for UNIQUE in ./sha256-*.der; do
    while IFS=',/' read -A SUBJECT_RDNS; do
        for RDN in "${SUBJECT_RDNS[@]}"; do
            #echo "RDN='$RDN'"
            while IFS='= ' read RDN_KEY RDN_VALUE; do
                [[ "${RDN_KEY}" == CN ]] && {
                    RDN_VALUE="${RDN_VALUE// /-}"
                    openssl x509 -inform DER -outform PEM < "${UNIQUE}" > "./${RDN_VALUE}.pem"
                    mv "${UNIQUE}" "./${RDN_VALUE}.der"
                }
            done <<< "${RDN}"
        done
    done < <(openssl x509 -inform DER -noout -subject -in "${UNIQUE}")
done

echo "SUCCESS: certificates exported in ${LOCKDIR}:"
ls -lAh "${LOCKDIR}"
read "?Ctrl-c to preserve files, <enter> to clean up"
rm -r "${LOCKDIR}"