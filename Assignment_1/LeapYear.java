import java.util.*;

public class LeapYear{
public static void main(String args[]) {

		Scanner sc = new Scanner(System.in);
  boolean leapYear = false;
		System.out.println("Enter year");
		int year = sc.nextInt();

		if(year % 4 == 0) {

                    if(year % 100 == 0) {

			                                     if(year % 400 == 0) { leapYear = true; }

							                                 	}
			
			                                      leapYear = true;}

		
		else { leapYear = false;		}

		if(leapYear == true) { System.out.println("year is leap year.");	}
			
  else {  System.out.println("year is not leap year.");  }
  
			   
}
}
