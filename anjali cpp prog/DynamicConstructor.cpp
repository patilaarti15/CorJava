#include<iostream>
using namespace std;
class emp
{
	int id;
	string name;
	float sal;
	public:
		emp(int,string,float);
		void show();
	};
	emp::emp(int a,string l,float f)
	{
		id=a;
		name=l;
		sal=f;
	}
	void emp::show()
	{
		cout<<"Employee id="<<id<<endl;
		cout<<"Employee name="<<name<<endl;
		cout<<"Employee sal="<<sal<<endl;
	}
	int main()
	{
		int input_id;
		string input_name;
		float input_sal;
		cout<<"Enter id,name,sal";
		cin>>input_id>>input_name>>input_sal;
		emp *p;
		p=new emp(input_id,input_name,input_sal);
		p->show();
		return 0;
	}
