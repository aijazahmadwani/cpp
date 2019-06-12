/*Author: AIJAZ AHMAD WANI
email: aijazahmad9864@gmail.com
Date: 19/ 5/ 2019*/

// constructors in inheritance 

#include <iostream>
using namespace std;

class base 
{
public:
	base()
	{
		cout<<"Base class constructor "<<endl;
	}
};

class der : public base
{
public:
	der()
	{
		cout<<"Derived class constructor"<<endl;
	}
};

int main()
{
	der d;	// first base constructor is executed and later derived class constructor.
	return 0;
}
