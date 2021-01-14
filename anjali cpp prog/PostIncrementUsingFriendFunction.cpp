#include<iostream>
using namespace std;
class counter
{
	int a;
	public:
		counter()
		{
			a=0;
		}
		counter(int input);
	   void show();
	friend counter operator++(counter &,int);
		};
		counter::counter(int input)
		{
			a=input;
		}
		counter operator++(counter &s,int )
		{
			counter temp;
			temp.a=(s.a)++;
			return temp;
		}
		void counter::show()
		{
			cout<<"a="<<a;
		}
		int main()
		{
			counter c1(10),c2;
			c2=c1++;
			c1.show();
			c2.show();
			return 0;
		}
