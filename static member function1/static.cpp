/*Author: AIJAZ AHMAD WANI
email: aijazahmad9864@gmail.com
Date: 16/ 5/ 2019
*/
// static member function : are used to deal static data members,they never work with non-static data members  
#include <iostream>
using namespace std;

class test
{
public:
	static void read(int x,int y)
	{
		if(x>y)
			cout <<"x is big"<<endl;
		else if(y>x)
			cout <<"Y is big"<<endl;
		else
			cout <<"Both are equal"<<endl;
	}
};
int main()
{
	test t;
	t.read(10,20);
	test::read(30,30);	//directly called by class name
	test::read(101,22);
}