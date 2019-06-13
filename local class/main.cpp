/*Author: AIJAZ AHMAD WANI
email: aijazahmad9864@gmail.com
Date: 13 / 6 / 2019
*/
// local class : when a class is defined inside a function &
//		also its object created inside function

#include <iostream>
using namespace std;
int x= 5;
void fun()
{
	class test
	{
		int x;
	public:
		void show()
		{
			x=100;
			cout<<"Local x = "<<x<<endl;
			cout<<"Global x = "<< ::x << endl;

		}
	};
	test t;
	t.show();
}
int main()
{
	fun();
}