#include<iostream>
using namespace std;
class Base
{
	int a;
	public:
		Base()
		{
			a=10;
		}
		void show()
		{
			cout<<"value a=";
			cout<<a;
		}
};
class drv:public Base
{
	int b;
	public:
		drv()
		{
			b=20;
		}
		void show()
		{
			cout<<"value b="<<b;
		}
};
int main()
{
	drv d1;
	Base b1;
	b1.show();
	d1.show();
	return 0;
}
