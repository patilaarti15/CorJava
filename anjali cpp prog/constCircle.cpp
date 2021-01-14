#include<iostream>
using namespace std;
class circle
{
     int r;
	 const float pie;
	public:
		circle(int j,float i):pie(i)
	//circle(int j,float i):r(j)
		{
			r=j;
		//pie=i;
		}
		void show()
		{
			cout<<"radius="<<r<<"pie="<<pie<<endl;
			cout<<"area of circle is:"<<pie*r*r;
		}
		
};
int main()
{
	circle c1(10,3.14);
	c1.show();
	return 0;
}
