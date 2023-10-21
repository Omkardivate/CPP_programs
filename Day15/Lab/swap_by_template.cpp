#include<iostream>
using namespace std;

template <class T>

void swap_num(T& x, T& y)
{
	T t;
	t= x;
	x= y;
	y= t;
}

int main()
{
	int a=10,b=20;
	
	cout<<"before swapping: "<<a<<" "<<b<<endl<<endl;
	swap_num(a,b);
	cout<<"after swapping: "<<a<<" "<<b<<endl;
	
	return 0;
}
