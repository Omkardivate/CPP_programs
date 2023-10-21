#include <iostream>
using namespace std;

class A
{
	int c=1;
	public:
		int a=2;
	protected:
		int b=3;
	public:
		void show()
		{
			cout<<"class A"<<endl;
		}
};
class B
{
	
	public:
		void show()
		{
			cout<<"class B"<<endl;
		}
};
class C:public A,public B
{
	
	public:
//		void show()
//		{
//			cout<<"class C"<<endl;
//		}
};
int main()
{
	C cobj;
	cobj.A::show();
	cobj.B::show();
	
}
