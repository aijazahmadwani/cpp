/*Author: AIJAZ AHMAD WANI
email: aijazahmad9864@gmail.com
Date: 13 /4 /2019
*/
//using functions without arguments
#include <iostream>
using namespace std;

class stu
{
	int id;
	char name[20];
public:
	void readstu()
	{
		cout <<"Enter student ID : ";
		cin >>id;
		cout <<"Enter Name : ";
		cin >>name;
	}
	void showstu(); //function declaration
};

int main()
{
	class stu s ;
	s.readstu();
	s.showstu();
	return 0;
}
void stu:: showstu()
{
	cout << "ID = " << id << endl;
	cout <<"Name = " << name << endl ;
}