import java.util.*;
class Circle{
	
	private double radius;
	private double area;
	
	void init(double radius) {		
		this.radius = radius;		
	}

	
	double calculateArea(double radius) {		
		return (3.14 * radius * radius);
	}

	
	void display() {		
		double res = calculateArea(this.radius);
		System.out.println("Area of circle for given radius is : "+res);
	}
} 

public class Circle_Demo{
	
	public static void main(String[] args) {
		
		Circle obj1 = new Circle();
		
		obj1.init(5.15);
		obj1.display();
	}
}