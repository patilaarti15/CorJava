#include<iostream>
using namespace std;

void swap(int i,int j);
int main()
{
	int a=10,b=20;
	cout<<"value before swapping:";
	cout<<a<<b;
	swap(a,b);
    cout<<"value after swapping:";
    cout<<a<<b;
    return 0;
}
void swap(int i,int j)
{
	int temp;
	temp=i;
	i=j;
	j=temp;
}
