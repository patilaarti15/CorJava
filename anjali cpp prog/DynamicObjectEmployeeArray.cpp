#include<iostream>
#include<string>
using namespace std;
class emp
{
	int id;
	string name;
	float sal;
	public:
		void get();
		void show();
};
void emp::get()
{
	cout<<"Enter id,name,sal";
	cin>>id>>name>>sal;
}
void emp::show()
{
	cout<<"Employee id="<<id<<endl;
	cout<<"Employee name="<<name<<endl;
	cout<<"Employee salary="<<sal<<endl;
}
int main()
{
	emp *p;
	p=new emp();
	p->get();
	p->show();
	return 0;
}
