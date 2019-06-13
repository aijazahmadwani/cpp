/*Author: AIJAZ AHMAD WANI
email: aijazahmad9864@gmail.com
Date: 13 / 6 / 2019
*/
#include <iostream>
using namespace std;

class shape
{
protected:
	float d1,d2;
public:
	void getdata()
	{
		cout<<"Enter data : ";
		cin>>d1>>d2;
	}
	virtual float area() = 0; 	//pure virtual function
};
class triangle : public shape
{
public:
	float area()
	{
		return (0.5*d1*d2);
	}
};
class rectangle : public shape
{
public:
	float area()
	{
		return (d1*d2);
	}
};


int main()
{

	triangle t;
	cout<<"Enter triangle base and height"<<endl;
	t.getdata();
	cout<<"Area of triangle = "<<t.area();

	rectangle r;
	cout<<"Enter rectangle length and breadth"<<endl;
	r.getdata();
	cout<<"Area of rectangle = "<<t.area();
}