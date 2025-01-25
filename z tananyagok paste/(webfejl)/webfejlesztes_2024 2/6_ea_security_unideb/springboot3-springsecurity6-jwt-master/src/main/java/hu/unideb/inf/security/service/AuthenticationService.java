package hu.unideb.inf.security.service;

import hu.unideb.inf.security.dao.request.SignUpRequest;
import hu.unideb.inf.security.dao.request.SigninRequest;
import hu.unideb.inf.security.dao.response.JwtAuthenticationResponse;

public interface AuthenticationService {
    JwtAuthenticationResponse signup(SignUpRequest request);

    JwtAuthenticationResponse signin(SigninRequest request);
}
