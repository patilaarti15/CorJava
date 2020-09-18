import java.util.Scanner;

public class Swapping{

	public static void main(String args[]) {

		Scanner sc = new Scanner(System.in);

		System.out.println("Enter Two Numbers : ");
		
                int x = sc.nextInt();
		int y = sc.nextInt();
                
                System.out.println("values Before Swapping : " +x+" "+y );

		x = x + y;
		y = x - y;
		x = x - y;

		System.out.println(" values After swapping : " +x+" "+y);
		
	
	}

}