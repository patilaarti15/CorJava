#include<iostream>
using namespace std;
class student
{
	int rollNo;
	static int count;
	public:
		student(int input)
		{
			rollNo=input;
			count++;
		}
		void show()
		{
			cout<<"roll="<<rollNo;
		}
		static void studentcounter()
		{
			cout<<"total students="<<count;
		}
		~student()
		{
			--count;
		}
};
int student::count;
//void student::studentcounter();
int main()
{
	student s1(1);
	student s2(2);
	student s3(3);
	s1.show();
	s2.show();
	s3.show();
	s3.studentcounter();
	{
		student s4(4);
		student s5(5);
	}
	s3.studentcounter();
	return 0;
}
