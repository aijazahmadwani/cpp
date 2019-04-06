/*Author: AIJAZ AHMAD WANI
email: aijazahmad9864@gmail.com
Date:6/4/2019
*/
// default values of function arguments
#include <iostream>
using namespace std;
int add (int a=0, int b=0, int c=0); //default values set to 0

int main()
{
	int x,y,z;
	x = add(10,20,30);
	y = add(10,20);
	z = add(10);

	cout << x << endl << y << endl << z;
	return 1;
}

int add (int a, int b, int c)
{
	return (a+b+c);
}