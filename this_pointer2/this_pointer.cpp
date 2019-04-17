/*Author: AIJAZ AHMAD WANI
email: aijazahmad9864@gmail.com
Date:17/ 4/ 2019
*/
//to differentiate between data members and local variables having same name in a class using this pointer
#include<iostream>
using namespace std;

class test
{
	int a,b;
public:
	void putdata(int a,int b)
	{
		this->a = a; 	/*here a = a,both variable names are same ,this pointer differentiates 
				between the local variable of member function and private data member.*/
		this->b = b;
	}
	void showdata()
	{
		cout <<a<<endl;
		cout <<b<<endl;
	}
};
int main()
{
	test t;
	t.putdata(5,9);
	t.showdata();
	return 0;
}

