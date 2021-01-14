#include<iostream>
using namespace std;
class cal
{
	int a,b;
	public:
		int sum(int s1,int s2);
		void show();
};
void cal::show()
{
	
}
int cal::sum(int s1,int s2)
{
	int sum = s1 + s2;
	return sum;
}
int main()
{
	cal c1;
	int s1,s2,res;
	//int res=c1.sum(10,20);
	cout<<"Enter a two number:"<<endl;
	cin>>s1>>s2;
	res=s1+s2;
	cout<<"sum is"<<res;
	return 0;
}
