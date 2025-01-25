#!/bin/sh
if [ $(docker ps -a -f name=jsf1 | grep -w jsf1 | wc -l) -eq 1 ]; then
  docker rm -f jsf1
fi
mvn clean package && docker build -t hu.unideb.inf/jsf1 .
docker run -d -p 9080:9080 -p 9443:9443 --name jsf1 hu.unideb.inf/jsf1
