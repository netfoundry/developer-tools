# Ansible Collection - netfoundry.platform

## Before You Begin

Install [the NetFoundry Python module](/guides/python).

```bash
pip install netfoundry
```

Ensure you have the latest release of the collection.

```bash
# you must first delete the collection and then install to effect an "upgrade"
rm -rf ~/.ansible/collections/ansible_collections/netfoundry/platform && \
  ansible-galaxy collection install --force-with-deps netfoundry.platform
```

## Ansible User Guide

[NetFoundry API Developer Portal](https://developer.netfoundry.io/guides/ansible).


## Built-in Documentation

Explanation of module parameters with practical examples

```bash
# install collection
ansible-galaxy collection install netfoundry.platform
# read about the info module
ansible-doc netfoundry.platform.netfoundry_info
# read about the network module
ansible-doc netfoundry.platform.netfoundry_network
# read about the endpoint module
ansible-doc netfoundry.platform.netfoundry_endpoint
# read about the simple service module
ansible-doc netfoundry.platform.netfoundry_service_simple
# read about the advanced service module
ansible-doc netfoundry.platform.netfoundry_service_advanced
# read about the AppWAN module
ansible-doc netfoundry.platform.netfoundry_appwan
# read about the router module
ansible-doc netfoundry.platform.netfoundry_router
# read about the router rolicy module
ansible-doc netfoundry.platform.netfoundry_router_policy
```

For more examples please see [the playbook included in the collection](https://github.com/netfoundry/developer-tools/blob/master/ansible_collections/netfoundry/platform/playbooks/example_playbook.yml). The default install path for this file is ~/.ansible/collections/ansible_collections/netfoundry/platform/playbooks/example_playbook.yml.
