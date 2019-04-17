/*Author: AIJAZ AHMAD WANI
email: aijazahmad9864@gmail.com
Date: 17/ 4/ 2019
*/
// passing class type parameters to member functions

#include <iostream>
using namespace std;

class sample
{
	int a;
public:
	void geta()
	{
		cout <<"Enter value  :";
		cin >>a;
	}
	void puta()
	{
		cout <<"A = "<<a<<endl;
	}

	void big(sample s2)
	{	
		if(a>s2.a)
			cout<<a<<" is big"<<endl;
		else if(s2.a>a)
			cout<<s2.a<<" is big"<<endl;
		else
			cout <<"both are equal"<<endl;
		
	}

};
int main()
{
	sample s1,s2;
	s1.geta();
	s2.geta();
	s1.puta();
	s2.puta();

	s1.big(s2);
}