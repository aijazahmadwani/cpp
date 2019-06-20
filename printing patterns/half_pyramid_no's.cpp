/*
Author : Aijaz Ahmad Wani
email : aijazahmad9864@gmail.com
Date : 20 -6- 2019
*/
// program to print half pyramid using numbers

#include <iostream>
using namespace std;

int main()
{
	int rows;
	cout<<"Enter number of rows : ";
	cin >>rows;
	for(int i=1; i<=rows; i++)
	{
		for(int j=1; j<=i; j++)
		{
			cout<<j<<" ";
		}
		cout<<endl;
	}
} 