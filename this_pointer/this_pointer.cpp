/*Author: AIJAZ AHMAD WANI
email: aijazahmad9864@gmail.com
Date:17/ 4/ 2019
*/
// to print current object address
#include <iostream>
using namespace std;
class test
{
	int a,b;
public:
	void showdata()
	{
		a = 10;
		b = 20;
		cout << "Object Address = "<<this << endl;// return current object address in hexadecimal form
		cout<<"a = "<< a << endl; 	//10
		cout<<"b = "<< b << endl; 	//20
		cout<<"a = "<< this->a << endl;	//10
		cout<<"b = "<< this->b << endl;	//20
	}
};
int main()
{
	test t;
	t.showdata();
	return 0;
}
