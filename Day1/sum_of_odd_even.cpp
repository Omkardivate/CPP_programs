#include<iostream>
using namespace std;

int main()
{
	int i,sum_e=0,sum_o=0;
	for(i=1;i<=20;i++)
	{
		if(i%2==0)  //even
		{
			sum_e= sum_e+1;
		}
		else  //odd
		{
			sum_o=sum_o+1;
		}
	}
	cout<<"sum_even="<<sum_e<<" and sum_odd="<<sum_o;
	return 0;
}
