class PriData{

public static void main (String args[])
{
//Experssion A//
int x1=2;
int y1=x1*x1+3*x1-7;
System.out.println("y1= " +y1);

//Expression B//

int x2=2;
int y2=x2++ + ++x2;
System.out.println("x2= " +x2);
System.out.println("y2= " +y2);

//Expression C//
int x3=2;
int y3=3;
int z3=x3++ - --y3 - --x3 + x3++;
System.out.println("x3= " +x3);
System.out.println("y3= " +y3);
System.out.println("z3= " +z3);

 //Expression D//
 boolean x4 = true;
 boolean y4 = false;
 boolean z4 = x4 && y4 || !(x4 || y4); 

 System.out.println("x4= "+x4);	
 System.out.println("y4= "+y4);
 System.out.println("z4= "+z4); 

}
}
