/*Author: AIJAZ AHMAD WANI
email: aijazahmad9864@gmail.com
Date: 28/ 4/ 2019 */
// print prime number till 100
#include <iostream>
using namespace std;

void prime(int);
int main()
{
	int n=2;
	while(n<=100)
	{
		prime(n);
		n++;	
	}
	return 0;
		
} 
void prime (int n)
{
	int i=2;
	while(i<n)
	{
		if(n%i==0)
			return;
		
	i++;
	}
	if(i==n)
	{
		cout <<n <<endl;
	}
}