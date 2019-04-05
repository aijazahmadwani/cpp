/*Author: AIJAZ AHMAD WANI
email: aijazahmad9864@gmail.com
Date: 5 /4/ 2019
*/
//Reference variable
#include <iostream>
using namespace std;

int main()
{
	int x= 10;
	cout << x << endl;
	int & ptr =x;
	cout << ptr << endl;
	ptr = 20;
	cout << x << endl << ptr << endl;

}