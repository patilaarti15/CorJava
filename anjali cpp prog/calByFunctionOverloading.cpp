#include<iostream>
using namespace std;
class cal
{
	int a,b,c;
	public:
		int sum(int,int);
		int sum(int,int,int);

};
int cal::sum(int i,int j) 
{
	return i+j;
}
int cal::sum(int i,int j,int k)
{
	return i+j+k;
}
int main()
{
	cal c1;
	int r1=c1.sum(10,20);
	int r2=c1.sum(10,20,30);
	cout<<"sum is:"<<r1<<" and "<<r2;
	return 0;
}
