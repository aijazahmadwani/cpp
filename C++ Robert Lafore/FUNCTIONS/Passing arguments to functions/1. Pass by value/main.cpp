
/*
Pass by value:
passing arguments in such a way where the function creates copies/ new variables
to hold the values passed to it.
*/
// 1. Passing constants
// 2. Passing variables
#include <iostream>
using namespace std;
void constfun(char,int);
void varfun(int);
int main()
{
    cout<<"Passing constants"<<endl;
    constfun('=',40);
    int a;
    cout<<endl<<"Enter a number:";
    cin>>a;
    varfun(a);
    return 0;
}
void constfun(char ch,int n)
{
    for(int i=1;i<=n;i++){
        cout<<ch;
    }

}
void varfun(int x)
{
    cout<<x;
}
