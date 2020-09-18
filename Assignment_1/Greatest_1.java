import java.util.*;

public class Greatest_1{

	public static void main(String args[]) {

		Scanner sc = new Scanner(System.in);

		System.out.println("Enter the Three Numbers : ");
		double num1 = sc.nextDouble();
		double num2 = sc.nextDouble();
		double num3 = sc.nextDouble();

		if (num1 > num2 && num1 > num3) {

			System.out.println("The greatest Number is : "+num1);

		}
		else if (num2 > num1 && num2 > num3) {

			System.out.println("The greatest Number is : "+num2);

		}
		else {

			System.out.println("The greatest Number is : "+num3);			
		
		}


	}

}