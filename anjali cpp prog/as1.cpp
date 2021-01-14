#include<iostream>
using namespace std;
class Student
{
int rollno;
char grade;
float percentage;
public:
	void get();
	void show();
	
};
void Student::get()
{
	cout<<"Enter rollno,grade,percentage:"<<endl;
	cin>>rollno>>grade>>percentage;
	
}
void Student::show()
{
	cout<<"student details"<<endl;
	cout<<rollno<<" "<<grade<<" "<<percentage<<endl;
	
}
int main()
{
	Student s1,s2;


	s1.get();
	s1.show();
	s2.get();
	s2.show();
	return 0;
}
