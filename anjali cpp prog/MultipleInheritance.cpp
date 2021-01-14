#include<iostream>
using namespace std;
class Base1
{
	protected:
		int a;
		public:
			void get()
			{
				cout<<"Enter a=";
				cin>>a;
			}
			void show()
			{
				
				cout<<a;
			}
};
class Base2
{
	protected:
		int b;
		public:
			void set()
			{
				cout<<"Enter b=";
				cin>>b;
			}
			void display()
			{
				cout<<b;
			}
};
class drv:public Base1,public Base2
{
	int c;
	public:
		void accept()
		{
			get();
			set();
			
		}
		void add()
		{
			c=a+b;
		}
		void printMessage()
		{
			show();
			display();
			cout<<"sum="<<c;
		}
};
int main()
{
	drv obj;
	obj.accept();
	obj.add();
	obj.printMessage();
}
