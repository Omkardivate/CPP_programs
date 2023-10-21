#include<iostream>
using namespace std;
#include<string.h>

class Computer1
{
	protected:
		char name1[10];
	public:
		Computer1()
		{
			strcpy(name1,"server1");
		}
		Computer1(char* s1)
		{
			strcpy(name1,s1);
		}
		friend void setComp1(char*,char*);
		void display()
		{
			cout<<"Computer1: "<<name1<<endl;
		}
};
void setComp1(char* name1,char* n_name)
{
	strcpy(name1,n_name);
}
class Computer2
{
	protected:
		char name2[10];
	public:
		Computer2()
		{
			strcpy(name2,"server2");
		}
		Computer2(char* s2)
		{
			strcpy(name2,s2);
		}
		void display()
		{
			cout<<"Computer1: "<<name2<<endl;
		}
};

class Printer1: virtual public Computer1,virtual public Computer2
{
	protected:
		char pname1[10];
	
	public:
		Printer1()
		{
			strcpy(pname1,"printer");
		}
		Printer1(char* s1,char* s2, char* p1): Computer1(s1),Computer2(s2)
		{
			cout<<"Printer1 reiceived task"<<endl;
			strcpy(pname1,p1);
		}
		void display()
		{
			Computer1::display();
			Computer2::display();
			cout<<"Printer active:"<<pname1<<endl;
		}
};

int main()
{
	Printer1 p("iet","cdac","printer1");
	p.display();
	return 0;
}
