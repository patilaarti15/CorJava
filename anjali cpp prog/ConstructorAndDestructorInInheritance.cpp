#include<iostream>
using namespace std;
class base
{
	public:
		base()
		{
			cout<<"In Base constructor"<<endl;
		
		}
		~base()
		{
			cout<<"In Base desructor"<<endl;
		}
		
};
class drv:public base
{
	public:
		drv()
		{
			cout<<"In Derived const"<<endl;
		}
		~drv()
		{
			cout<<"In Derived destructor"<<endl;
		}
};
int main()
{
	{
	
	drv obj;

}}

