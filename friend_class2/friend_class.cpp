/*Author: AIJAZ AHMAD WANI
email: aijazahmad9864@gmail.com
Date: 16/ 5/ 2019
*/
/* COMPOSITION is the process of declaring one class object in another class.
composition allows reusability but not extensibility.*/
#include <iostream>
using namespace std;

class author	//container class
{
	char name[20];
public:
	friend class book;
};

class book	//contained class
{
	float price;
	char book_name[20];
	
public:
	author a;	//composition 
	void getdata()
	{
	cout<<"Enter author name : ";
	cin>> a.name;
	cout<<"Enter book name : ";
	cin>> book_name;
	cout<<"Enter price : ";
	cin>> price;
	}

	void putdata()
	{
		cout <<"Author = "<<a.name<<endl;
		cout <<"Book = "<<book_name<<endl;
		cout <<"Price = "<<price<<endl;
	}

};

int main()
{
	book b;
	b.getdata();
	b.putdata();
}
