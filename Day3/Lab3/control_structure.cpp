//Implement all control structures through your program
#include<iostream>
using namespace std;

int main()
{
	for(int i=1;i<=2;i++)
	{
		int j=1;
		while(j<=10)
		{
			cout<<i<<"-->"<<j<<endl;
			j++;
		}
		cout<<endl;
	}
	int ip;
	do
	{
		cout<<"Enter 0 to be in loop,else enter other:";
		cin>>ip;
	}while(ip==0);
}

