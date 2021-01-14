#include <iostream>
using namespace std;
class demo
{
	int a;
	public:
		demo(int a);
		void show();
};
void demo::show()
{
	cout<<a;
}
demo::demo(int i)
{
	a=i;
}
int main()
{
	demo d1;
	d1.show();
}
