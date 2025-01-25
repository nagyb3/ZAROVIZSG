/**
 * 
 */
package hu.unideb.inf.crud.entity;

import java.io.Serializable;

import javax.persistence.Column;
import javax.persistence.Entity;
import javax.persistence.FetchType;
import javax.persistence.GeneratedValue;
import javax.persistence.GenerationType;
import javax.persistence.Id;
import javax.persistence.JoinColumn;
import javax.persistence.ManyToOne;
import javax.persistence.Table;

import org.hibernate.annotations.NamedQuery;

/**
 * @author s727953
 *
 */

@Entity //adatbázis objektum
@Table(name = "EMP_INFO")
@NamedQuery(name = "EmployeeDTO.findAll", query = "SELECT a FROM EmployeeEntity a")
public class EmployeeEntity implements Serializable {

	/**
	 * 
	 */
	private static final long serialVersionUID = 1L;
	@Id //elsődleges kulcs
	@GeneratedValue(strategy = GenerationType.AUTO)
	private Long empId;
	@Column(name = "EMP_NAME", nullable = false)
	private String empName;
	@Column(name = "PASSWORD", nullable = false)
	private String password;
	private String address1;
	@Column(name = "EMAIL_ID")
	private String emailId;

	@ManyToOne(fetch = FetchType.LAZY)
	@JoinColumn(name = "DEPT_ID")
	private DepartmentEntity departmentDTO;

	public Long getEmpId() {
		return empId;
	}

	public void setEmpId(Long empId) {
		this.empId = empId;
	}

	public String getEmpName() {
		return empName;
	}

	public void setEmpName(String empName) {
		this.empName = empName;
	}

	public String getPassword() {
		return password;
	}

	public void setPassword(String password) {
		this.password = password;
	}

	public String getAddress1() {
		return address1;
	}

	public void setAddress1(String address1) {
		this.address1 = address1;
	}

	public String getEmailId() {
		return emailId;
	}

	public void setEmailId(String emailId) {
		this.emailId = emailId;
	}

	public DepartmentEntity getDepartmentDTO() {

		return departmentDTO;
	}

	public void setDepartmentDTO(DepartmentEntity departmentDTO) {
		this.departmentDTO = departmentDTO;
	}

}
