#include<iostream>
using namespace std;
class student
{
	int roll;
	char grade;
	float per;
	public:
		void get()
		{
			cout<<"Enter roll,grade,per";
			cin>>roll>>grade>>per;
		}
		friend void show(student &);
};
void show(student &s)
{
	cout<<"rollno="<<s.roll<<endl<<"grade="<<s.grade<<endl<<"percentage="<<s.per;
}
int main()
{
	student s1;
	s1.get();
	show(s1);
	return 0;
}
