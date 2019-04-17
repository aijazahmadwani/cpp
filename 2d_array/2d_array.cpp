/*Author: AIJAZ AHMAD WANI
email: aijazahmad9864@gmail.com
Date: 15/ 4/ 2019
*/
//two dimentional array using dynamic memory allocation 
#include <iostream>
using namespace std;
int main()
{
	int **p;
	int nc,nr,r,c;
	cout <<"Enter no. of rows : ";
	cin >>nr;
	cout <<"Enter no. of columns : ";
	cin >>nc;
	p = new int [nr];
	for( i=0; i<nr; i++ )
	{
		p[r] = new int [nc];
	}
	return 0;
}