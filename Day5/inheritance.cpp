#include<iostream>
using namespace std;

class A
{
	public:
		A()
		{
			cout<<"default of A"<<endl;
		}
		void display()
		{
			cout<<"display of A "<<endl;
		}
};
class B:public A
{
	public:
		B()
		{
			cout<<"default of B"<<endl;
		}
		void display()
		{
			A::display();
			cout<<"display of B "<<endl;
		}
};
int main()
{
	B bobj;
	bobj.display();
}
