/*Author: AIJAZ AHMAD WANI
email: aijazahmad9864@gmail.com
Date:18/ 4/ 2019*/
// accessing private member functions
#include <iostream>
using namespace std;

class emp
{
	int id;
	char name[30];
	float sal;
	void getemp()
	{
		cout<<"Enter ID,NAME & SALARY : ";
		cin >>id>>name>>sal;
	}
public:
	void putemp()
	{
		getemp(); // calling private member function
		cout <<"you entered :"<<endl;
		cout<<id<<endl<<name<<endl<<sal<<endl;
	}

};

int main()
{
	emp e;
	e.putemp();
}