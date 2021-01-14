#include<iostream>
using namespace std;
class beta;
class alpha
{
	int a;
	public:
		void get()
		{
			cout<<"Enter a value ";
			cin>>a;
		}
		void show()
		{
			cout<<a;
		}
		friend void compare(alpha,beta);
};
class beta
{
	int b;
	public:
		void get()
		{
			cout<<"Enter b value:";
			cin>>b;
		}
		void show()
		{
			cout<<b;
		}
		friend void compare(alpha,beta);
};
void compare(alpha c,beta d)
{
	int alpha_a=c.a;
	int beta_b=d.b;
	if(alpha_a == beta_b)
	{
		cout<<"alpha and beta equal";
	}
	else
	{
		cout<<"alpha and beta are not equal";
	}
}
int main()
{
	alpha c;
	c.get();
	beta d;
	d.get();
	compare(c,d);
	return 0;
}

