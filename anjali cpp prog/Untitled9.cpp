#include<iostream>
using namespace std;
class Demo
{
	int a;
	public:
		void get(int i);
		void show();
		
};
void Demo::show()
{
	cout<<a;
}
void Demo::get(int i)
{
	a=i;
}
int main()
{
	Demo d1;
	int i;
	cout<<"Enter a no:";
	cin>>i;
	d1.get(i);
	d1.show();
	return 0;
}
