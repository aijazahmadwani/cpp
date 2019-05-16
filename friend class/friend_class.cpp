/*Author: AIJAZ AHMAD WANI
email: aijazahmad9864@gmail.com
Date: 31/3/2019
*/
#include <iostream>
using namespace std;
class test2;
class test1		//container class
{
private:
	int a,b;
public:
	void getdata()
	{
		cout<<"Enter value of a and b : ";
		cin >>a>>b;
	}
	friend class test2;
};

class test2		//contained class
{
public:
	void putdata(test1 t1)
	{
		cout <<"a = "<<t1.a<<endl;
		cout <<"b = "<<t1.b<<endl;
	}
};

int main()
{
	test1 t1;
	test2 t2;
	t1.getdata();
	t2.putdata(t1);
}