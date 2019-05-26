/*Aijaz Ahmad Wani
email : aijazahmad9864@gmail.com
Date : 26 -5- 2019*/
// find length of a string / array
#include <iostream>
using namespace std;

int main()
{
	
	string s;
	cout<<"Enter a string : ";
	cin >>s;
	int l= s.length();
	cout <<"Length of string = "<<l<<endl;
///////////////////////////////////////////////////////////////////////////////
	char a[30];
	int i=0;
	 cout<<"Enter char. array : ";
	 cin>>a;
	 int length=0;
	while(a[i]!='\0')
	{
		length++;
		i++;
	}
	cout <<"Lenght of char. Array = "<<length<<endl;
}
