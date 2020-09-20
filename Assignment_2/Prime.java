import java.util.*;

public class Prime{

	public static void main(String args[]) {

		Scanner sc = new Scanner(System.in);

		System.out.println("Enter the number : ");
		long input = sc.nextLong();
		boolean flag = false;

		for(int i=2; i<input/2; i++) 
                {
                	if(input%i == 0)  {  flag = true; }
                        
	
		}

		if(flag == true) 
                
                {  System.out.println("Number is not a prime number."); }

		else 
                {  System.out.println("Number is a prime number."); }

			
		
}
}