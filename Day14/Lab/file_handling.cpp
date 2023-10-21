#include <iostream>
using namespace std;
#include <fstream>
#include <string.h>


class Student 
{
	string name;
	int id;
	public:
		Student()
		{
			this->id=0;
			name="\0";
		}
		Student(int i,string n)
		{
			this->id=i;
			name=n;
		}
		int getId()
		{
			return id;
		}
		string getName()
		{
			return name;
		}
		
};
void append(Student s)
{
	ofstream file1;
	file1.open("StudentData.txt", ios::app);
	file1.write((char*)&s,sizeof(s));
	file1.close();
}

void read_file(Student s)
{
	ifstream file2;
	file2.open("StudentData.txt",ios::in);
	file2.read((char*)&s,sizeof(s));
	cout<<"\nStudent ID: "<<s.getId();
	cout<<"\nName: "<<s.getName();
	file2.close();
}

int main()
{
   Student s1(7,"Omkar");
   
   append(s1);
   read_file(s1);
   
   return 0;
}
