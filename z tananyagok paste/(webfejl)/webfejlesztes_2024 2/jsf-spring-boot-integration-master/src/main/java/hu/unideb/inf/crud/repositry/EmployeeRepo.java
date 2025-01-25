package hu.unideb.inf.crud.repositry;

import org.springframework.data.jpa.repository.JpaRepository;
import org.springframework.stereotype.Repository;

import hu.unideb.inf.crud.entity.EmployeeEntity;

import java.util.List;

@Repository                                     //<lekérdezések eredményének típusa, kulcs típusa>
public interface EmployeeRepo extends JpaRepository<EmployeeEntity, Long> {
    List<EmployeeEntity> findAllByAddress1Like(String address1);
}