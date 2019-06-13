/*Author: AIJAZ AHMAD WANI
email: aijazahmad9864@gmail.com
Date: 12/ 6/ 2019
*/
// parameterized constructors in inheritance

#include <iostream>
#include <cstring>
using namespace std;

class student
{
private:
	char name[100];
	char course[100];
public:
	student(char *n,char *c)
	{
		name=n
		course=c;
	}
	void showstudent()
	{
		cout<<"Name = "<<name<<endl;
		cout<<"Course = "<<course<<endl;
	}
};

class marks : public student
{
private:
	int math,che,phy;
public:
	marks(char* n,char c*,int math,int che,int phy)
	{
		student::student(*n,*c);
		this->math=math;
		this->che=che;
		this->phy=phy;
	}
	void show()
	{
		cout<<"Math = "<<math;
		cout<<"Chemistry = "<<che;
		cout<<"Physics = "<<phy;
	}
};

int main()
{
	marks m("AIJAZ","IMCA",100,99,80);
	m.showstudent();
	m.show();

}