#include<iostream>
using namespace std;
class add
{
	int a,b;
	public:
		void get();
		void show();
};v
void add::get()
{
	cout<<"Enter value a and b";
	cin>>a>>b;
}
void add::show()
{
	cout<<"add="<<a+b;
}
int main()
{
	add a1;
	a1.get();
	a1.show();
	
}
