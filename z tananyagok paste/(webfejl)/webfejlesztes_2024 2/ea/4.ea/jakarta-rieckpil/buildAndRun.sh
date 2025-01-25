#!/bin/sh
if [ $(docker ps -a -f name=jakarta-rieckpil | grep -w jakarta-rieckpil | wc -l) -eq 1 ]; then
  docker rm -f jakarta-rieckpil
fi
mvn clean package && docker build -t hu.unideb.inf/jakarta-rieckpil .
docker run -d -p 9080:9080 -p 9443:9443 --name jakarta-rieckpil hu.unideb.inf/jakarta-rieckpil
