#include <iostream>     
#include <sstream>    
#include <iomanip>     
using namespace std;  
  
int main () {  
  	char a[10], b[10];  
  
	istringstream iss ("Hello \n \t iet");  
	iss >> noskipws;  
	iss >> a >> ws >> b;  
	cout << a << "," << b << '\n';  
  
    cout << setfill ('*') << setw (30);  
    
    cout<<"\n";
    
    cout << "a";    
    cout << "b" << ends;  
	cout << "b" << endl;   
   
  	return 0;  
}  
