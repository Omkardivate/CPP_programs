#include<iostream>
using namespace std;
#include<string.h>

class string1
{
	int len;
	char* ptr;
	public:
		void display()
		{
			//cout<<"name is "<<*ptr<<endl;  //for character
			cout<<"name is "<<ptr<<endl;   //for string
			cout<<"length is "<<len<<endl;
		}
		//for char
		string1(char ch)  
		{
			this->len=1;
			ptr= new char;
			*ptr=ch;
			cout<<"character is "<<*ptr<<endl;
		}
		//to copy string (hardcoded)
		string1(char* str)
		{
			this->len =strlen(str);
			ptr= new char[this->len+1];
			
			strcpy(ptr,str);
			
		}
		//len & char (to print-line)
		string1(char ch,int len)
		{
			int i;
			this->len=len;
			ptr= new char[this->len +1];
			
			for(i=0;i< this->len;i++)
			{
				ptr[i]=ch;
				cout<<ptr[i];
			}
			cout<<endl;
			ptr[i]='\0';
		}
		//len, accept string 
		string1(int len)
		{
			this->len=len;
			ptr=new char[this->len + 1];
			
			char str[this->len];
			cout<<"Enter string of "<<this->len <<" character: "<<endl;
			cin>>str;
			
			strcpy(ptr,str);
		}
		//accept len & string both
		string1()
		{
			cout<<"Enter no. of char you want in string:"<<endl;
			cin>>this->len;
			
			ptr=new char[this->len +1];
			cout<<"Enter string of "<<this->len <<" characters: ";
			cin>>ptr;
		}
};

int main()
{
	string1 s1('A');
	
	string1 s2("iet");
	s2.display();
	
	string1 s3('*',50);
	
	string1 s4(5);
	s4.display();
	
	string1 s5;
	s5.display();
	
}
