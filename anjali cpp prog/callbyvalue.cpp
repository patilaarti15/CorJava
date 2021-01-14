#include<iostream>
using namespace std;

int swap(int,int);

int main()
{
	int a=10,b=20;
	cout<<"value before swapping:";
	cout<<a<<b<<endl;
	swap(a,b);
    cout<<"value after swapping:";
    cout<<a<<b<<endl;
    return 0;
}
int swap(int p,int q)
{
	int temp;
	temp=p;
	p=q;
	q=temp;
	return 0;
}
