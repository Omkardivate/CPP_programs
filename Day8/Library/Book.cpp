#include<iostream>
using namespace std;
#include<string.h>
#include "Book.h"

Book::Book()
{
	strcpy(bname,'\0');
}

Book::Book(char* ln,char* dn,char* an,char* bn): Library(ln),Distributor(dn),Author(an)
{
	strcpy(bname,bn);
}
Book::~Book()
{
}

void Book::display()
{
	Distributor::display();
	Author::display();
	cout<<"Book title is "<<bname<<endl;
}

