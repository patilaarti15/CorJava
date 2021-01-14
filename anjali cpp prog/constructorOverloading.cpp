#include<iostream>
using namespace std;
class Demo
{
	int a;
	public:
		Demo(int);
		Demo();
		void show();
};
Demo::Demo(int i)
{
	a=i;
}
Demo::Demo()
{
	cout<<"Enter an int:";
	cin>>a;
}
void Demo::show()
{
	cout<<a;
}
int main()
{
	Demo d1;
	Demo d2(10);
	d1.show();
	d2.show();
	return 0;
}
