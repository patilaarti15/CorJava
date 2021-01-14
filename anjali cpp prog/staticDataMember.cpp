#include<iostream>
using namespace std;
class demo
{
	static int a;
	int b;
	public:
		static void showA()
		{
			cout<<"enter a";
			cin>>a;
			cout<<"value a"<<a<<endl;
		}
		void showB()
		{
			cout<<"value of b"<<b;
		}
};
int demo::a;
int main()
{
	demo d1;
	demo::showA();
	
	d1.showB();
	return 0;
}
