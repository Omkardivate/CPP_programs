//  w/o virtual flow of invokation & execution of construct,destruct in multiple inheritance
#include <iostream>
using namespace std;
//  A ; B:A ; C:A , D:B,C
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
class B: virtual public A
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
class C: virtual public A
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
class D: public B,public C
{
	public:
		D() : C(), B()
		{
			cout<<"from def. constructor of D"<<endl;
		}
		~D()
		{
			cout<<"from distructor of D"<<endl;
		}
	
};

int main()
{
	D d1;
	
}
