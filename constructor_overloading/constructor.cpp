/*Author: AIJAZ AHMAD WANI
email: aijazahmad9864@gmail.com
Date:23/ 4/ 2019*/
/* constructor overloading : declaring more than one 
constructor within same class having different signatures*/
#include<iostream>
using namespace std;
class circle
{
	float r;
public:
	circle() //default constructor
	{
		r = 5; 
	}
	circle(float s)
	{
		r = s;
	}
	void area()
	{
		cout <<"Area of Circle = "<<3.14*r*r<<endl;
	}
};

int main()
{
	circle s1;
	circle s2(3);
	s1.area();
	s2.area();
	return 0;
}