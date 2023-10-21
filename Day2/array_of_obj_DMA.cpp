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
		void accept()
		{
			cout<<"Enter real and img: "<<endl;
			cin>>real>>img;
		}
		void display()
		{
			cout<<real<<"+"<<img<<"i"<<endl;
		}
};
int main()
{
	int n;
	cout<<"enter no. of objects:";
	cin>>n;
	
	complex* ptr=new complex[n];
	
	for(int i=0;i<n;i++)
		ptr[i].accept();
		
	for(int i=0;i<n;i++)
		ptr[i].display();
	
	delete[] ptr;
}
