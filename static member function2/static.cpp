/*Author: AIJAZ AHMAD WANI
email: aijazahmad9864@gmail.com
Date: 16/ 5/ 2019
*/
// static member functoin
#include <iostream>
using namespace std;

class sample
{
private:
	static int a,b;	//declaration
public:
	static void getdata()
	{	
		cout<<"Enter two integers : ";
		cin >>a>>b;
		cout<<"a = "<<a<<endl;
		cout<<"b = "<<b<<endl;
	}

};
int sample::a;	//definition
int sample::b;	//definition

int main()
{
	sample s;
	s.getdata();
	sample::getdata();
}