/*Author: AIJAZ AHMAD WANI
email: aijazahmad9864@gmail.com
Date:23/ 5/ 2019*/

//models employee  database using inheritance
#include <iostream>
using namespace std;

class employee
{
private:
	char name[40];
	unsigned long number;	//empployee number
public:
	void getdata()
	{
		cout<<"Enter name : ";
		cin>>name;
		cout<<"Enter employee number : ";
		cin>>number;
	}
	void putdata()
	{
		cout<<"Name = "<<name <<endl;
		cout<<"Employee number = "<<number <<endl;
	}
};

class manager : public employee
{
private:
	char title[20];
	int dues;
public:
	void getdata()
	{
		employee::getdata();
		cout<<"Enter title : ";
		cin>>title;
		cout<<"Enter dues : ";
		cin>>dues;
	}
	void putdata()
	{
		employee::putdata();
		cout<<"Title = "<<title <<endl;
		cout<<"Dues = "<<dues <<endl;
	}
};

class scientist : public employee
{
private:
	int publications;
public:
	void getdata()
	{
		employee::getdata();
		cout<<"Enter no. of publications : ";
		cin>>publications;
	}
	void putdata()
	{
		employee::putdata();
		cout<<"No. of publications = "<<publications <<endl;
	}
};

class laborer : public employee
{

};

int main()
{
	manager m1,m2;
	scientist s;
	laborer l;

	// get data for several employees
	cout<<"Enter data for manager 1 "<<endl;
	m1.getdata();
	cout<<"Enter data for manager 2 "<<endl;
	m2.getdata();

	cout<<"Enter data for scientist : " <<endl;
	s.getdata();

	cout<<"Enter data for laborer : "<<endl;
	l.getdata();

	cout<<endl<<endl<<endl<<endl;
	// display data 
	cout<<"Data on manager 1 "<<endl;
	m1.putdata();
	cout<<"Data on manager 2 "<<endl;
	m2.putdata();
	cout<<"Data on scientist "<<endl;
	s.putdata();
	cout<<"Data on laborer "<<endl;
	l.putdata();

	cout<<endl;
	return 0;
}