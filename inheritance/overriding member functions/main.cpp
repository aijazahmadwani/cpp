/*Author: AIJAZ AHMAD WANI
email: aijazahmad9864@gmail.com
Date:20/ 5/ 2019*/
//overloading functions in base and derived classes

/* overriding member functions means when we use member functions in derived class
 that override - i.e., have the same name as  those in the base class ,also have same signatures - also
                called method overriding*/
// if same function exists in base and derived class ,but with different signatures,it is called method hiding
/* Rule: when the same function exists in both the base class and the derived class,the
function in the derived class will be executed. (this is true of objects of the derived class.objects
of the base class don't know anything about the derived class & will always use the base class
functions.*/
#include <iostream>
#define max 5
using namespace std;

class stack
{
protected:
	int top;
	int ar[max];
public:
	stack()		//constructor
	{
		top = -1;
	}
	void push(int n)
	{
		top++;
		ar[top] = n;
		cout<<n<<" pushed successfully"<<endl;
	}

	int pop()
	{
		return ar[top--];

	}
};

class stack2 : public stack
{
public:
	void push(int n)
	{
		if(top==max-1)
		{
			cout<<"Stack is Full"<<endl;
			exit(1);
		}
		else
		{
			stack :: push(n);
		}
	}
	int pop()
	{
		if(top==-1)
		{
			cout<<"Stack is empty"<<endl;
			exit(1);
		}
		return stack::pop();

	}
};

int main()
{
	stack2 s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);



	cout<<endl<<s.pop();
	cout<<endl<<s.pop();
	cout<<endl<<s.pop();
	cout<<endl<<s.pop();
	cout<<endl<<s.pop();
}
