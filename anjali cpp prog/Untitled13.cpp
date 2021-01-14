#include<iostream>
using namespace std;
class Demo
{
	int a;
	public:
		Demo();
		void show();
};
void Demo::show()
{
	cout<<a;
}
Demo::Demo()
{
	cout<<"Enter a number:";
	cin>>a;
}
int main()
{
	 Demo d1;

	d1.show();
}
