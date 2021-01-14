#include<iostream>
using namespace std;
class cal
{
	int feet;
	int inches;
	public:
		void get();
		void show();

void add(cal &,cal&);		
};
void cal::get()
{
	cout<<"Enter feet and inches:";
	cin>>feet>>inches;
}
void cal::show()
{
	cout<<"feet="<<feet;
	cout<<"inches="<<inches;
}
void cal::add(cal &p,cal &q)
{
	this->feet=p.feet+q.feet;
	this->inches=p.inches+q.inches;
 } 
 int main()
 {
 	cal d1,d2,d3;
 	d1.get();
 	d2.get();
 	d3.add(d1,d2);
 	d3.show();
 	return 0;
 }
