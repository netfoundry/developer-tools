# builds netfoundry/ansible
FROM netfoundry/python:latest
RUN apt-get -y update
RUN apt-get -y install jq
RUN pip install ansible yq
RUN ansible-galaxy collection install --collections-path /usr/share/ansible/collections netfoundry.platform
CMD ["bash"]
