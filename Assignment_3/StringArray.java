import java.util.*;

public class StringArray{

	public static void main(String args[]) {

		Scanner sc = new Scanner(System.in);

		String[] arrData = new String[] {"Aarti", "Rohan", "Dipak", "Akash", "Sanchita"};
               
                System.out.println("Elements of string type array : ");
                
                for(int i=0; i< arrData.length; i++){
                System.out.println(arrData[i]);
                }

		/* for(String trav : arrData) 
                {
			System.out.print(" "+trav);
		} 
                 */

	}
}