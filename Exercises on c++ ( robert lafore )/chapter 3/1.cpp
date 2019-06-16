/*
Author : Aijaz Ahmad Wani
email : aijazahmad9864@gmail.com
Date : 16 -6- 2019
*/
//chapter 3. Question no. 1 
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	unsigned long number;
	cout <<"Enter a number : ";
	cin >>number;
	int count =0;

		for(int i=1; i<200; i++)
		{
			cout<<setw(5)<<i*number<<" ";
			count++;
			if(count == 10)
			{
				cout<<endl;
				count = 0;
			}

		}
}