import java.util.Scanner;
public class Array_Sum_Even_odd
{
    public static void main(String[] args) 
    {
        int num, sumEven = 0, sumOdd = 0;
        
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number of elements in array:");
        num = sc.nextInt();

        int[] a = new int[num];
        System.out.println("Enter the elements of the array:");
        for(int i = 0; i < num; i++)
        {
            a[i] = sc.nextInt();
        }

        
        for(int i = 0; i < num; i++)
        {
            if(a[i] % 2 == 0)
            { sumEven = sumEven + a[i]; }
                
            else
            {  sumOdd = sumOdd + a[i];  }
                
            
        }

        System.out.println("Sum of Even Numbers:"+sumEven);
        System.out.println("Sum of Odd Numbers:"+sumOdd);
    }
}