#include<iostream>
#include<string>
using namespace std;
class employee
{
   static int count;
	int age;
	int emp_id;
	string name;
	public:
		employee()
		{
			cout<<"Enter employee id,age,name";
			cin>>emp_id>>age;
			getline(cin,name);
			getline(cin,name);
			
		}
		
		void Count()
		{
			count++;
			cout<<"total no of count"<<count<<endl;
		}
		~employee()
		{
			cout<<"Employee want to resign:"<<emp_id<<endl;
			count--;
			cout<<"Remaining employee is:"<<count<<endl;
		}
void show()
{
	cout<<"employee_id="<<emp_id<<endl<<"age="<<age<<endl<<"name="<<name<<endl;
}
	
};
int employee::count=1;
int main()
{
	employee e1,e2,e3;
	e1.Count();
	e1.show();
	e2.Count();
	e2.show();
	e3.Count();
	e3.show();

	return 0;
}
