#include<iostream>
using namespace std;
class Num
{
	protected:
		int a,b;
		public:
			Num(int i,int j)
			{
				a=i;
				b=j;
			}
			void show()
			{
				cout<<"a="<<a;
				cout<<"b="<<b;
			}
};
class AddNum:public Num
{
	int c;
	public:
		AddNum(int i,int j):Num(i,j)
		{
			c=a+b;
		}
		void show()
		{
			Num::show();
			cout<<"sum="<<c<<endl;
		}
};
class DiffNum:public Num
{
	int d;
	public:
		DiffNum(int i,int j):Num(i,j)
		{
			d=a-b;
		}
		void show()
		{
			Num::show();
			cout<<"diff="<<d;
		}
};

int main()
{
	DiffNum d1(60,20);
	AddNum a1(20,10);
	a1.show();
	d1.show();
	return 0;
}
