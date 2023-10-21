#include<iostream>
using namespace std;

int main()
{
	int sub,name,i,sum=0;
	float avg;
	
	cout<<"enter no. of subjects: ";
	cin>>sub; //5
	
	cout<<"enter no. characters in name: ";
	cin>>name;  //ritesh=6  =>7
	
	int* sub_mark_ptr= new int[sub];
	char* name_ptr= new char[name+1];
	
	cout<<"enter student name: ";
	cin>> name_ptr;
	
	cout<<"enter 5 subject marks: "<<endl;
	for(i=0;i<sub;i++)
	{
		cin>> sub_mark_ptr[i] ;
		sum= sum+ sub_mark_ptr[i];
	}
	avg= (float)sum/sub;
	cout<<"Average marks of "<< name_ptr<<" is "<<avg;
	
	delete[] sub_mark_ptr;
	delete[] name_ptr;
}
