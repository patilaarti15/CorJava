  import java.util.*;

public class Number_Table{

	public static void main(String args[]) {

		Scanner sc = new Scanner(System.in);

		System.out.println("Enter the number for printing the table: ");
		int input = sc.nextInt();

		for(int i=1; i<=10; i++) {

			int res = input * i;
			System.out.println(input+" x "+i+" = "+res);		
		}
	

	}

}