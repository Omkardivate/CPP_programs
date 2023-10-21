#include <iostream>
using namespace std;

int main()
{
	int a=10,b=20,temp;
	
	cout<<"before swapping: a="<<a<<" and b="<<b<<endl;
	
	temp=a;
	a=b;
	b=temp;
	
	cout<<"after swapping: a="<<a<<" and b="<<b<<endl;
	
}
