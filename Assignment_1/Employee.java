import java.util.*;

public class Employee{

	public static void main(String args[]) {

		Scanner sc = new Scanner(System.in);

		boolean flag = false;
		System.out.println("Enter the value of basic salary.");
		int i = sc.nextInt();
		int HRA = 0;
		double DA = 0;		

		if (i == 10000 || i > 10000) {

			HRA = 2000;
			DA = 98/100 * (i);
			flag = true;
		
		}
		else if (i < 10000 && i > 0) {

			HRA = 10/100 * (i);
			DA = 90/100 * (i);
			flag = true;

		}
		else {

			System.out.println("invalid inputs.");	

		}
		
		if (flag == true) {

			double GS = i + HRA + DA;
			System.out.println("The gross salary is : "+GS);

		}
	}

}