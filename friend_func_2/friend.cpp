/*Author: AIJAZ AHMAD WANI
email: aijazahmad9864@gmail.com
Date: 24/ 4/ 2019
*/
// friend function can become friend to more than one class
#include <iostream>
using namespace std;
class test2;
class test1
{
	int a;
public:
	void geta()
	{
		cout <<"Enter value of a ";
		cin >>a;
	}
	friend void compare(test1,test2);

};

class test2
{
	int b;
public:
	void getb()
	{
		cout <<"Enter value of b ";
		cin>>b;
	}
	friend void compare(test1,test2);

};

void compare( test1 y,test2 z)
{
	if(y.a>z.b)
	{
		cout <<"a is big";
	}
	else if(z.b>y.a)
	{
		cout <<"b is big";
	}
	else
		cout <<"Both are same";
}

int main()
{
	test1 t1;
	test2 t2;
	t1.geta();
	t2.getb();
	compare(t1,t2);
}
