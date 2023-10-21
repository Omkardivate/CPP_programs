#include<iostream>
using namespace std;

class Student
{
	int rollno,m1,m2;
	public:
		Student(int rno,int m1,int m2)
		{
			rollno=rno;
			this->m1=m1;
			this->m2=m2;
		}
		int getrollno()
		{
			return rollno;
		}
		int getM1()
		{
			return m1;
		}
		int getM2()
		{
			return m2;
		}
};
class Sports
{
	int sportmarks;
	public:
		Sports(int sm)
		{
			sportmarks=sm;
		}
		int getSportMarks()
		{
			return sportmarks;
		}
};

class Result: public Student, public Sports
{
	float avg;
	public:
		Result(int rr,int aa,int bb,int sm): Student(rr,aa,bb) , Sports(sm)
		{
		}
		void show()
		{
			int sum= getM1() + getM2() + Sports::getSportMarks() ;
			avg= (float) sum /3 ;
			cout<<"\naverage= "<<avg;
		}
		
};
int main()
{
	Result r1(1,75,66,50);
	r1.show();
	return 0;
}



