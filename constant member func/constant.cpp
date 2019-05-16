/*Author: AIJAZ AHMAD WANI
email: aijazahmad9864@gmail.com
Date:16/ 5/ 2019*/
//constant member functions

#include <iostream>
using namespace std;

class test
{
	int a,b;
public:
	void read()	//modifier // it can change value of data mambers
	{
		a=10;
		b=20;
	}
	void show() const 	//accessor // it only access members because it is constant and cannot change them
	{
		//a=30;
		//b=11;
		cout<<"A="<<a<<endl<<"b="<<b<<endl;
	}
};
int main()
{
	test t;
	t.read();
	t.show();
}