#include<iostream>
using namespace std;
class Num
{
	protected:
		int a,b;
		public:
			void get()
			{
				cout<<"Enter a and b:";
				cin>>a>>b;
			}
			void show()
			{
				cout<<"a="<<a<<""<<"b="<<b<<endl;
			}
			
};
class AddNum:public Num
{
	protected:
		int c;
		public:
			void set()
			{
				get();
			}
			void display()
			{
				show();
				cout<<"sum="<<c;
			}
			void add()
			{
				c=a+b;
			}
};
class DiffNum:public AddNum
{
	int d;
	public:
		void accept()
		{
			set();
		
		}
		void diff()
		{
			d=a-b;
		}
		void print()
		{
			display();
		cout<<"difference="<<d;	
		}
		
};
int main()
{
	DiffNum obj;
	obj.accept();
	obj.add();
	obj.diff();
	obj.print();
}
