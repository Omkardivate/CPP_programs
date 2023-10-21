//diamond problem
#include<iostream>
using namespace std;

class School
{
	public:
		void display()
		{
			cout<<"from school";
		}
};
class Div1:virtual public School
{
	
};
class Div2:virtual public School
{
	
};

class Student : public Div1, public Div2
{
	
};

int main()
{
	Student s;
	s.display();
}
