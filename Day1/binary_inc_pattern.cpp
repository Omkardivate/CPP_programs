#include<iostream>
using namespace std;

int main()
{
	char ch='A';
	for(int row=1;row<6;row++)
	{
		for(int col=1;col<=row;col++)
		{
			int a= col%2;
			cout<<a;
		}
		cout<<endl;
	}
}
