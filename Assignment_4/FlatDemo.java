import java.util.*;

class OneBHK{
	
	private double roomArea;
	private double hallArea;
	private double price;
	
	OneBHK(){
		
		this(400.25, 700.45, 25000);
	}
	
	OneBHK(double roomArea, double hallArea, double price){
		
		this.roomArea = roomArea;
		this.hallArea = hallArea;
		this.price = price;
	}
	
	void showRecord() {
		
		System.out.println("The area of room in sqft : "+roomArea);
		System.out.println("The area of hall in sqft : "+hallArea);
		System.out.println("The price of 1BHK flat : "+price);
	} 
}

class TwoBHK extends OneBHK{
	
	private double room2Area;
	
	TwoBHK(){
		
		this(800.25, 900.45, 40000, 500.25);
	}
	
	TwoBHK(double roomArea, double hallArea, double price, double room2Area){
		
		super(roomArea, hallArea, price);
		this.room2Area = room2Area;
	}
	
	void showRecord() {
		
		System.out.println("The area of room2 in sqft : "+room2Area);
		super.showRecord();	
	} 
}

class Demo extends TwoBHK{
	
	Demo() {
		
		this(200.326, 500.235, 500000, 300.326);
	}
	
	Demo(double roomArea, double hallArea, double price, double room2Area) {
		
		super(roomArea, hallArea, price, room2Area);
	}
	
	void showRecord() {
	
		super.showRecord();
	}
}

public class FlatDemo{
	
	public static void main(String args[]) {
		
		OneBHK obj1 = new OneBHK();
		System.out.println("-----------------------------");
		System.out.println("The details of 1BHK flat : ");
		obj1.showRecord();
		
		OneBHK obj2 = new OneBHK(400.23, 600.23, 330000);
		System.out.println("-----------------------------");
		System.out.println("The details of 1BHK flat : ");
		obj2.showRecord();
		
		TwoBHK obj3 = new TwoBHK();
		System.out.println("-----------------------------");
		System.out.println("The details of 2BHK flat : ");
		obj3.showRecord();
		
		TwoBHK obj4 = new TwoBHK(600.33, 800.33, 440000, 800.326);
		System.out.println("-----------------------------");
		System.out.println("The details of 2BHK flat : ");
		obj4.showRecord();
	}
}

class DemoMain{
	
	static public void main(String args[]) {
		
		Demo obj5 = new Demo();
		System.out.println("-----------------------------");
		System.out.println("The details of 2BHK flat from Demo class : ");
		obj5.showRecord();
		
		Demo obj6 = new Demo(400.236, 181.235, 100000, 151.235);
		System.out.println("-----------------------------");
		System.out.println("The details of 2BHK flat from Demo class : ");
		obj6.showRecord();
		
		Demo obj7 = new Demo(467.236, 182235, 123000, 152.235);
		System.out.println("-----------------------------");
		System.out.println("The details of 2BHK flat from Demo class : ");
		obj7.showRecord();
		
		Demo obj8 = new Demo(678.236, 183.235, 145000, 153.235);
		System.out.println("-----------------------------");
		System.out.println("The details of 2BHK flat from Demo class : ");
		obj8.showRecord();
	}
}