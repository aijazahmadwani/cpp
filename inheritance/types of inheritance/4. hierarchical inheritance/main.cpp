/*Author: AIJAZ AHMAD WANI
email: aijazahmad9864@gmail.com
Date: 25/ 5/ 2019
*/
// hierarchical inheritance 
#include <iostream>
using namespace std;

class account
{
	private:
		int ac_no;
		char name[20];
	public:
		void getacc()
		{
			cout<<"Enter account no and name : ";
			cin>>ac_no>>name;
		}
		
};
class savings : public account
{
private:
	float bal;
public:
	void getbal()
	{
		cout<<"Enter balance : ";
		cin>>bal;
		if(bal<500)
		{
			cout<<"Minimum balance 500"<<endl;
		}
		else
		{
			cout<<"Account created"<<endl;
		}
	}
};
class current : public account
{
private:
	float bal;
public:
	void getbal()
	{
		cout<<"Enter balance : ";
		cin>>bal;
		if(bal<1000)
		{
			cout<<"Minimum balance 1000"<<endl;
		}
		else
		{
			cout<<"Account created"<<endl;
		}
	}
};

int main()
{
	int choice;
	cout<<"1. savings account "<<endl;
	cout<<"2. current account "<<endl;
	cout<<"Enter your choice "<<endl;
	cin>>choice;
	if(choice==1)
	{
		savings s;
		s.getacc();
		s.getbal();
		
	}
	else if (choice==2)
	{
		current c;
		c.getacc();
		c.getbal();
		
	}
	else
	{
		printf("Invalid choice \n\n");
	}
}