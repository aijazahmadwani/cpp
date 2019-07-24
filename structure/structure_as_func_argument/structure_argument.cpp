/*Author: AIJAZ AHMAD WANI
email: aijazahmad9864@gmail.com
Date: 1/ 5/ 2019
*/
// demonstrates passing structure as argument

#include <iostream>
using namespace std;


struct distance 
{
	int feet;
	float inches;
	
};
void display(struct distance);	
int main()
{
	struct distance d1,d2;
	cout <<"Enter feet : ";
	cin >>d1.feet;
	cout <<"Enter inches : ";
	cin >>d1.inches;

	cout <<"Enter feet : ";
	cin >>d2.feet;
	cout <<"Enter inches : ";
	cin >>d2.inches;

	display(d1);
	display(d2);
	return 0;
}

void display(struct distance d)
{
	cout <<"Feet = " <<d.feet<<endl;
	cout <<"Inches = " <<d.inches<<endl;
}