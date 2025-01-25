package hu.unideb.inf.crud.mbean;

import hu.unideb.inf.crud.service.DepartmentService;
import hu.unideb.inf.crud.uito.DepartmentUITO;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Controller;
import org.springframework.web.context.annotation.SessionScope;

import javax.annotation.PostConstruct;
import java.util.List;

//@Controller Spring specifikus, @Named JEE specifikus
@Controller("deptController") //xhtml kódban deptController
@SessionScope //objektum a munkamenet végéig él
public class DepartmentController {

    @Autowired
    DepartmentService deptService;

    List<DepartmentUITO> departments;
    String deptName;

    @PostConstruct //akkor fut le amikor az oldal betöltődik
    public void init() {
        departments = deptService.getAllDepartment();

    }

    public void submit(){
        DepartmentUITO dto = new DepartmentUITO();
        dto.setDeptName(deptName);
        deptService.saveDept(dto);

        departments = deptService.getAllDepartment();
        //init();
    }

    public List<DepartmentUITO> getDepartments() {
        return departments;
    }

    public void setDepartments(List<DepartmentUITO> departments) {
        this.departments = departments;
    }

    public String getDeptName() {
        return deptName;
    }

    public void setDeptName(String deptName) {
        this.deptName = deptName;
    }


}
