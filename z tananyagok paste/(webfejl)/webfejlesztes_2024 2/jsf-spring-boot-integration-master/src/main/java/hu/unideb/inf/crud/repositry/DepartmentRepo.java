package hu.unideb.inf.crud.repositry;

import org.springframework.data.jpa.repository.JpaRepository;
import org.springframework.stereotype.Repository;

import hu.unideb.inf.crud.entity.DepartmentEntity;

@Repository
public interface DepartmentRepo extends JpaRepository<DepartmentEntity, Long> {

	//select department from dept_master where dept_name = (deptName)
	DepartmentEntity findByDeptName(String deptName);
}