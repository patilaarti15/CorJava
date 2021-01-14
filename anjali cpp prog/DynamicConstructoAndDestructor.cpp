#include<iostream>
using namespace std;
class emp
{
	int id;
	string name;
	float sal;
	public:
		void get();
		void show();
		emp();
		~emp();
	};
	void emp::get()
	{
		cout<<"Enter id,name,salary:";
		cin>>id>>name>>sal;
	}
	emp::emp()
	{
	cout<<"calling constructor";
	}
	emp::~emp()
	{
		cout<<"calling destructor";
	}
	void emp::show()
	{
		cout<<"Employee id="<<id<<endl;
		cout<<"Employee name="<<name<<endl;
		cout<<"Employee sal="<<sal<<endl;
	}
/*	int main()
	{
		emp *p;
		p=new emp();
	p->get();
		p->show();
		return 0;
	}
	*/
	int main()
	{
		emp *p;
		int size;
		cout<<"How many employee you want to enter";
		cin>>size;
		p=new emp[size];
		for(int i=0;i<size;i++)
		{
			p[i].get();
					}
					for(int i=0;i<size;i++)
					{
						p[i].show();
					}
	}
