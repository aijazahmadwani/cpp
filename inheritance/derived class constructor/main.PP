/*Author: AIJAZ AHMAD WANI
email: aijazahmad9864@gmail.com
Date: 19/ 5/ 2019
*/
// constructors in derived class

#include <iostream>
using namespace std;
class counter		//base class
{
protected:
	unsigned int count;
public:
	counter() : count()	//no argument constructor
	{

	}
	counter(int c) : count(c)	// 1 argument constructor
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
	countDn() : counter()
	{

	}
	countDn(int  c): counter (c)
	{

	}
	counter operator --()		// decrement count (prefix)
	{
		return counter(--count);
	}
};

int main()
{
	countDn c1;
	countDn c2(100);

	cout <<"\nc1 = "<<c1.get_count();
	cout <<"\nc2 = "<<c2.get_count();

	++c1;	++c1;	++c1;
	cout <<"\nc1 = "<<c1.get_count();

	--c2;	--c2;
	cout <<"\nc2 = "<<c2.get_count();

	countDn c3;
	cout <<"\nc3 = "<<c3.get_count();
	cout <<endl;
	return 0;
}