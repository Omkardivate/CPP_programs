//Implement functions through your program
#include <iostream>
using namespace std;

class demo
{
	int a;
	public:
		demo(int aa=7)
		{
			a=aa;
		}
		void print()
		{
			cout<<"Hello-"<<a<<endl;
		}
};

int main()
{
	demo d(10);
	d.print();
}
