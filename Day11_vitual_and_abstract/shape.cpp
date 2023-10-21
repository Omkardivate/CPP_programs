// Pure virtual class: Shape
#include<iostream>
using namespace std;

class Shape
{
	public:
		virtual int area()=0;
		virtual void display()=0;
};

class Square: public Shape
{
	int a;
	public:
		Square(int aa=1)
		{
			a=aa;
		}
		int area()
		{
			return a*a;
		}
		void display()
		{
			cout<<"area of Rectangle="<<area()<<endl;
		}
};

class Rectangle: public Shape
{
	int len,bre;
	public:
		Rectangle(int l=1,int b=1)
		{
			len=l;
			bre=b;
		}
		int area()
		{
			return len*bre;
		}
		void display()
		{
			cout<<"area of rectangle="<<area()<<endl;
		}
};

int main()
{
	Shape* ptr= new Square(4);
	cout<<"sq. area="<<ptr->area()<<endl;
	ptr->display();
	
	ptr= new Rectangle(4,6);
	cout<<"rect. area="<<ptr->area()<<endl;
	ptr->display();
}
