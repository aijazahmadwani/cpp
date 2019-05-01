/* Author: AIJAZ AHMAD WANI
email: aijazahmad9864@gmail.com
Date:1/ 5/ 2019 */
//returning a structure
#include <iostream>
using namespace std;

struct distance 
{
	float inches,feet;
};

struct distance add (struct distance ,struct distance );
void display(struct distance);
int main()
{
	struct distance d1,d2,d3;
	cout <<"Distance d1"<<endl;
	cout <<"Enter feet : ";
	cin >>d1.feet;
	cout <<"Enter Inches : ";
	cin >>d1.inches;

	cout <<"Distance d2"<<endl;
	cout <<"Enter feet : ";
	cin >>d2.feet;
	cout <<"Enter Inches : ";
	cin >>d2.inches;

	d3 = add(d1,d2);
	display(d3);
	return 0;
}

void display(struct distance d)
{
	cout <<"Feet = "<<d.feet<<endl;
	cout <<"Inches = "<<d.inches<<endl;
}
struct distance add (struct distance d1,struct distance d2)
{
	struct distance d3;
	d3.feet = 0;
	d3.inches = d1.inches+d2.inches;
	if(d3.inches>=12.0)
	{
		
		d3.inches-=12.0; // decrease inches by 12.0 and 
		d3.feet++;	//increase feet by 1 because i feet = 12.0 inches
	}

	d3.feet = d3.feet+d1.feet + d2.feet; //add feet 

return d3;
}