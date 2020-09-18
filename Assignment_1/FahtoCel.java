import java.util.Scanner;

public class FahtoCel{

	static public void main(String args[]) {

		Scanner sc = new Scanner(System.in);

		System.out.println("Enter Fahrenheit value : ");
		
		double i = sc.nextDouble();

		double cel = 5 * (i - 32) / 9;

		System.out.println("The value of given input in celcius is : "+cel); 		

	}

}