Steps to run this project:

1. Clone this Git repository
2. Navigate to the folder `jsf-simple-login-with-java-ee-security-api`
3. Build the application with `mvn clean package`
4. Start you Docker deamon
5. Build the Docker image with `docker build -t jsf-simple-login .`
6. Star the Docker container with `docker run -p 8080:8080 jsf-simple-login`
7. Wait until the Payara server launched successfully and visit `http://localhost:8080/jsf-simple-login`
8. Try to authenticate with on of the two users (mail: `admin@mail.com` password: `ADMIN1234` or mail: `user@mail.com`
   password: `USER1234`)