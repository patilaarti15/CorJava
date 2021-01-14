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

	friend cal add(cal &,cal &);
};
	

 cal add(cal &p,cal &q)
{
	cal temp;
	temp.feet=p.feet+q.feet;
	temp.inches=p.inches+q.inches;
	return temp;


}
int main()
{
	cal d1,d2,d3;
	d1.get();
    d2.get();
    
	d3=add(d1,d2);
	d3.show();
	return 0;
}
