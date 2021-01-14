#include<iostream>
using namespace std;
class Box
{
	int l,b,h;
	public:
		Box(int);
		Box(int,int);
		Box(int,int,int);
		void show();
};
void Box::show();
{
	cout<<l<<" "<<b<<" "<<c;
}
Box::Box(int i)
{
	l=b=h=i;
}
Box::Box(int p,int q)
{
	l=h=p;
	b=c;
}
Box::Box(int p,int q,int r)
{
	l=p;
	b=q;
	h=r;
}
int main()
{
Box b1(10);
Box b2(10,20);
Box b3(10,20,30);
b1.show();
b2.show();
b3.show();
	return 0;
}
