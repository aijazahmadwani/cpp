/*Author: AIJAZ AHMAD WANI
email: aijazahmad9864@gmail.com
Date: 17/ 4/ 2019
*/
//member function with class type retun value
#include <iostream>
using namespace std;

class test
{
	int a,b;
public:
	
	void getdata();
	void putdata();
	test sum(test);
};
void test::getdata()
{
	cout<<"Enter value of a and b";
	cin >>a>>b;
}
void test::putdata()
{
	cout<<"a = "<<a<<endl;
	cout<<"b = "<<b<<endl;
}
test test::sum(test t2)
{
	test t3;
	t3.a = a + t2.a;
	t3.b = b + t2.b;
	return t3;
}





int main()
{
	test t1,t2,t3;
	t1.getdata();
	t2.getdata();
	t1.putdata();
	t2.putdata();

	t3 = t1.sum(t2); //class type return value
	cout << "t3 object data"<<endl;
	t3.putdata();

	return 0;
}