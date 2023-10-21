#include<iostream>
using namespace std;

class Demo
{
	public:
		static void show() 
		{
			cout<<"bye"<<endl;
		}
		void show() 
		{
			cout<<"hello "<<endl;
		}
};
int main()
{
	Demo d1;
	d1.show();
	
	Demo d2;
	d2.show();
}
