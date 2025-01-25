package hu.unideb.inf;

import javax.enterprise.context.RequestScoped;
import javax.faces.context.FacesContext;
import javax.inject.Inject;
import javax.inject.Named;
import javax.security.enterprise.SecurityContext;

@Named
@RequestScoped
public class LogoutBacking {

    @Inject
    private SecurityContext securityContext;

    public boolean isAdmin() {
        System.out.println(securityContext.isCallerInRole("ADMIN"));
        return securityContext.isCallerInRole("ADMIN");
    }

    public String submit() {
        FacesContext.getCurrentInstance().getExternalContext().invalidateSession();
        return "/login.xhtml?faces-redirect=true";
    }
}