import java.util.Scanner;
class Array_Sum_avg{
public static void main(String argc[]){
Scanner sc = new Scanner(System.in);

System.out.println("Enter the Size of Array");
int n = sc.nextInt();

int ar[] =new int[n];
System.out.println("Enter Array Elements");
int sum =0;

for(int i=0;i<ar.length;i++)
{
ar[i] = sc.nextInt();
}

for(int a : ar)
{
sum = sum+a;

}
System.out.println("Sum of the array Elements= " + sum);
int avg = sum/n;
System.out.println("Average of the array Elements= " + avg);
}
}