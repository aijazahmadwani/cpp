/*Author: AIJAZ AHMAD WANI
email: aijazahmad9864@gmail.com
Date: 16/ 5/ 2019
*/
//adding two strings using operator overloading ( + )
#include <iostream>
#include <string.h>
using namespace std;

class sample
{
	char s[200];
public:
	void getdata()
	{
		cout <<"Enter string : ";
		cin >>s;
	}
	sample operator + (sample s2)
	{
		sample s3;
		strcpy(s3.s,s);
		strcat(s3.s," ");
		strcat(s3.s,s2.s);
	return s3;
	}
	void show()
	{
		cout<<"String = " <<s;
	}

};

int main()
{
	sample s1,s2,s3;
	s1.getdata();
	s2.getdata();
	s3 = s1+s2;
	s3.show();

}