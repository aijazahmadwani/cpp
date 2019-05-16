/*Author: AIJAZ AHMAD WANI
email: aijazahmad9864@gmail.com
Date: 16/ 5/ 2019
*/
//static data member
/*1. It can be accessed by class as well as member functions
2. initialized wit 0
3. declared inside class and defined outside class*/
#include <iostream>
using namespace std;

class test
{

public:
	static int a;	//declared
	void put()
	{
		cout<< "a = "<<a<<endl;
	}
};

int test::a;	//definition

int main()
{
	test t;
	t.put();
	test::a=10;
	cout<<"a = "<<test::a <<endl;//directly accessed by class name
	
}