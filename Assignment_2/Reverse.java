import java.util.*;

public class Reverse{

	public static void main(String args[]) {

		Scanner sc = new Scanner(System.in);

		System.out.println("Enter the number for reversing it : ");
		int input = sc.nextInt();

		long temp, rev = 0, rem;

		temp = input;
		while(input > 0) {

			rem = input % 10;
			rev = rev * 10 + rem;
			input = input / 10;
		}

		System.out.println("The given number is : "+temp);
		System.out.println("The reverse of given number is : "+rev);

	}
}
