#include<iostream>
using namespace std;
class emp
{
	 static int id;
	int sal;
	string name;
public:
	emp()
	{
		int a,count=0;
		cout<<"No of employee";
		cin>>count;
		for(a=0; a<=count;a++)
		{
		cout<<"Enter employee details:id,sal,name";
		cin>>id>>sal>>name;
		getline(cin,name);
		getline(cin,name);
	
	}
		count++;	
	}
	void show()
	{
		cout<<"emp_id"<<id<<"salary"<<sal<<"emp-name"<<name;
	}
	~emp()
	{
		int a,count;
			for(a=1; a<=count;a++)
			{
				
			
		cout<<"employee resign";
		
	}
	count--;
	cout<<"no of emp:"<<count<<endl;	
	}
	
};
int emp::id;
int main()
{
	emp e1;
	e1.show();
	//e2.show();
	//e3.show();
	return 0;
}
