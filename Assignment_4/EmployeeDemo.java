import java.util.*;

class Employee{
	
	private static int empNo;
	private double salary;
	private static double totalSalary;
	
	Employee(double salary){
		
		this.totalSalary = this.totalSalary + salary;
		this.empNo++;
	}
	
	static void showRecord() {
		
		System.out.println("The details of all employees - no of emp : "+empNo+" total salary : "+totalSalary);
	}
}

public class EmployeeDemo{
	
	public static void main(String[] args) {
		
		Employee obj1 = new Employee(435.658);
		Employee obj2 = new Employee(73429.88);
		Employee obj3 = new Employee(127.68);
		Employee obj4 = new Employee(1820.55);
		
		Employee.showRecord();
	}
}