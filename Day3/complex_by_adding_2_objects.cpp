#include<iostream>
using namespace std;
#include<string.h>

class complex
{
	int real,img;
	public:
		void accept()
		{
			cout<<"Enter real & img value: "<<endl;
			cin>>real>>img;
		}
		void display()
		{
			cout<<"real no. is "<<real<<"+"<<img<<"i"<<endl;
		}
		complex add(complex& obj)
		{
			complex c4;
			c4.real= this->real + obj.real;
			c4.img= this->img + obj.img;
			
			return c4;
		}
};

int main()
{
	complex c1,c2;
	c1.accept();
	c2.accept();
	
	complex c3= c2.add(c1);
	c3.display();
}
