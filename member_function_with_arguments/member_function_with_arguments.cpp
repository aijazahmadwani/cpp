/*Author: AIJAZ AHMAD WANI
email: aijazahmad9864@gmail.com
Date:13/3/2019
*/
// member functions with arguments
#include <string.h>
#include <iostream>
using namespace std;

class emp
{
	int id;
	string name;
	float sal;
public:
	void getemp(int ,string ,float );
	void putemp();
};

void emp :: getemp(int i,string n,float s)
{
	id = i;
	name = n;
	sal = s; 
}

void emp:: putemp()
{
	cout <<"ID = " <<id<< endl;
	cout <<"Name = " <<name<< endl;
	cout <<"salary = " <<sal<< endl;
}

int main()
{
	emp e;
	e.getemp(18600006,"AIJAZ",1800.50);
	e.putemp();
	return 0;

} 