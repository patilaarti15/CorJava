#include<iostream>
using namespace std;
class Base
{
	int x;
	public:
		Base(int i)
		{
			x=i;
			cout<<"i="<<i;
			cout<<"Base parameterized constructor";
			
		}
};
class Derived:public Base
{
	int y;
	public:
		Derived(int j):Base(j)
		{
			y=j;
			cout<<"j="<<j;
			cout<<"Derived parameterized constructor";
		}
		
};
int main()
{
	Derived d(10);
}
