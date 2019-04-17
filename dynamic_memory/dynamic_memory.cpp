/*Author: AIJAZ AHMAD WANI
email: aijazahmad9864@gmail.com
Date: 15/4/2019
*/
// dynamic memory allocation
#include <iostream>
using namespace std;
 
 int main()
 {
 	int *a;
 	float *b;
 	char *c;
 	a = new int (123);
 	b = new float (3.14);
 	c = new char ('A');

 	cout <<*a <<endl;
 	cout <<*b <<endl;
 	cout <<*c <<endl;
 	return 0; 
 }