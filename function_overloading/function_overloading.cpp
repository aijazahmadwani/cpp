/*Author: AIJAZ AHMAD WANI
email: aijazahmad9864@gmail.com
Date: 6/4/2019
*/
//function overloading/polymorphism :2 or more functions to have same name
#include <iostream>
using namespace std;
int add (int,int);
int add (int,int,int);
int add (int,int,int,int);

int main()
{
	int a,b,c;
	a=add(1,2);
	b=add(10,20,30);
	c=add(2,4,6,8);
	cout << a << endl << b << endl << c << endl;
	return 1;
}
int add (int a,int b )
{
	return (a+b);
}
int add (int a ,int b,int c)
{
	return (a+b+c);
}

int add (int a,int b,int c, int d)
{
	return (a+b+c+d);
}