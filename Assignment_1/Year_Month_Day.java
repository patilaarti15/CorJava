import java.util.Scanner;
class Year_Month_Day{
public static void main(String args[]) {

		Scanner sc = new Scanner(System.in);

		System.out.println("Enter the days: ");

		int days = sc.nextInt();

		int y = days / 365;
		System.out.println("The number of years as per the input : "+y);

		days = days % 365;
		int m = days / 30;
		System.out.println("The number of months as per the input : "+m);

		int d = days % 30;
		System.out.println("The number of days as per the input : "+d);		
		
	}



}