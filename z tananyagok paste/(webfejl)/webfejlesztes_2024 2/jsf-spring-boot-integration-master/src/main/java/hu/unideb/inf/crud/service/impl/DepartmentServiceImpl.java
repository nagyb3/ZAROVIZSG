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

import hu.unideb.inf.crud.repositry.DepartmentRepo;
import org.springframework.beans.BeanUtils;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;
import org.springframework.transaction.annotation.Transactional;

import hu.unideb.inf.crud.entity.DepartmentEntity;
import hu.unideb.inf.crud.service.DepartmentService;
import hu.unideb.inf.crud.uito.DepartmentUITO;

@Service
@Transactional
public class DepartmentServiceImpl implements DepartmentService {
	@Autowired
	private DepartmentRepo departmentRepo;

	@Override
	public List<DepartmentUITO> getAllDepartment() {
		List<DepartmentUITO> departmentUITOLst = new ArrayList<>(); //felhasználói felületre szánt
		List<DepartmentEntity> departmentDTOLst = departmentRepo.findAll(); //adatbázis objektum

		departmentDTOLst.forEach(dto -> {
			DepartmentUITO tmpUiTO = new DepartmentUITO();

			BeanUtils.copyProperties(dto, tmpUiTO);
			departmentUITOLst.add(tmpUiTO);
		});

		return departmentUITOLst;
	}

	@Override
	public DepartmentUITO getDepartment(DepartmentUITO departmentUITO) {
		System.out.println(">>>>> "+departmentUITO.getDeptName());
		DepartmentEntity dto = departmentRepo.findByDeptName(departmentUITO.getDeptName());
		DepartmentUITO uito = new DepartmentUITO();

		BeanUtils.copyProperties(dto, uito);
		return uito;
	}

	@Override
	public void saveDept(DepartmentUITO departmentUITO) {
		DepartmentEntity entity = new DepartmentEntity();
		entity.setDeptName(departmentUITO.getDeptName());

		departmentRepo.save(entity);
	}
}