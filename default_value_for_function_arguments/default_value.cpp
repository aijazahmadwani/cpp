/*Author: AIJAZ AHMAD WANI
email: aijazahmad9864@gmail.com
Date:6/4/2019
*/
//default values for function arguments
#include <iostream>
using namespace std;

int add(int a,int b,int c=0);
int main()
{
	int x,y;
	x = add(10,20,30);
	y = add(10,20);
	cout<< x << endl << y;
	return 1;
}

int add (int a,int b ,int c)
{
	return (a+b+c);
}