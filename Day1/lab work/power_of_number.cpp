#include <iostream>
using namespace std;

int main()
{
	int a,b,product=1,i=1;  //a power b
	
	cout<<"enter a , b: ";
	cin>>a>>b; //2,3=8
	
	while(i<=b)  //1<=3  2<=3  3<=3  4<=3
	{
		product= product*a;  //1*2=2  2*2=4  4*2=8
		i++;
	}
	cout<<"product="<<product;
}
