#include<iostream>
using namespace std;
class complex
{
	int real,img;

public:
	complex()
	{
		real=img=0;
	}
	complex(int real,int img)
	{
		this->real=real;
		this->img=img;
	}
	void display()
	{
		if(img>0)
			cout<<"complex number is "<<real<<"+"<<img<<"i"<<endl;
		else
			cout<<"complex number is "<<real<<img<<"i"<<endl;
	}
	complex operator+(complex& c)  //c1+c2
	{
		complex temp;
		temp.real=this->real + c.real;
		temp.img=this->img + c.img;
		return temp;
	}
	complex operator-(complex& c)  //c1-c2
	{
		complex temp;
		temp.real=this->real - c.real;
		temp.img=this->img -c.img;
		return temp;
	}
	complex operator--()  // --
	{
		complex temp;
		temp.real=this->real-1;
		temp.img=this->img-1;
		return temp;
	}
	complex operator++()  // ++
	{
		complex temp;
		temp.real=this->real+1;
		temp.img=this->img+1;
		return temp;
	}
	complex operator=(complex& c)  // c2=c1
	{
		complex temp;
		temp.real=c.real;
		temp.img=c.img;
		return temp;
	}
	complex operator==(complex& c)  // c2==c1
	{
		complex temp;
		temp.real= (this->real == c.real);
		temp.img=(this->img == c.img);
		return temp;
	}
	complex operator<<(complex& c)  // c2<<c1
	{
		complex temp;
		temp.real= (this->real << c.real);
		temp.img=(this->img << c.img);
		return temp;
	}
	complex operator>>(complex& c)  // c2>>c1
	{
		complex temp;
		temp.real= (this->real >> c.real);
		temp.img=(this->img >> c.img);
		return temp;
	}
};

int main()
{
	complex c1(3,5);
	complex c2(1,2);
	
	complex c3=c1-c2;
	c3.display();
	
	complex c4(5,6);
	complex c5=--c4;
	c5.display();
	
	complex c6=++c4;
	c6.display();
	
	complex c7=c1;
	c7.display();
	
	complex c8= (c1==c2);
	c8.display();
	
	complex c9= (c1<<c2);
	c9.display();
	
	complex c10= (c1>>c2);
	c10.display();
}
