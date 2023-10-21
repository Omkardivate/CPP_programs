//flow of invokation & execution of construct,destruct
#include <iostream>
using namespace std;

class A
{
	public:
		A()
		{
			cout<<"from def. constructor of A"<<endl;
		}
		~A()
		{
			cout<<"from distructor of A"<<endl;
		}
	
};
class B: public A
{
	public:
		B() : A()
		{
			cout<<"from def. constructor of B"<<endl;
		}
		~B()
		{
			cout<<"from distructor of B"<<endl;
		}
	
};
class C: public A
{
	public:
		C() : A()
		{
			cout<<"from def. constructor of C"<<endl;
		}
		~C()
		{
			cout<<"from distructor of C"<<endl;
		}
	
};

int main()
{
	B b1;
	C c1;
}
