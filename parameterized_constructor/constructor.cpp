/*Author: AIJAZ AHMAD WANI
email: aijazahmad9864@gmail.com
Date: 18/ 4/ 2019
*/
// constructor with default arguments/ parameterized constructor
#include<iostream>
using namespace std;
class test
{
	int a,b,c;
public:
	test (int x=10, int y=20, int z=30)
	{
		a = x;
		b = y;
		c = z;
	}
	void show()
	{
		cout <<a<<"\t"<<b<<"\t"<<c<<endl;
	}
};

int main()
{
	 test t1(1,2,3);
	test t2(11,22);
	test t3(6);
	test t4;
	t1.show();
	t2.show();
	t3.show();
	t4.show();
}