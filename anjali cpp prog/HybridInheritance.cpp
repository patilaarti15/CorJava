#include<iostream>
using namespace std;
class base
{
	public:
		int a;
		
		void show()
		{
			cout<<"a="<<a;
		}
};
class drv1:virtual public base
{
	public:
		int b;
		void show1()
		{
			
			cout<<"b="<<b;
		}
};
class drv2:virtual public base
{
	public:
		int c;
		void show2()
		{
			
			cout<<"c="<<c;
		}
};
class drv3:public drv1,public drv2
{
	public:
		int d;
		void show2()
		{
			
	   // drv1::show();
	    drv2::show();
		drv1::show1();
		drv2::show2();
	    cout<<"d="<<d;
		}
};
int main()
{
	drv3 obj;
	obj.a=10;
	obj.b=20;
	obj.c=30;
	obj.d=40;
	obj.show2();
	return 0;
}

