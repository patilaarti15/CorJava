#include<iostream>
using namespace std;
void display();
int main()
{
	cout<<"call 1 display:";
	display();
	cout<<"call 2 display:";
	display();
}
void display()
{
	 static int a=10;
	cout<<a;
	a++;
}
