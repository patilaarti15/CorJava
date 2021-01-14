#include<iostream>
using namespace std;
class Base
{
	protected:
		int a,b;
		public:
			Base(int i,int j)
			{
				a=i;
				b=j;
			}
			void show()
			{
				cout<<a<<" "<<b;
			}
			
};
class drv:public Base
{
	int c;
	public:
		drv():Base(10,20)
		{
			c=a+b;
		}
		void show()
		{
			Base::show();
cout<<"sum="<<c;			
		}
};
int main()
{
	drv obj1;
	obj1.show();
}
