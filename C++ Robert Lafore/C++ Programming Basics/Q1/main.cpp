/*
Author: Aijaz Ahmad Wani
email: aijazahmad9864@gmail.com
Date: 25-01-2020
*/
// program to convert gallons to cubic feet
#include <iostream>

using namespace std;

int main()
{
    float gallons,cubic_feet;
   cout<<"Enter number of gallons:";
   cin>>gallons;
   cubic_feet=gallons/7.481;
   cout<<"Equivalent cubic feet = "<<cubic_feet;
   return 0;

}
