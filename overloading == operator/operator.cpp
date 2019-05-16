/*Author: AIJAZ AHMAD WANI
email: aijazahmad9864@gmail.com
Date: 16/ 5/ 2019
*/
// == operator overloading
#include <iostream>
using namespace std;

class sample
{
	int a;
public:
	void getdata()
	{
		cout<<"Enter data : ";
		cin>>a;
	}
	void operator ==(sample s2)
	{
		if(a==s2.a)
		{
			cout<<"both numbers are equal"<<endl;
		}
		else
			cout<<"Numbers are unequal"<<endl;
	}
};

int main()
{
	sample s1,s2;
	s1.getdata();
	s2.getdata();
	s1==s2;
}