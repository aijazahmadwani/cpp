/*Author: AIJAZ AHMAD WANI
email: aijazahmad9864@gmail.com
Date: 15/4/2019
*/
//one dimentional array using dynamic memory

#include <iostream>
using namespace std;
 
 int main()
 {
 	int n,i;
 	int *p;
 	cout << "Enter size of array : ";
 	cin >>n;
 	p = new int [n];

 	cout <<"Enter " <<n<< " elements : ";
 	for( i=0; i<n; i++ )
 	{
 		cin >> p[i];
 	}

 	cout <<"Entered elements are :\n";
 	for( i=0; i<n; i++ )
 	{
 		cout << p[i] <<endl;
 	}

 	return 0;
 }