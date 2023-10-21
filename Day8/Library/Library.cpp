#include<iostream>
using namespace std;
#include<string.h>
#include "Library.h"

Library::Library()
{
	strcpy(lname,'\0');
}

Library::Library(char* ln)
{
	strcpy(lname,ln);
}

Library::~Library()
{}

void Library::display()
{
	cout<<"library name is "<<lname<<endl;
}
