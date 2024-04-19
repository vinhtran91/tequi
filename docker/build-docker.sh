#!/usr/bin/env bash

export LC_ALL=C

DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
cd $DIR/.. || exit

DOCKER_IMAGE=${DOCKER_IMAGE:-tequichain/tequichaind-develop}
DOCKER_TAG=${DOCKER_TAG:-latest}

BUILD_DIR=${BUILD_DIR:-.}

rm docker/bin/*
mkdir docker/bin
cp $BUILD_DIR/src/tequichaind docker/bin/
cp $BUILD_DIR/src/tequichain-cli docker/bin/
cp $BUILD_DIR/src/tequichain-tx docker/bin/
strip docker/bin/tequichaind
strip docker/bin/tequichain-cli
strip docker/bin/tequichain-tx

docker build --pull -t $DOCKER_IMAGE:$DOCKER_TAG -f docker/Dockerfile docker
