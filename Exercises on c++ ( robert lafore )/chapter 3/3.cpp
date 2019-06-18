/*
Author : Aijaz Ahmad Wani
email : aijazahmad9864@gmail.com
Date : 18 -6- 2019
*/
//chapter 3. Question no. 3
#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std; 
int main()
{
	long result=0;
	int n;
	while((n=getche())!='\n')
	{
		result = result * 10 + n - 48;
	}
	cout<<"Number = "<<result<<endl;
}

