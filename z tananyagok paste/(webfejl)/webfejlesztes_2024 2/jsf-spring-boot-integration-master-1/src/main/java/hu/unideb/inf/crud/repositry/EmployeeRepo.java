package hu.unideb.inf.crud.repositry;

import org.springframework.data.jpa.repository.JpaRepository;
import org.springframework.stereotype.Repository;

import hu.unideb.inf.crud.entity.EmployeeDTO;

@Repository
public interface EmployeeRepo extends JpaRepository<EmployeeDTO, Long> {
}