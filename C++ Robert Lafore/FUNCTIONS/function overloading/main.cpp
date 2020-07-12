/* function overloading
 functions can be overloaded by change in no. of arguments
  and change in type of arguments */
#include <iostream>

using namespace std;
void fun(int);
void fun(int,int);
void fun(double);

int main()
{
    fun(10);
    fun(12.5);
    fun(11,22);
}
void fun(int x)
{
    cout<<"Value of x = "<<x<<endl;

}
void fun(double x)
{
    cout<<"Value of x = "<<x<<endl;
}
void fun(int x,int y)
{
    cout<<"Value of x and y = "<<x<<" "<<y<<endl;
}
