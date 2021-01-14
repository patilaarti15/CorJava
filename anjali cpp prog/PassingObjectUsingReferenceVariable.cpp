#include<iostream>
using namespace std;
class Box
{
	int l,b,h;
	public:
		void get()
		{
			cout<<"Enter l,b,h:";
			cin>>l>>b>>h;
		}
		int compare(Box &p)
{
	int area_b1;
	int area_b2;
	area_b1=l*b*h;
	area_b2=p.l*p.b*p.h;
	if(area_b1==area_b2)
	{
		return 0;
	}
	else
	{
		return -1;
	}
		}		
};
int main()
{
	Box b1,b2;
	b1.get();
	b2.get();
	int r=b1.compare(b2);
	if(r==0)
	{
		cout<<"Box are equal";
	}
	else
	{
		cout<<"Box are not equal";
	}
	return 0;
}
