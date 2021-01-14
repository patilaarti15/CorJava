/*#include<iostream>
using namespace std;
class demo
{
	int a;
	public:
		 void show()
		{
			
			cout<<"In Constructor"<<a<<endl;
			
		}
		demo()
		{
		cout<<"Enter number";
		cin>>a;	
		}
		demo(int i)
		{
			a=i;
		}
		~demo()
		{
			cout<<"In destructor";
		}
};
int main()
{
	

demo d1;
d1.show();
}
*/
#include<iostream>
using namespace std;
class cal
{
	int a,b;
	public:
		int get()
		{
			cout<<"Enter two number";
			cin>>a>>b;
		}
		int show()
		{
			
			cout<<"addition="<<a+b;
			cout<<"substraction="<<a-b;
			cout<<"multiplication="<<a*b;
			cout<<"division="<<a/b;
		}
};
int main()
{
	cal c1;
	c1.get();
	c1.show();
}
