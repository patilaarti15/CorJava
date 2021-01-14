#include<iostream>
#include<exception>
using namespace std;
class myException:public exception
{
	public:
		const char *what() const throw()
		{
			return"Attempted to divide by zero!";
		}
};
int main()
{
	try
	{
		int x,y;
		cout<<"enter the two numbers:";
		cin>>x>>y;
		if(y==0)
		{
			myException z;
			throw z;
		}
		else
		{
			cout<<"x/y="<<x/y<<endl;
		}
	}
	catch(exception &e)
	{
		cout<<e.what();
	}
}
