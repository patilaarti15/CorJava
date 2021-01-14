#include<iostream>
using namespace std;
class A
{
	int a;
	public:
		void f1()
		{
			cout<<"In F1";
		}
		virtual void f2()
		{
			cout<<a;
		}
};
class B:public A
{
	int b;
	public:
	void f3()
		{
			cout<<"In F3";
		
		void f2()
		{
			cout<<b;
		}
};
int main()
{
	B obj;
	A *ptr;
  // A = &obj;
  ptr= &obj;
	ptr->f2();
	obj.f3();
	ptr->f1();
	return 0;
}
