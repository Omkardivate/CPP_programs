#include<iostream>
using namespace std;

int main()
{
	int no=5;
	for (int row = 0; row < no; row++) 
	{
    	for (int col = 0; col < no - row ; col++) //col<5,col<4,col<3,col<2,col<1
		{
      		cout << "*";
    	}
    	cout << endl;
    }
}
