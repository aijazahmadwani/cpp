/*
Author : Aijaz Ahmad Wani
email : aijazahmad9864@gmail.com
Date : 16 -6- 2019
*/
//chapter 3. Question no. 2
// temperature convertion program
#include <iostream>
using namespace std; 
void fah_to_cel(void);
void cel_to_fah(void);

int main()
{
	int choice;
	cout<<"Type 1 to convert Fahrenheit to Celsius"<<endl;
	cout<<"2 to convert Celsius to Fahrenheit"<<endl;
	cin >>choice;
	switch(choice)
	{
		case 1:
			fah_to_cel();
			break;
		case 2:
			cel_to_fah();
			break;
		default:
			cout<<"Invalid choice ";
			exit(3);
	}
}

void fah_to_cel(void)
{
	double Fahrenheit;
	cout <<"Enter temperature in Fahrenheit : ";
	cin >>Fahrenheit;
	cout<<"In Celsius that's  "<<(Fahrenheit-32.0)*(5.0/9.0);
}

void cel_to_fah(void)
{
	double Celsius;
	cout <<"Enter temperature in Celsius : ";
	cin >>Celsius;
	cout<<"In Fahrenheit that's "<<(Celsius*9.0/5.0)+32.0;
}