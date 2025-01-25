@echo off
call mvn clean package
call docker build -t hu.unideb.inf/jsf1 .
call docker rm -f jsf1
call docker run -d -p 9080:9080 -p 9443:9443 --name jsf1 hu.unideb.inf/jsf1