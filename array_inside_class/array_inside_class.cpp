/*Author: AIJAZ AHMAD WANI
email: aijazahmad9864@gmail.com
Date:18/ 4/ 2019*/
//using array inside class
#include <iostream>
using namespace std;

class stu
{
	int id;
	char name[30];
	int subject[5];
public:
	void getstu()
	{
		int i;
		cout <<"Enter ID, Name : ";
		cin>>id>>name;
		cout <<"Enter 5 subject marks : "<<endl;
		for( i=0; i<5; i++ )
			cin>>subject[i];


	}
	void result()
	{
		int i,total=0;
		float average;
		for( i=0; i<5; i++ )
		{
			total = total + subject[i];
		}
		average = total / 5.0;
		cout <<"Total = "<<total<<endl;
		cout <<"Average = "<<average <<endl;

		for( i=0; i<5; i++ )
		{
			if(subject[i]<35)
			{
				cout<<"Fail"<<endl;
				exit(0);
			}

		}
		cout <<"Pass"<<endl;
	}

};
int main()
{
	stu s;
	s.getstu();
	s.result();
	return 0;

}