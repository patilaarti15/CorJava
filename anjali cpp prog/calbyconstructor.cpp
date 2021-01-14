#include<iostream>
using namespace std;
class cal
{
	int a,b;
	public:
		cal(int,int);
	void show();
};
void cal::show()
{
	cout<<"addition is:";
	cout<<a+b<<endl;
	cout<<"substraction is";
	cout<<a-b<<endl;
	cout<<"division is";
	cout<<a/b<<endl;
	cout<<"multiplication is";
	cout<<a*b<<endl;
}
cal::cal(int i,int j)
{
	a=i;
	b=j;
}
int main()
{
	cal c1(10,20);
	
	
	c1.show();
	
	
}
