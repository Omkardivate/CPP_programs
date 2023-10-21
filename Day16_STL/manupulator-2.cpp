#include <iostream>   
#include <iomanip>
 
using namespace std;
main()
{
 
int number = 100;
 
cout << "Hex Value =" << " " << hex << number << endl;
 
cout << "Octal Value=" << " " << oct << number << endl;
 
cout << "Setbase Value=" << " " << setbase(8) << number << endl;
 
cout << "Setbase Value=" << " " << setbase(16) << number << endl;
 
 
return 0;
 
}
