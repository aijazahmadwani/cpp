/*
Author : Aijaz Ahmad Wani
email : aijazahmad9864@gmail.com
Date : 23-7-2019
*/
// call by address
//when formal arguments are pointer variables ,it is function call by reference
#include <iostream>

using namespace std;
int sum(int*,int*);
int main()
{
    int a=5;
    int b=3;
    int c = sum(&a,&b);
    cout<<"Sum = "<<c;
}

int sum(int* x,int* y)
{
    return (*x+*y);
}
