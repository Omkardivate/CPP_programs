//Assignments on passing pointers in functions
#include <iostream>
using namespace std;

class demo
{
	int a=10,b=20;
	public:
		void swap(int* p,int* q)
		{
			int temp;
			temp=*p;
			*p=*q;
			*q=temp;
		}
		void print()
		{
			cout<<"before swap: a="<<a<<" & b="<<b<<endl;
			swap(&a,&b);
			cout<<"after swap: a="<<a<<" & b="<<b<<endl;
		}
};

int main()
{
	demo d;
	d.print();
}
