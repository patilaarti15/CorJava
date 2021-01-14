#include<iostream>
using namespace std;
int main()
{
	int size;
	cout<<"Enter a size";
	cin>>size;
	int *p;
	p=new int[size];
	for(int i=0;i<size;i++)
	{
		cout<<"Enter an element:";
		cin>>p[i];
}
		cout<<"Array elements are:";
		for(int j=0;j<size;j++)
		{
			cout<<p[j];
		}
	
	
	return 0;
}
