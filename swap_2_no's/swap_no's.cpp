/*Author: AIJAZ AHMAD WANI
email: aijazahmad9864@gmail.com
Date: 10 /4 /2019
*/
// swap two numbers using reference variable
#include <iostream>
void swap(int &, int &);
using namespace std;
int main()
{
	int a ,b;
	cout << "Enter two numbers: ";
	cin >> a >> b;
	swap(a,b);
	cout << "After swapping no.'s are \n";
	cout << a <<endl <<b;
	return 1;
}

void swap(int &x, int &y)
{
	int temp;
	temp = x;
	x = y;
	y = temp;
}