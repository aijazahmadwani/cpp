/*Author: AIJAZ AHMAD WANI
email: aijazahmad9864@gmail.com
Date: 16/ 5/ 2019
*/
// operator overloading of unary operator
#include <iostream>
using namespace std;

class sample
{
	int a;
public:
	sample()
	{
		
		a=0;
	}
	void operator++()
	{
		a++;
	}
	void operator--()
	{
		a--;
	}
	void show()
	{
		cout <<"a = "<<a <<endl;
	}
};

int main()
{
	sample s1;
	
	++s1;
	s1.show();
	++s1;
	s1.show();
	++s1;
	s1.show();
	
	--s1;
	s1.show();
}