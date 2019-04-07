/*Author: AIJAZ AHMAD WANI
email: aijazahmad9864@gmail.com
Date:6/4/2019
*/
//inline functions
#include <iostream>
using namespace std;

inline double cube (double x){return (x*x*x);} 
int main()
{
	double a,b,c=13.0;
	a = cube(5.0);
	b = cube(4.5 + 7.5);
	cout<<a<<endl;
	cout<<b<<endl;
	cout<<cube(c++)<<endl;
	cout<<c<<endl;
	return 1;
}