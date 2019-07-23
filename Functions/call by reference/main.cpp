/*
Author : Aijaz Ahmad Wani
email : aijazahmad9864@gmail.com
Date : 23-7-2019
*/
// call by reference
// when formal arguments are reference variables,it is function call by reference
#include <iostream>
using namespace std;
int sum(int&,int&);
int main()
{
    int a=2,b=5;
    int c = sum(a,b);
    cout<<"sum = "<<c;

}
int sum(int&x,int&y)
{
    return(x+y);
}
