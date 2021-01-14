#include<iostream>
using namespace std;
void swap(int *,int*);
int main()
{
	int a=10, b=20;
	cout<<"value before swapping:" ;
	cout<<a<<b<<endl;
	swap(&a,&b);
	cout<<"value after swapping:";
	cout<<a<<b;
	return 0;
}
void swap(int *p, int*q)
{
	int temp;
	temp=*p;
	*p=*q;
	*q=temp;
}
