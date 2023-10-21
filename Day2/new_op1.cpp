#include<iostream>
using namespace std;

int main()
{
	
	int* int_ptr= new int(10);
	cout<< *int_ptr<<endl;
	
	char* char_ptr= new char('A');
	cout<< *char_ptr<<endl;
	
	float* float_ptr= new float(11.5);
	cout<< *float_ptr<<endl;
	
	double* double_ptr= new double(75.631);
	cout<< *double_ptr<<endl;
	
	char* char_arr= new char[10];
	cout<<"enter name: ";
	cin>> char_arr;
	cout<< char_arr<<endl;
	
	delete int_ptr;
	delete char_ptr;
	delete float_ptr;
	delete double_ptr;
	delete[] char_arr;
}
