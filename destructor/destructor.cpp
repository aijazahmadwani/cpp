/* Author: AIJAZ AHMAD WANI
email: aijazahmad9864@gmail.com
Date:24/ 4/ 2019 */
//destructor
#include <iostream>
using namespace std;

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