/*Author: AIJAZ AHMAD WANI
email: aijazahmad9864@gmail.com
Date: 12/ 6/ 2019
*/

//destructors in inheritance
#include <iostream>
using namespace std;

class base 
{
public:
	~base()
	{
		cout<<"Base class destructor"<<endl;
	}

};

class der : public base
{
public:
	~der()
	{
		cout<<"Derived class destructor"<<endl;
	}
};

int main()
{
	der d;	// first derived class destructor is executed then the base class destructor is executed.
	return 1;
}
