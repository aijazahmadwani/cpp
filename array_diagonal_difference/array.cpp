/*Author: AIJAZ AHMAD WANI
email: aijazahmad9864@gmail.com
Date: 29/ 4/ 2019
*/
//absolute difference between diagonals sum of an array
#include <iostream>
using namespace std;

int main()
{
	int n,i,j,sumd1=0,sumd2=0,difference;
	cout<<"Enter size of square array : ";
	cin >>n;
	int arr[n][n];
	cout <<"Enter "<<n<<" elements : "<<endl;
	for(i=0; i<n; i++)
	{
		for(j=0;j<n; j++)
		{
			cin>>arr[i][j];
		}
	}

	//processing
	for(i=0; i<n; i++)
	{
		sumd1+=arr[i][i];

	}
	cout <<sumd1<<endl;
	i=0;
	for(j=n-1; j>=0; j--)
	{
		
		sumd2+=arr[i][j];
		i++;
	}
	cout <<sumd2<<endl;
	difference = sumd1-sumd2;
	if(difference<0)
	{
		difference=difference*-1;
	}
	cout<<"Absolute difference = "<<difference<<endl;
} 