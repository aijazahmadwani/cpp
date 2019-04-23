/*Author: AIJAZ AHMAD WANI
email: aijazahmad9864@gmail.com
Date: 23/ 4/ 2019
*/
//calling one constructor within other constructor
#include <iostream>
#include <string>
using namespace std;

class stu
{
	string name,course;
	float fee;
public:
	stu(string n,string c)
	{
		name=n;
		course=c;
		fee = 0;
	}
	stu(string na,string cu,float f):stu(na,cu)
	{
	
	 fee = f;
	}
	void display()
	{
		cout <<"Name = "<<name<<endl<<"Course = "<<course<<endl;
		cout <<"Fee= "<<fee<<endl;
	}
	
};

int main()
{
	stu s1("aijaz","CPP");
	s1.display();
	stu s2("amir","CPP",4000);
	s2.display();
}

