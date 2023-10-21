#include<iostream>
using namespace std;
#include<string.h>
#include "Author.h"

Author::Author()
{
	strcpy(aname,'\0');
}

Author::Author(char* an)
{
	strcpy(aname,an);
}
Author::~Author()
{
}

void Author::display()
{
	//Library::display();
	cout<<"author name is "<<aname<<endl;
}
