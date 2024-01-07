FROM ubuntu:23.10

RUN apt-get -y update
RUN apt-get -y dist-upgrade
RUN apt-get -y install git build-essential wget emscripten dos2unix

RUN mkdir -p /app/
COPY ./app/ /app

WORKDIR /app/src/
RUN dos2unix config-emcc.sh

CMD ["bash", "config-emcc.sh"]