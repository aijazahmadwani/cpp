/*Author: AIJAZ AHMAD WANI
email: aijazahmad9864@gmail.com
Date:18/ 4/ 2019*/
// default consructor
#include <iostream>
using namespace std;

class test 
{
	int a ,b;
public:
	test()
	{
		a=10;
		b=20;
		cout <<"constructor"<<endl;
		cout <<a<<endl<<b<<endl;
	}
	
};

int main()
{
	test t; //here constructor is called automatically
	
}