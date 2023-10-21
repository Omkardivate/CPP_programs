// C++
#include<iostream>
using namespace std;
#include<stdlib.h>

int main()
{
	int n;
	
	cout<<"Enter the no. of chars in name:";
	cin>>n;
	
	char* ptr=(char*) malloc(n*sizeof(char)+1);
	
	cin>>ptr ;
		
	cout<<"Hii "<< ptr;
	
	free(ptr);
}
