#include<iostream>
using namespace std;
void display();
int main()
{
	display();
	display();
}
void display()
{
	static int a=0;
	cout<<a<<endl;
	a++;
}
