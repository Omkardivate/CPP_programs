//Assignments using pointers, arrays of pointers
#include <iostream>
using namespace std;

int main()
{
	int arr[5]={10,20,30,40,50};
	int* ptr[5];
	
	for(int i=0;i<5;i++)
	{
		ptr[i]=&arr[i];
	}
	*ptr[2]=155;
	for(int i=0;i<5;i++)
	{
		cout<<*ptr[i]<<endl;
	}
}

