@echo off
call mvn clean package
call docker build -t hu.unideb.inf/jakarta-rieckpil .
call docker rm -f jakarta-rieckpil
call docker run -d -p 9080:9080 -p 9443:9443 --name jakarta-rieckpil hu.unideb.inf/jakarta-rieckpil