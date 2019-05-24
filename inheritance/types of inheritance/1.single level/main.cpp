/*Author: AIJAZ AHMAD WANI
email: aijazahmad9864@gmail.com
Date: 24/ 5/ 2019
*/
//single level inheritance
#include <iostream>
using namespace std;

class student 	// base class
{
	private:

		int id;
		char name[20];
	public:
		void getstu()
		{
			cout <<"Enter ID : "<<endl;
			cin>> id;
			cout <<"Enter Name : "<<endl;
			cin >>name;
		}
		void putstu()
		{
			cout <<"ID = "<<id <<endl;
			cout <<"Name = "<<name <<endl;
		}
	
};
class phy : public student	// derived class
{
private:
	float height,weight;
public:
	void getphy()
	{
		cout <<"Enter Height : "<<endl;
		cin>>height;
		cout<<"Enter Weight : "<<endl;
		cin >>weight;
	}
	void putphy()
	{
		cout <<"Height = "<<height<<endl;
		cout <<"Weight = "<<weight<<endl;
	}
};

int main()
{
	phy p;	//derived clas object

	p.getstu();
	p.getphy();
	p.putstu();
	p.putphy();
}