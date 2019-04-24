/*Author: AIJAZ AHMAD WANI
email: aijazahmad9864@gmail.com
Date: 24/ 4/ 2019
*/
// friend function
#include <iostream>
using namespace std;

class sample
{
	int a ,b;
public:
	friend void print(sample);
};
void print(sample s)
{
	s.a = 10;
	s.b = 20;
	cout<<"a = "<<s.a<<endl;
	cout<<"b = "<<s.b<<endl;
}

int main()
{
	sample s;
	print(s);
}