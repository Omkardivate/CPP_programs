#include<iostream>
using namespace std;
#include<string.h>
class string1
{
	int len;
	char* ptr;
	public:
		string1(char*);
		void stringdisplay();
		~string1();
		string1(string1&);
};
void string1::stringdisplay()
{
	cout<<"length is "<<len<<endl;
	cout<<"string is "<<ptr<<endl;
}
string1::string1(char* sptr)  // sptr="rahul"
{
	len=strlen(sptr);
	ptr=new char [len+1];
	strcpy(ptr,sptr);	
}
string1::~string1()
{
	cout<<"destructor is called "<<endl;
	if(ptr)
		delete[] ptr;
	ptr=NULL;
}
string1::string1(string1& new_obj)  // new_obj= c2
{
	len= new_obj.len;
	ptr=new char[len+1];
	strcpy(ptr, new_obj.ptr);
}
int main()
{
	string1 c2("rahul");
	c2.stringdisplay();
	{
		string1 c3(c2);
		c3.stringdisplay();
		c3.~string1();
		
	}
	c2.stringdisplay();
}
