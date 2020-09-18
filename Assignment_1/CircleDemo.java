import java.util.Scanner;

class CircleDemo{
      public static void main(String args[]) {

             Scanner sc = new Scanner(System.in);

             System.out.println("Enter radius: ");

             double radius = sc.nextDouble();

             double area = (3.14 * radius * radius);
             double circumference = (2 * 3.14 * radius);

             System.out.println("Area of circle is: " +area);
            System.out.println("Circumference of circle is: "+circumference);
    }

}