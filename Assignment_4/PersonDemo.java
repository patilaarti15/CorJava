import java.util.*;

class Person{
	
	private int age;
	private String Name;
	
	Person(String Name){
		
		this(18, Name);
	}
	
	Person(int age, String Name) {
		
		this.age = age;
		this.Name = Name;
	}
	
	void showRecord() {
		
		System.out.println("Details of person : age : "+age+" Person name : "+Name);
	}
}

public class PersonDemo{
	
	static public void main(String args[]) {
		
		Person obj1 = new Person("Aarti Patil");
		obj1.showRecord();
		
		Person obj2 = new Person(26, "Aarti Patil");
		obj2.showRecord();
	}
}