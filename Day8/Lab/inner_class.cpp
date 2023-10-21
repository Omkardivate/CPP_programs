// inner class
#include<iostream>
using namespace std;

class School
{
	public:
		class Division
		{
			int rollno;
			public:
				void setRollno(int rno)
				{
					rollno=rno;
				}
				int getRollno()
				{
					return rollno;
				}
		};
};

int main()
{
	School::Division divA;
	
	divA.setRollno(7);
	cout<<"Roll no. is "<<divA.getRollno();
}
