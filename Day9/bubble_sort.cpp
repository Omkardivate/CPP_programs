#include<iostream>
using namespace std;
#define SIZE 6
void display(int arr[])
{
	for(int i=0;i<SIZE;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

void sort_arr(int arr[])
{
	int temp;
	
	for(int i=0;i<=(SIZE-1);i++)  //0<=5
	{
		for(int j=0;j<(SIZE-i)-1;j++)  //0<4,0<3
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}

int main()
{
	int arr[SIZE]={50,20,40,30,60,10};

	display(arr);
	sort_arr(arr);
	display(arr);
	
}
