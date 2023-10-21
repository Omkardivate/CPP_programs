#include<iostream>
using namespace std;

int main()
{
	int i,multi=1,num;
	cout<<"enter no: ";
	cin>>num;
	for(i=1;i<=num;i++)
	{
		multi=multi*i;
	}
	cout<<"multi="<<multi;
}

