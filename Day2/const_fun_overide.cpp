#include<iostream>
using namespace std;

class Demo
{
	public:
		void show() const
		{
			cout<<"bye"<<endl;
		}
		void show() 
		{
			cout<<"hello"<<endl;
		}
};
int main()
{
	Demo d1;
	d1.show();
	
	const Demo d2;
	d2.show();
}
