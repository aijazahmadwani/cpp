/*Author: AIJAZ AHMAD WANI
email: aijazahmad9864@gmail.com
Date: 19/ 5/ 2019
*/
#include <iostream>
using namespace std;

class counter		//base class
{
protected:
	unsigned int count;
public:
	counter():count()	//no argument constructor
	{

	}
	counter(int c):count(c)	// 1 argument constructor
	{

	}
	unsigned int get_count() const 	//return count
	{
		return count;
	}
	counter operator ++ ()	//increment count (prefix)
	{
		return counter(++count);
	}
};

class countDn : public counter	// derived class
{
public:
	counter operator --()		// decrement count (prefix)
	{
		return counter(--count);
	}
};

int main()
{
	countDn c1;	//initialized to 0 ,becoz there is no constructor in countDn class , so  so the compiler uses "no argument constructor "
			// of base class & initializes it to 0.
	cout <<"\nc1 = "<<c1.get_count();

	++c1;	++c1;	++c1;	// increment c1 3 times

	cout<<"\nc1 = "<<c1.get_count();

	--c1;	--c1;	// decrement 2 times
	cout <<"\nc1 = "<<c1.get_count();
	cout<<endl;
	return 0;
}