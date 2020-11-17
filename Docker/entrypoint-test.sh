#!/usr/bin/env bash

pip uninstall -y netfoundry
pip install --editable /python-netfoundry

exec "$@"