/*Author: AIJAZ AHMAD WANI
email: aijazahmad9864@gmail.com
Date: 13 / 6 / 2019
*/
#include <iostream>
using namespace std;

class base 
{
public:
	base()
	{
		cout<<"Base class constructor"<<endl;
	}
	virtual ~base()		//destructor
	{
		cout<<"Base class destructor"<<endl;
	}
};

class der : public base
{
public:
	der()
	{
		cout<<"Derived class constructor"<<endl;

	}
	~der()
	{
		cout<<"Derived class destructor"<<endl;
	}
};

int main()
{
	base *b = new der;
	delete b;
}