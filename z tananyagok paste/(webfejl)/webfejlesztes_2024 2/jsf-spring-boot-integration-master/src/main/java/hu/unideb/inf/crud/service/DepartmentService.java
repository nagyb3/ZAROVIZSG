
package hu.unideb.inf.crud.service;

import java.util.List;

import hu.unideb.inf.crud.uito.DepartmentUITO;

public interface DepartmentService {

	List<DepartmentUITO> getAllDepartment(); 

	DepartmentUITO getDepartment(DepartmentUITO departmentUITO);

	void saveDept(DepartmentUITO departmentUITO);

}