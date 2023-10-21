//obj. creation on stack, using virtual keyword
#include<iostream>
using namespace std;

class Employee
{
	int id;
	public:
		Employee();
		Employee(int);
		virtual int salary();
		virtual void display();
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
	Employee e1(1);
	Employee* ptr1=&e1;
	cout<<ptr1->salary()<<endl;
	ptr1->display();
	
	wageEmployee we1(2,8,500);
	Employee* ptr2=&we1;
	cout<<ptr2->salary()<<endl;
	ptr2->display();
	
	SalesEmployee sm1(3,8,500,2000,2);
	Employee* ptr3=&sm1;
	cout<<ptr3->salary()<<endl;
	ptr3->display();
}