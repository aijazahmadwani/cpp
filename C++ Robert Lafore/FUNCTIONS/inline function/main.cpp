// inline function
#include <iostream>
inline double cube(double x){return x*x*x;}
using namespace std;

int main()
{
    double a,b;
    a = cube(5.0);
    b = cube(4.5+7.5);
    cout<<"Cube of a = "<<a<<endl;
    cout<<"Cube of b = "<<b<<endl;
}
