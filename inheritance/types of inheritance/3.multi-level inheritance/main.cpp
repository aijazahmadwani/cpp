/*Author: AIJAZ AHMAD WANI
email: aijazahmad9864@gmail.com
Date: 25/ 5/ 2019
*/
// multi-level inheritance

#include <iostream>
using namespace std;
class student
{
private:
	int id;
	char name[20];
public:
	void getstudent()
	{
		cout<<"Enter student id and name : ";
		cin>>id>>name;
	}
	void putstudent()
	{
		cout<<"Id = "<<id <<endl <<"Name = "<<name <<endl;
	}
};

class marks : public student
{
protected:
	int m1,m2,m3;
public:
	void getmarks()
	{
		cout<<"Enter marks in 3 subjects : ";
		cin>>m1>>m2>>m3;
	}
	void putmarks()
	{
		cout<<"Marks in m1 = "<<m1<< endl;
		cout<<"Marks in m2 = "<<m2<< endl;
		cout<<"Marks in m3 = "<<m3<< endl;
	}

};
class result : public marks
{
private:
	float avg;
	int total;
public:
	void show()
	{
		total= m1+m2+m3;
		avg=total/3.0;
		cout<<"Total marks = "<<total<<endl<<"Average = "<<avg<<endl;
	}

};

int main()
{
	result r;
	r.getstudent();
	r.getmarks();
	r.putstudent();
	r.putmarks();
	r.show();
}