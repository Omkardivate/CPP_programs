#include<iostream>
using namespace std;

int main()
{
	int m1,m2,m3,m4,m5;
	
	for(int i=1;i<=5;i++)
	{
		cout<<"Enter 5 subject marks of student "<<i<<endl;
		cin>>m1>>m2>>m3>>m4>>m5;
		cout<<"Average mark of student "<<i<<"="<< (float) (m1+m2+m3+m4+m5)/5<<endl;
		
	}
}

