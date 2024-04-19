FROM debian:stretch
LABEL maintainer="Tequichain Developers <dev@tequichain.org>"
LABEL description="Dockerised TequichainCore, built from Travis"

RUN apt-get update && apt-get -y upgrade && apt-get clean && rm -fr /var/cache/apt/*

COPY bin/* /usr/bin/
