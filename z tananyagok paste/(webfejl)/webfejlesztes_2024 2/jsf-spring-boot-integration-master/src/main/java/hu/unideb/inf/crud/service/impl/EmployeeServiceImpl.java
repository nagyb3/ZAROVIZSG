/**
 * 
 */
/**
 * @author s727953
 *
 */
package hu.unideb.inf.crud.service.impl;

import java.util.ArrayList;
import java.util.List;

import hu.unideb.inf.crud.repositry.EmployeeRepo;
import org.springframework.beans.BeanUtils;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;
import org.springframework.transaction.annotation.Transactional;

import hu.unideb.inf.crud.entity.DepartmentEntity;
import hu.unideb.inf.crud.entity.EmployeeEntity;
import hu.unideb.inf.crud.service.EmployeeService;
import hu.unideb.inf.crud.uito.DepartmentUITO;
import hu.unideb.inf.crud.uito.EmployeeUITO;

@Service
@Transactional
public class EmployeeServiceImpl implements EmployeeService {
	@Autowired
    EmployeeRepo employeeRepo;

	@Override
	@Transactional(readOnly = false)
	public EmployeeUITO doSaveEmp(EmployeeUITO employeeUiTO) {
		EmployeeEntity dto = UiToToDto(employeeUiTO);
		dto = employeeRepo.save(dto);
		BeanUtils.copyProperties(dto, employeeUiTO);

		dtoToUito(employeeUiTO, dto);
		return employeeUiTO;
	}

	private void dtoToUito(EmployeeUITO employeeUiTO, EmployeeEntity dto) {
		DepartmentUITO uitTO = new DepartmentUITO();
		BeanUtils.copyProperties(dto.getDepartmentDTO(), uitTO);
		employeeUiTO.setDepartmentUITO(uitTO);
	}

	private EmployeeEntity UiToToDto(EmployeeUITO employeeUiTO) {
		EmployeeEntity dto = new EmployeeEntity();
		DepartmentEntity deptDto = new DepartmentEntity();
		BeanUtils.copyProperties(employeeUiTO, dto);
		BeanUtils.copyProperties(employeeUiTO.getDepartmentUITO(), deptDto);
		dto.setDepartmentDTO(deptDto);
		List<EmployeeEntity> lst = new ArrayList<>();
		lst.add(dto);
		deptDto.getEmployeedtolst().addAll(lst);
		return dto;
	}

	@Override
	public List<EmployeeUITO> doFetchAllEmp() {
		List<EmployeeEntity> dtoLst = employeeRepo.findAll();
		List<EmployeeUITO> uiTOLst = new ArrayList<>();
		dtoLst.forEach(dto -> {
			EmployeeUITO tmpUiTO = new EmployeeUITO();
			System.out.println(dto.getDepartmentDTO());
			BeanUtils.copyProperties(dto, tmpUiTO);

			dtoToUito(tmpUiTO, dto);
			uiTOLst.add(tmpUiTO);
		});
		return uiTOLst;
	}

	@Override
	public EmployeeUITO doGetEmp(EmployeeUITO employeeUiTO) {
		if (null != employeeUiTO.getEmailId()) {
			EmployeeEntity dto = new EmployeeEntity();

			BeanUtils.copyProperties(employeeUiTO, dto);
			dto = employeeRepo.getOne(dto.getEmpId());

			BeanUtils.copyProperties(dto, employeeUiTO);
		}
		return employeeUiTO;
	}

	@Override
	@Transactional
	public void doDeleteEmp(EmployeeUITO employeeUiTO) {

		employeeRepo.deleteById(employeeUiTO.getEmpId());
	}

}