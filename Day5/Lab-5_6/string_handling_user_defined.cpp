#include<iostream>
using namespace std;

void ucopy(char* p,char* q)
{
	while( *p != '\0')
	{
		*q=*p;
		p++;
		q++;
	}
	*q='\0';
};

int ulength(char* p)
{
	int len=0;
	while( *p != '\0')
	{
		p++;
		len += 1;
	}
	return len;
};
void uconcatenate(char* p,char* q)
{
	while(*p != '\0')
	{
		p++;
	}
	while(*q != '\0')
	{
		*p=*q;
		p++;
		q++;
	}
}
void ucompare(char* p,char* q)
{
	int dissimilar=0;
	while(*p != '\0')
	{
		if(*p != *q)
		{
			dissimilar += 1;
		}
		p++;
		q++;
	}
	
	if(dissimilar== 0)
	{
		cout<<"equal"<<endl;
	}
	else
	{
		cout<<"not equal"<<endl;
	}
};

int main()
{
	char str1[15];
	char str2[15];
	
	cout<<"Enter string1:";  //level
	cin>>str1;
	
	ucopy(str1,str2);
	cout<<"str1="<<str1<<" str2="<<str2<<endl;
	
	
	ucompare(str1,str2);
	cout<<ulength(str1)<<" & "<<ulength(str2)<<endl;
	
	uconcatenate(str1,str2);
	cout<<"str1="<<str1<<" str2="<<str2<<endl;

	return 0;	
	
}
