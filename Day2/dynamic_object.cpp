#include<iostream>
using namespace std;

class complex
{
	int real,img;
	public:
		complex(int r=0,int i=0)
		{
			real=r;
			img=i;
		}
		void display()
		{
			cout<<real<<"+"<<img<<"i"<<endl;
		}
};
int main()
{
	complex* c1_ptr=new complex();
	c1_ptr->display();
	
	complex* c2_ptr=new complex(2,3);
	c2_ptr->display();
	
	delete c1_ptr;
	delete c1_ptr;
}
