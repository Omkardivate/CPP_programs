#include<iostream>
using namespace std;
#include <bits/stdc++.h>

class Test
{
	public:
		void sort_array(int arr[],int n)
		{
    		sort(arr, arr+n);
 
    		cout << "\nArray after sorting using default sort is : \n";
    		
			for (int i = 0; i < n; ++i)
        		cout << arr[i] << " ";
		}
};
int main()
{
	int size;
	
	cout<<"Enter size of array:";
	cin>>size;
	int arr[size];
	
	for(int i=0;i<size;i++)  //accepting array
	{
		cin>>arr[i];
	}
	
    Test t;
    t.sort_array(arr,size);
 
    return 0;
}
