#include<iostream>
using namespace std;
class Box
{
	int l,b,h;
	public:
	Box()
	{
		cout<<"Enter l,b and h:";
		cin>>l>>b>>h;
	}
	Box(int i)
	{
		l=b=h=i;
	}
	Box(int i,int j,int k)
	{
		this->l=i;
		this->b=j;
		this->h=k;
	}
	Box(Box &p)
	{```
	/*	l=this->l;
		b=this->b;
		h=this->h;*/
		l=p.l;
		b=p.b;
		h=p.h;
	}
	void show()
	{
		cout<<"length="<<l<<"breadth="<<b<<"height"<<h<<endl;
	}
};
	int main()
	{
		Box b1;
		b1.show();
		Box b2(30);
		b2.show();
		Box b3(10,20,30);
		b3.show();
		return 0;
		
	}

