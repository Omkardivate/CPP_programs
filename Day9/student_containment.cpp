#include<iostream>
using namespace std;
#include<string.h>

class Address
{
	char add[50];
	public:
		Address()
		{
			strcpy(add,'\0');
		}
		Address(char* str)
		{
			strcpy(add,str);
		}
		void getAddress()
		{
			cout<<add<<endl;
		}
};

class Student
{
	int rollno,marks;
	Address a;
	public:
		Student()
		{
			rollno=1;
			marks=00;
			a=Address();
		}
		Student(int rno,int m,char* str1) : a(str1)
		{
			rollno=rno;
			marks=m;
		}
		void getdata()
		{
			cout<<rollno<<"  "<<marks<<"      ";
			a.getAddress();
		}
	
};

int main()
{
	Student s(1,55,"flat no.4, model colny, shivaji nagar");
	s.getdata();
}
