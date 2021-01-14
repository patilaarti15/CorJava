#include<iostream>
using namespace std;
int fact(int n)
{
	
static int i=1;
if(n==1)
{
	return 1;
}
else
{
	
i++;
	return n*fact(n-1);
}
}
int main()
{
	int n,i;
	cout<<"Enter a number:";
	cin>>n;
	cout<<"result is:";

		int res=fact(n);
		cout<<res;

	return 0;
}
