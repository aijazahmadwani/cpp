/*Aijaz Ahmad Wani
email : aijazahmad9864@gmail.com
Date : 26 -5- 2019*/
// to check whether a string is a palindrome or not
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int flag=0;
	string a;
	string r;
	cout <<"Enter a string : ";
	cin>>a;
	int length = a.length();
	int j=0;
	for(int i=length-1; i>=0; i--)
	{
		r[j]=a[i];
		j++;
	}

	for(int i=0; i<length; i++)
	{
		if(r[i]!=a[i])
		{
			flag++;
		}
	}
	
	if(flag == 0 )
	{
		cout<<"Entered string is palindrome"<<endl;
	}
	else
	{
		cout<<"Entered string is not palindrome "<< endl;
	}
	
}