#include<iostream>
using namespace std;
class stud
{
	int roll_no;
	char name[100];
    char grade;
    public:
    	stud(int ,char ,char);
    	void show();
	
};
void stud::show()
{
		cout<<"roll_no="<<roll_no<<" " <<"name="<<name<<" "<<"grade"<<grade<<endl;	

}
stud::stud(int ,char,char)
{
	cout<<"Enter student details:"<<endl;
	cin>>roll_no>>name>>grade;
}
int main()
{
	stud s1(1,'mmm','a');
	s1.show();
	return 0;
}
