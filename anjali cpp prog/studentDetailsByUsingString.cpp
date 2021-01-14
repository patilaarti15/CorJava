#include<iostream>
#include<string>
using namespace std;
class student
{
	int rollno;
	char grade;
	float per;
	string name;
	public:
		void get();
		void show();
};
void student::show()
{
	cout<<"rollno="<<rollno<<endl<<"grade="<<grade<<endl<<"per="<<per<<endl<<"name="<<name;
	
}
void student::get()
{
	cout<<"Enter student details-rollno,grade,per,name:"<<endl;
	cin>>rollno>>grade>>per;
	getline(cin,name);
	getline(cin,name);
	
}
int main()
{
	student s1;
	s1.get();
	s1.show();
	return 0;
}
