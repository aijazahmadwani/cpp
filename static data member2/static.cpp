/*Author: AIJAZ AHMAD WANI
email: aijazahmad9864@gmail.com
Date: 16/ 5/ 2019
*/
// static data member
#include <iostream>
using namespace std;

class test
{
	static int count;	//declaration
public:
	test()	//costructor
	{
		count++;
		cout<<count<<" Object created"<< endl;
	}
	~test()	//destructor
	{
		cout<<count<<" Object deleted"<<endl;
		count--;
	}
};
int test::count;	//definition
int main()
{
	test t1,t2,t3;

}