
package hu.unideb.inf.crud.service;

import java.util.List;

import hu.unideb.inf.crud.uito.EmployeeUITO;

public interface EmployeeService {
	EmployeeUITO doSaveEmp(EmployeeUITO employeeUiTO);

	List<EmployeeUITO> doFetchAllEmp();

	EmployeeUITO doGetEmp(EmployeeUITO employeeUiTO);

	void doDeleteEmp(EmployeeUITO employeeUiTO);
}