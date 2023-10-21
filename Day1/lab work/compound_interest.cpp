#include <iostream>
#include<math.h>
using namespace std;

int main()
{
	double principal , rate = 5, time = 2;
	
	cout<<"Enter principal amt: ";
	cin>>principal;

	double A = principal * (pow((1 + rate / 100), time));
	
	double CI = A- principal;

	cout << "Compound interest is " << CI;

	return 0;
}

