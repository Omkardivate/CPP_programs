
#include <iostream>
using namespace std;

int main(int argc,char* argv[])  //argv[][]={"hello","hiii"}
{ 
		cout<<"Argument count: "<<argc<<endl;
		for(int i=0;i<1;i++)
		{
			cout<< "Argument "<<i<<":"<<argv[i]<<endl;
		}
	return 0; 
}
// cd Documents\230945920020_230945920079\Day3\Lab3
// g++ cmd_line_argument1.cpp