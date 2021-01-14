#include<iostream>
using namespace std;
class base
{
	public:
virtual	void show()
	{
		cout<<"InBase class";
		
	}
};
class drv:public base
{
	public:
		void show()
		{
			cout<<"InDerived class";
		}
};
int main()
{
	base *p;
	base b1;
	p=&b1;
	p->show();
	drv d1;
	
	p=&d1;
	p->show();
	return 0;
}
