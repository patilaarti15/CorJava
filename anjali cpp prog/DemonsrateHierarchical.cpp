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
			cout<<"a="<<a<<"b="<<b;
		}
		
};
class AddNum:public Num
{
	private:
		int c;
		public:
			AddNum(int i,int j):Num(i,j)
			{
				c=a+b;
			}
			void show()
			{
				Num::show();
				cout<<"sum="<<c;
			}
			
};
class DiffNum:public Num
{
	private:
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
	AddNum addobj(10,20);
	DiffNum diffobj(70,10);
	addobj.show();
	diffobj.show();
	
}

