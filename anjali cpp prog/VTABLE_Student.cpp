#include<iostream>
#include<string>
using namespace std;
class student
{
	int rollno;
	string name;
	int age;
	public:
		void setRollNo()
		{
			cout<<"Enter roll no";
			cin>>rollno;
		}
		void setName()
		{
			cout<<"Enter name";
			cin>>name;
		}
		void setAge()
		{
			cout<<"Enter age";
			cin>>age;
		}
		int getRollno() const
		{
			return rollno;
		}
		string getname() const
		{
			return name;
		}
		int getAge() const
		{
			return age;
		}
		student()
		{
			rollno=0;
			name=" ";
			age=0;
		}
		
};
int main()
{
	student s1;
	s1.setName();
	s1.setRollNo();
	s1.setAge();
	int s1_age=s1.getAge();
	string s1_name=s1.getname();
	int s1_Roll=s1.getRollno();
	cout<<"Name="<<s1_name<<endl<<"Rollno="<<s1_Roll<<endl<<"Age="<<s1_age;
	return 0;
}
