/*
Author : Aijaz Ahmad Wani
email : aijazahmad9864@gmail.com
Date : 18 -6- 2019
*/
//chapter 3. Question no. 4
#include <iostream>
using namespace std; 

int main()
{
	char choice;
	do
	{
	
	float num1,num2,result=0;
	char ch;
	cout<<"Enter first number, operator, second number : ";
	cin>>num1>>ch>>num2;

	switch(ch)
	{
		case '+':
			result = num1+num2;
			break;
		case '-':
			result = num1-num2;
			break;
		case '*':
			result = num1*num2;
			break;
		case '/':
			result = num1/num2;
			break;
		default:
		cout<<"Invalid Input.....Try again"<<endl;

	}
	cout<<"Answer = "<<result<<endl;
	cout<<"Do another (y / n) : ";
	cin>>choice;
	}while(choice=='y'||choice=='Y');

}