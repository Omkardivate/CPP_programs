#include<iostream>
using namespace std;
#include<string.h>
class Computer
{
	
	public:
		virtual void display()=0;
		
		virtual void show()
		{
			cout<<"call from abstract comp"<<endl;
		}
};

class Computer1:virtual public Computer
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
		void display()
		{
			cout<<"Computer1: "<<name1<<endl;
		}
		void show()
		{
			cout<<"call from computer1"<<endl;
		}
};

class Computer2:virtual public Computer
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
			cout<<"Computer2: "<<name2<<endl;
		}
		void show()
		{
			cout<<"call from computer2"<<endl;
		}
};

class Printer1:  public Computer1, public Computer2
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
		void show()
		{
			cout<<"call from printer1"<<endl;
		}
		
};

int main()
{
	Computer* ptr;
	Printer1 p("iet","cdac","printer1");
	ptr=&p;
	
	ptr->display();
	ptr->show();
	
	return 0;
}
