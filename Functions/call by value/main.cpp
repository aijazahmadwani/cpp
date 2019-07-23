/*
Author : Aijaz Ahmad Wani
email : aijazahmad9864@gmail.com
Date : 23-7-2019
*/
// call by value
// when formal arguments are ordinary variables,it is function call by value
#include <iostream>

using namespace std;
int sum(int,int);
int main()
{
    int a=5;
    int b=10;
    int s = sum(a,b);
    cout<<"Sum = "<<s;
}

int sum(int x,int y)
{
    return (x+y);
}
