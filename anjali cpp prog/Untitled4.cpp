#include<iostream>
using namespace std;
class cal
{
	int a,b;
	public:
		int add(int i,int j); 
		int mul(int i,int j);
int div(int i,int j);
int sub(int i,int j);
		void show();


};
void cal::show()
{

}
int cal::add(int i,int j)
{
	int res;
	res=i+j;
		cout<<"add="<<res<<endl;
	return res;
}
int cal::sub(int i,int j)
{
	int res;
	res=i-j;
		cout<<"sub="<<res<<endl;
	return res;
}
int cal::mul(int i,int j)
{
	int res;
	res=i*j;
		cout<<"mul="<<res<<endl;
	return res;
}
int cal::div(int i,int j)
{
	int res;
	res=i/j;
		cout<<"div="<<res<<endl;
	return res;
}
int main()
{
	cal c;
	int a,b;
	cout<<"Enter a two numbers::"<<endl;
	cin>>a>>b;
	c.add(a,b);
	

	
	c.mul(a,b);
	c.sub(a,b);
	c.div(a,b);
	c.show();
}
