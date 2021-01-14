#include<iostream>
using namespace std;
class Num
{
	protected:
		int a,b;
		public:
			void get()
			{
				cout<<"Enter two numbers";
				cin>>a>>b;
			}
			void show()
			{
				cout<<"Numbers are";
				cout<<a<<"  "<<b<<endl;
			}
			
};
class AddNum:protected Num
{
	protected:
		int c;
		public:
			void set()
			{
				get();
				
			}
			void add()
			{
				c=a+b;
			}
			void display()
			{
				show();
				cout<<"sum="<<c;
			}
			
};
int main()
{
	AddNum obj;
	
	obj.set();
	obj.add();
	obj.display();
	return 0;
}
