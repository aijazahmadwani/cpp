/*Author: AIJAZ AHMAD WANI
email: aijazahmad9864@gmail.com
Date:13/3/2019
*/
// member function with arguments and return values
#include<iostream>
using namespace std;

class data
{
	int a,b;
public:
	void readdata(int x,int y)
	{
		a = x;
		b = y;
	}
	void showdata()
	{
		cout << "A = " <<a <<endl;
		cout << "B = " <<b <<endl;

	}
	int  big()
	{
		if(a>b)
			return a;
		else
			return b;
	}
};

int main()
{
	int max;
	data d;
	d.readdata(5,88);
	d.showdata();
	max = d.big();
	cout << "Maximum no. = " <<max <<endl;
}
