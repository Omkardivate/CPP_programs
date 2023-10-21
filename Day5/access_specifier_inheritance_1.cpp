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
		void display()
		{
			cout<<"display of a"<<endl;
		}
};
class B:protected A
{
	
	public:
		void show()
		{
			cout<<a<<" & "<<b<<endl;
		}
};
class C:private B
{
	
	public:
		void show()
		{
			cout<<a<<" & "<<b<<endl;
		}
};
int main()
{
	B bobj;
	bobj.show();
	//bobj.display();
	
	C cobj;
	cobj.show();
}
