











































































































































































































































































































































































































#include<iostream>
using namespace std;
class base
{
	int a;
	public:
		void get()
		{
			cout<<"Enter a:";
			cin>>a;
		}
		void show()
		{
			cout<<"a="<<a<<endl;
		}
};
class drv:public base
{
	int b;
	public:
		void get()
		{
			cout<<"Enter b";
			cin>>b;
		}
		void show()
		{
			base::show();
			cout<<"b="<<b<<endl;
		}
		
};
int main()
{
	drv d1;
	d1.get();
	d1.show();
	base b1;
	b1.get();
	b1.show();
	return 0;
}