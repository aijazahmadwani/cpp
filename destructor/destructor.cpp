/* Author: AIJAZ AHMAD WANI
email: aijazahmad9864@gmail.com
Date:24/ 4/ 2019 */
/*destructor:it should be defined to release resources allocated to an object*/
#include <iostream>
using namespace std;
/* destructor is an instance member function of a class
 destructor takes no argument, no return type (no overloading is possible)
 it is invoked implicitly when the object is going to destroy */
class sample
{
	int a,b;
public:
	sample() 	//constructor
	{
		a = 1;
		b = 2;
	}
	~sample() 	// destructor
	{
		cout <<"a = "<<a<<endl;
		cout <<"b = "<<b<<endl;
	}
};

int main()
{
	sample s; // constructor invoked

} // destructor invoked
