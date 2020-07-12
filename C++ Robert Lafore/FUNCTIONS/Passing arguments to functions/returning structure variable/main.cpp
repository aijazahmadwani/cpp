// returning a structure
#include <iostream>

using namespace std;
struct Distance
{
    int feet;
    float inches;
};
Distance add(Distance ,Distance );
int main()
{
    Distance d1,d2,d3;
    cout<<"Enter Feet: ";
    cin>>d1.feet;
    cout<<"Enter Inches: ";
    cin>>d1.inches;

    cout<<"Enter Feet: ";
    cin>>d2.feet;
    cout<<"Enter Inches: ";
    cin>>d2.inches;
    d3 = add(d1,d2);
    cout<<"Feet = "<<d3.feet<<endl;
    cout<<"Inches = "<<d3.inches;
    return 0;
}

Distance add(Distance dd1,Distance dd2)
{
   Distance dd3;
   dd3.inches = dd1.inches+dd2.inches;
   dd3.feet=0;
   if(dd3.inches>=12.0)
   {
       dd3.inches-=12.0;
       dd3.feet++;
   }
   dd3.feet += dd1.feet + dd2.feet;
   return dd3;
}
