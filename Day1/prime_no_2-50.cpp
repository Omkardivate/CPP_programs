#include<iostream>
using namespace std;
void prime(int num);
int main()  //2-50
{
	
	for(int i=2;i<=50;i++)
	{
		prime(i);
	}
}

void prime(int num)  //num=2,4
{
	int flag=0;  //prime
	if(num==0 || num==1)  // 2==0/1
	{
		flag=1;	//not prime
	}
	
	for(int i=2;i<=(num/2);i++ )  // 2<=1, 2<=2
	{
		if(num%i==0)  //4%2 == 0
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
		cout<<num<<endl;
}
