import java.util.Scanner;
class Search_Element {
   
 public static void main(String[] args) 
    {
        int num, flag = 0,i=0;
        
        Scanner sc = new Scanner(System.in);
        
        System.out.println("Enter no. of elements you want in array:");
        
        num = sc.nextInt();
        int a[] = new int[num];
        
        System.out.println("Enter all the elements:");
       
        for( i = 0; i < num; i++)
        {
            a[i] = sc.nextInt();
        }

        System.out.print("Enter the element you want to find:");
        int x = sc.nextInt();
        
        for( i = 0; i < num; i++)
        {
            if(a[i] == x)
            {
                flag = 1;
                break;
            }
            else
            {
                flag = 0;
            }
        }
        
        if(flag == 1)
        {
            System.out.println("Element found at position:"+(i + 1));
        }
        else
        {
            System.out.println("Element not found");
        }

}
}