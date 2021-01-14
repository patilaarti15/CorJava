	
#include<iostream>
using namespace std;
int fibnocci(int input)
{
	if(input==0||input==1)
	{
	
	return input;
}
else
{
	return fibnocci(input-1)+fibnocci(input-2);
}
	}	

int main()
{
	

int input;
cout<<"Enter a number";
cin>>input;
cout<<"result is:";
for(int i=0;i<=input;i++)
{
	int result=fibnocci(i);
cout<<" "<<result;
}

}
