/*Author: AIJAZ AHMAD WANI
email: aijazahmad9864@gmail.com
Date:18/ 4/ 2019*/
//array of objects
#include <iostream>
using namespace std;

class stu
{
	int id;
	char name[20];
public:
	void getstu();
	void putstu();
};
void stu::getstu()
{
	cout<<"Enter student id :";
	cin>>id;
	cout <<"Enter name: ";
	cin >>name;
}
void stu::putstu()
{
	cout<<id<<"\t"<<name<<endl;
	
}

int main()
{
	int n,i;
	stu s[60]; // array of objects
	cout<<"Enter no. of students (1-60) : ";
	cin >>n;
	cout<<"Enter "<<n<<" students detail :"<<endl;
	for( i=0; i<n; i++ )
	{
		s[i].getstu();
	} 
	cout<<"You entered following details :"<<endl;
	for( i=0; i<n; i++ )
	{
		s[i].putstu();
	}
}