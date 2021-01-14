#include<iostream>
using namespace std;
class Box
{
	int l,b,h;
	public:
		void get()
		{
			cout<<"Enter l,b and h:"<<endl;
			cin>>l>>b>>h;
		}
		void show()
		{
			cout<<"l="<<l<<"b="<<b<<"h="<<h<<endl;
		}
};
class carton:public Box
{
	string type;
	char mat_type[];
	
public:
	void set()
	{
	
	cout<<"Enter material name:";
	cin>>type;
	cin.getline(mat_type,20);
	
}
void display()
{
	cout<<"material is="<<type;
}
};
int main()
{
	carton obj;
	obj.get();
	obj.set();
	obj.show();
	obj.display();
	return 0;
}

