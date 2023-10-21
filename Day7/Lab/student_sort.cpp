#include <iostream>     
using  namespace std;  
#include<string.h>
class date
{
	int dd,mm,yy;
	public:
		void get()
		{
			cout<<"enter date\n";
			cin>>dd>>mm>>yy;
		}
		void put()
		{
			cout<<"date is "<<dd<<"/"<<mm<<"/"<<yy<<endl;
		}
};
class student
{
	int rollno;
	int marks;
	date d;
	
	public:
		void get()
		{
			cout<<"enter rollno:";
			cin>>rollno;
			cout<<"enter total marks:";
			cin>>marks;
			d.get();
		}
		void put()
		{
			cout<<"rollno="<<rollno<<" marks="<<marks<<endl;
			d.put();
		}
		int getrollno()
		{
			return rollno;
		}
		int getmarks()
		{
			return marks;
		}
		void setrollno(int r)
		{
			rollno=r;
		}
		void setmarks(int m)
		{
			marks=m;
		}
		
		
};
int main()
{
	student s[10],temp;
	int i,n,j;
	cout<<"enter value of n\n";
	cin>>n;
	for(i=0;i<n;i++)
	{
		s[i].get();
		
	}
	for(i=0;i<n;i++)
	{
		s[i].put();
		
	}
	cout<<"\nsort information\n";
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(s[i].getrollno()>s[j].getrollno())
			{
				temp=s[i];
				s[i]=s[j];
				s[j]=temp;
			}
			
		}
	}
	for(i=0;i<n;i++)
	s[i].put();
}
