/*Author: AIJAZ AHMAD WANI
email: aijazahmad9864@gmail.com
Date: 23/ 4/ 2019
*/
//copy constructor
#include <iostream>
using namespace std;

class sample

{
	int a,b;
public:
	sample(int a,int b)	//parameterized constructor
	{
		this->a = a;
		this->b = b;
	}

sample (sample &old)	//copy constructor (here we have reference type parameter)
{
	a = old.a;
	b = old.b;

}
void print()
{
	cout <<a<<endl;
	cout <<b<<endl;
}
};

int main()
{
	sample s1(10,20);	//invokes parameterized constructor
	sample s2(s1);
	s1.print();
	s2.print();

}
