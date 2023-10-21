#include<iostream>
using namespace std;

int main()
{
	int a,b;
	
	
	try
	{
		cout<<"Enter a & b: ";
		cin>>a>>b;
	
		if(b==0)
			throw b;
		cout<<"Division= "<< a/b ;
	}
	catch(int e)
	{
		cout<<"You are dividing by zero";
	}
}
