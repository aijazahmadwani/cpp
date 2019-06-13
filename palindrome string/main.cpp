/*Aijaz Ahmad Wani
email : aijazahmad9864@gmail.com
Date : 26 -5- 2019*/
// to check whether a string is a palindrome or not
#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

int main()
{
	string a;
	cout <<"Enter a string : ";
	cin>>a;
	int length = a.length();
	for(int i=0; i<length; i++)
	{
		if(a[i]!=a[length-1-i]){
            cout<<"Entered string is not palindrome"<<endl;
            getch();
            return 0;
		}
	}
    cout<<"Entered string is palindrome "<< endl;
	getch();

}
