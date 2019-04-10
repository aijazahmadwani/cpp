/*Author: AIJAZ AHMAD WANI
email: aijazahmad9864@gmail.com
Date: 10 /4 /2019
*/
/*scope resolution operator (::) makes it possible to define the member function 
outside their respective classes*/
#include <iostream>
using namespace std;

class person
{
	int regd_no;
	int age;
	float salary;
public:
	int getregd_no(void); 		// function prototype
 	int getage(void);		// function prototype
 	float getsalary(void);		// function prototype
};
int person :: getregd_no(void)		//definition
{
	
	cout << "Enter regd.no : ";
	cin >> regd_no ;
	return regd_no;
} 
int person :: getage(void)		//definition
{
	
	cout << "Enter age : ";
	cin >> age ;
	return age;	
}
float person :: getsalary(void)		//definition
{

	cout << "Enter salary : ";
	cin >> salary ;	
	return salary;
}

int main()
{
	person p;
	int a,b;
	float c;
	a = p.getregd_no(); 
	cout << "Registration Number = " << a <<endl;
	b = p.getage();
	cout << "age = " << b <<endl;
	c = p.getsalary();
	cout << "salary = " << c <<endl;



}