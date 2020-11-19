#!/usr/bin/env bash

pip uninstall -y netfoundry && pip install --editable /python-netfoundry
#pip install --index-url https://test.pypi.org/simple/ --no-deps --upgrade netfoundry

exec "$@"