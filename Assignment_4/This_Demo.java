class Student{  
int rollno;  
String name;   
Student(int rollno,String name){  
this.rollno=rollno;  
this.name=name; 
}  
void display(){System.out.println(rollno+" "+name);}  
}  
class This_Demo{  
public static void main(String args[]){  
Student s1=new Student(001,"Aarti");  
Student s2=new Student(002,"Rohan");  
s1.display();  
s2.display();  
}}  