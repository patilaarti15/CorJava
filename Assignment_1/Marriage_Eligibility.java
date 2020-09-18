import java.util.*;

public class Marriage_Eligibility{

	static public void main(String args[]) {

		Scanner sc = new Scanner(System.in);

		System.out.println("Enter the gender like m for male and f for female.");
		char gender = sc.next().charAt(0);

		System.out.println("Enter the age of person.");
		int age = sc.nextInt();

		if (gender == 'm' && age > 0) 
                {

			if (age >= 21) {

				       System.out.println("This male is eligible for marraige.");
			
			                }

			else { System.out.println("This male is not eligible for marraige.");  }

				

		}

		else if 
                (gender == 'f' && age > 0) 
                 {

			if (age >= 18) {

				       System.out.println("This female is eligible for marraige.");
			
			                }
			else{System.out.println("This female is not eligible for marraige.");}
		
		} 

               
               else { System.out.println("Please provide the valid inputs.");   } 

			

		
}

}