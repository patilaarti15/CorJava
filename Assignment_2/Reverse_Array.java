import java.util.Scanner;

class Reverse_Array{
public static void main(String args[]){

int arr[]=new int[]{1,2,3,4,5};

System.out.println("Original Array Elements");
for(int i=0; i<arr.length;i++)
{System.out.println(arr[i]+"");}


System.out.println("Array in reverse order: ");  
for(int i=arr.length-1; i>=0;i--)
{System.out.print(arr[i] + " ");}


}
}