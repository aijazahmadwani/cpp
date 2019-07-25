/*Author: AIJAZ AHMAD WANI
email: aijazahmad9864@gmail.com
Date: 17/ 5/ 2019
*/
//operator overloading using friend function
#include <iostream>
using namespace std;
class test2;
class test1
{
	int  a;
public:
	void geta()
	{
		cout << "Enter a : ";
		cin >>a;
	}
	friend void operator >(test1,test2);
};
class test2
{
	int  b;
public:
	void getb()
	{
		cout << "Enter b : ";
		cin >>b;

	}
	friend void operator >(test1,test2);
};

void operator > (test1 t1,test2 t2)
{
	if(t1.a>t2.b)
		cout<<"a is greater than b ";
	else if (t2.b>t1.a)
		cout<<"b is greater than a";
	else
		cout<<"Both are equal";
}

int main()
{
	test1 t1;
	test2 t2;
	t1.geta();
	t2.getb();
	t1>t2;
}
