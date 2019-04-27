/*Author: AIJAZ AHMAD WANI
email: aijazahmad9864@gmail.com
Date: 27/ 4/ 2019 */
//use of class
#include <iostream>
using namespace std;

class person
{
private:
	int age;
	char name[20];
public:
	void getdata();
	void display();
};
void person::getdata(void )
{
	cout <<"Enter name : ";
	cin >>name;
	cout <<"Enter age : ";
	cin >>age;
}
void person:: display(void )
{
	cout <<"Name = "<<name << endl;
	cout <<"Age = "<<age << endl;
}

int main()
{
	person p;
	p.getdata();
	p.display();
	return 0;
}