#include<iostream>
using namespace std;
class cal
{
	int feet,inches;
	public:
		void get()
		{
			cout<<"Enter feet and inches:";
			cin>>feet>>inches;
		}
		void show()
		{
			cout<<"feet="<<feet;
			cout<<"inches="<<inches;
		}

	

 cal add(cal &d)
{
	cal temp;
	temp.feet=this->feet+d.feet;
	temp.inches=this->inches+d.inches;
	return temp;


}
};
int main()
{
	cal d1,d2,d3;
	d1.get();

    d2.get();

	d3=d1.add(d2);
	d3.show();
	return 0;
}
