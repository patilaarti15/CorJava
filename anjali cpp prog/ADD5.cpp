#include<iostream>
using namespace std;
int main()
{
	int a,b,ch;
	cout<<"Enter two number a and b";
	cin>>a>>b;
	cout<<"Enter your choice";
	cout<<"1.addition";
	cout<<"2.substraction";
	cin>>ch;
	switch(ch)
	{
		case 1:
			cout<<"addition"<<a+b;
			break;
		case 2:
			cout<<"substraction"<<a-b;
        	break;
        default: 
        cout<<"Enter valid choice";
        break;
	}
}
