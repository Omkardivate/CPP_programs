#include<iostream>
using namespace std;
#include<string.h>
 
class student
{
	int rno;
	char* name;
	double fee;
 	
	public:
 		student(int,char[],double);
 		student(student&);
 		void show();
 		~student();
};

void student::show()
{
	cout<<rno<<" "<<name<<" "<<fee<<endl;
}

student::student(int no,char nam[],double f)
{
	int len=strlen(nam);
	rno= no;
	name= new char[len+1];
	strcpy(name,nam);
	fee=f;
}

student::student(student& obj)
{
	int len= strlen(obj.name);
	rno= obj.rno;
	name= new char[len+1];
	strcpy(name, obj.name);
	fee= obj.fee;
}
student::~student()
{
	cout<<"distructor is called"<<endl;
	if(name)
		delete[] name;
	name=NULL;
}
int main()
{
	student s1(1,"ritesh",15555.23);
	s1.show();
	
	student s2(s1);
	s2.show();
}
