FROM python:3.9-slim-buster

RUN pip install --upgrade pip
RUN pip install --index-url https://test.pypi.org/simple/ --no-deps netfoundry
RUN pip install --upgrade requests pyjwt pysocks
CMD ["python","-m","netfoundry.demo"]
