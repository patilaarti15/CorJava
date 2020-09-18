import java.util.Scanner;

public class Percentage{
public static void main(String args[]){
Scanner sc = new Scanner(System.in);
System.out.println("Enter marks of Five subjects :");

System.out.println("Enter Subject1 marks:");
double sub1 = sc.nextDouble();

System.out.println("Enter Subject2 marks:");
double sub2 = sc.nextDouble();

System.out.println("Enter Subject3 marks:");
double sub3 = sc.nextDouble();


System.out.println("Enter Subject4 marks:");
double sub4 = sc.nextDouble();


System.out.println("Enter Subject5 marks:");
double sub5 = sc.nextDouble();

double sum = (sub1 + sub2 + sub3 + sub4 + sub5);
double percentage = (sum/ (5 * 100)) * 100;

System.out.println("Sum of Five Subjects:"+sum);
System.out.println("percentage marks = "+percentage+"%");

}

}