/*Author: AIJAZ AHMAD WANI
email: aijazahmad9864@gmail.com
Date: 25/ 5/ 2019
*/
// hybrid inheritance or multi-path inheritance
// -> derive classes by using more than one inheritance model
#include <iostream>
using namespace std;

class stu
{
private:
	int id;
	char name[20];
public:
	void getstu()
	{
		cout<<"Enter ID and Name : ";
		cin>>id>>name;
	}
};
class marks : public stu
{
protected:
	int m1,m2,m3;
public:
	void getmarks()
	{
		cout<<"Enter marks in 3 subjects : ";
		cin>>m1>>m2>>m3;
	}
};

class sports
{
protected:
	int spmarks;
public:
	void getspmarks()
	{
		cout<<"Enter sports marks : ";
		cin>>spmarks;
	}
};

class result :public marks,public sports
{
private:
	int total;
	float avg;
public:
	void show()
	{
		total=m1+m2+m3;
		avg=total / 3.0;
		cout<<"Total = "<<total<<endl;
		cout<<"Average = "<<avg<<endl;
		cout<<"Average + sports marks = "<<avg+spmarks <<endl ;
	}
};

int main()
{
	result r;
	r.getstu();
	r.getmarks();
	r.getspmarks();
	r.show();
}