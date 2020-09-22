import java.util.Scanner;

class Array_Desc_Order{
public static void main(String[] args) {        
            
        int [] arr = new int [] {55, 21, 87, 72, 111};                 //Initialize array  
        int temp = 0;    
            
           
        System.out.println("Elements of original array: ");     //Displaying elements of original array
        for (int i = 0; i < arr.length; i++) 
        {   System.out.println(arr[i]);    }    
                        
          
        for (int i = 0; i < arr.length; i++) {                 //Sort the array in descending order  
            for (int j = i+1; j < arr.length; j++) {     
               if(arr[i] < arr[j]) {    
                   temp = arr[i];    
                   arr[i] = arr[j];    
                   arr[j] = temp;    
        }     
        }     
        }    
         
   
        System.out.println();    
  
        System.out.println("Array Elements sorted in descending order: ");    //Display elements after sort   
        for (int i = 0; i < arr.length; i++) 
        {  System.out.println(arr[i]);   }  
               
           
}    
}    
