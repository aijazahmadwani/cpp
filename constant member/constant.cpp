/*Author: AIJAZ AHMAD WANI
email: aijazahmad9864@gmail.com
Date: 16/ 5/ 2019
*/
//constant members in a class
#include <iostream>
using namespace std;

class si
{
	float p;
	const float r;
	int t;
public:
	si():r(2.5)
	{
			
	}
	void read (float pa,int ti)
	{
		p = pa;
		t = ti;
	}
	float show()
	{
		return ((p*r*t)/100);
	}
};

int main()
{
	si s;
	s.read(1000,10);
	cout<<"Simple Interest = "<<s.show() <<endl;
}