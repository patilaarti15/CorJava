import java.util.Scanner;
class SimpleInterest{

public static void main(String args[]){

Scanner sc = new Scanner(System.in);
System.out.println("Enter values of principal,rate,year");

System.out.println("Enter value of principle ");
double p = sc.nextDouble();

System.out.println("Enter value of years");
double n = sc.nextDouble();

System.out.println("Enter value of rate");
double r = sc.nextDouble();

double SI =(p*n*r)/100;
System.out.println("Simple Interest= "+SI);



}

}