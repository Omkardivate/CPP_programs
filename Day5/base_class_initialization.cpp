#include<iostream>
using namespace std;

class A
{
	int a;
	public:
		A()
		{
			cout<<"default of A"<<endl;
		}
		A(int a)
		{
			cout<<"para of A"<<endl;
			this->a=a;
		}
		void display()
		{
			cout<<"display of A "<<endl;
			cout<<"value of A ="<<a<<endl;
		}
};
class B:public A
{
	int b;
	public:
		B()
		{
			cout<<"default of B"<<endl;
		}
		B(int b):A(10)
		{
			cout<<"para of B"<<endl;
			this->b=b;
		}
		void display()
		{
			A::display();
			cout<<"display of B "<<endl;
			cout<<"value of B ="<<b<<endl;
		}
};
int main()
{
	B bobj(7);
	bobj.display();
	cout<<"size of bobj:"<<sizeof(bobj);
}

