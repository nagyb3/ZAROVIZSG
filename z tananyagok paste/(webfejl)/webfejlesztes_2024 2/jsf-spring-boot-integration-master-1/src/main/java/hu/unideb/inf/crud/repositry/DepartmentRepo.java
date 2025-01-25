package hu.unideb.inf.crud.repositry;

import org.springframework.data.jpa.repository.JpaRepository;
import org.springframework.stereotype.Repository;

import hu.unideb.inf.crud.entity.DepartmentDTO;

@Repository
public interface DepartmentRepo extends JpaRepository<DepartmentDTO, Long> {

	DepartmentDTO findTitleByDeptName(String deptName);
}