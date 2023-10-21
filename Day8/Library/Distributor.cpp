#include<iostream>
using namespace std;
#include<string.h>
#include "Distributor.h"

Distributor::Distributor()
{
	strcpy(dname,'\0');
}
Distributor::Distributor(char* dn)
{
	strcpy(dname,dn);
}
Distributor::~Distributor()
{
}

void Distributor::display()
{
	Library::display();
	cout<<"distributor name is "<<dname<<endl;
}
