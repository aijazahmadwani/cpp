#include <iostream>
// object as function argument
// constructor overloading
using namespace std;
class Distance
{
    private:
        int feet;
        float inches;
    public:
       Distance():feet(0),inches(0)// default constructor (no argument)
       {  }
       Distance(int ft,float in):feet(ft),inches(in)// parameterized constructor
       {  }
        void getDistance()
        {
            cout<<"Enter feet : ";
            cin>>feet;
            cout<<"Enter inches : ";
            cin>>inches;
        }
        void showDistance()
        {
            cout<<"Feet = "<<feet<<endl;
            cout<<"Inches = "<<inches<<endl;
        }
        void addDistance(Distance d1,Distance d2)
        {
            inches = d1.inches+d2.inches;
            feet=0;
            if(inches>=12.0)
            {
                inches-=12.0;
                feet++;
            }
            feet += d1.feet+d2.feet;

        }


};
int main()
{
    Distance d1(11,6.25);
    Distance d2,d3;
    d2.getDistance();
    d3.addDistance(d1,d2);
    d3.showDistance();


}
