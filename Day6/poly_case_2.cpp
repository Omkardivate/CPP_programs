//obj. creation on heap, without using virtual keyword
#include<iostream>
using namespace std;

class Employee
{
	int id;
	public:
		Employee();
		Employee(int);
		int salary();
		void display();
		int getId();
};
Employee::Employee()
{
	id=0;
	//cout<<"from default Employee"<<endl;
}
Employee::Employee(int i)
{
	id=i;
}
int Employee::salary()
{
	return 0;
}
void Employee::display()
{
	cout<<"from Employee, id="<<id<<endl;
}
int Employee::getId()
{
	return id;
}
//-------------------
class wageEmployee: public Employee
{
	int hours,rate;
	public:
		wageEmployee();
		wageEmployee(int,int,int);
		int salary();
		void display();
		int getHours();
		int getRate();
};
wageEmployee::wageEmployee()
{
	//cout<<"from default wageEmployee"<<endl;
}
wageEmployee::wageEmployee(int i,int hr,int r):Employee(i)
{
	hours=hr;
	rate=r;
}
int wageEmployee::salary()
{
	return hours*rate ;
}
void wageEmployee::display()
{
	//Employee::display();
	cout<<"from wageEmployee id="<<Employee::getId()<<" hours="<<hours<<" rate="<<rate<<" salary="<<salary()<<endl;
}
int wageEmployee::getHours()
{
	return hours;
}
int wageEmployee::getRate()
{
	return rate;
}
//--------------------------------------------
class SalesEmployee:public wageEmployee
{
	int sales,comm;
	public:
		SalesEmployee();
		SalesEmployee(int,int,int,int,int);
		int salary();
		void display();
};
SalesEmployee::SalesEmployee()
{
	//cout<<"from default SalesEmployee"<<endl;
}
SalesEmployee::SalesEmployee(int i,int hr,int r,int s,int c):wageEmployee(i,hr,r)
{
	sales=s;
	comm=c;
}
int SalesEmployee::salary()
{
	return wageEmployee::salary() + sales*comm ;
}
void SalesEmployee::display()
{
	//wageEmployee::display();
	cout<<"from SalesEmployee id="<<Employee::getId()<<" hours="<<wageEmployee::getHours()<<" rate="<<wageEmployee::getRate()<<" sales="<<sales<<" comm="<<comm<<" salary="<<salary()<<endl;
}

int main()
{
	Employee* ptr1=new Employee;
	ptr1->display();
	
	Employee* ptr2=new wageEmployee;
	ptr2->display();
	
	Employee* ptr3=new SalesEmployee;
	ptr3->display();
	
	if(ptr1)
		delete ptr1;
	ptr1=NULL;
	
	if(ptr2)
		delete ptr2;
	ptr2=NULL;
	
	if(ptr3)
		delete ptr3;
	ptr3=NULL;
}
