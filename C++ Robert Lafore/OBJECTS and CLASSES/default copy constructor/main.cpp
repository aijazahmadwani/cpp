#include <iostream>
// default copy constructor
using namespace std;

class Distance
{
    private:
        int feet;
        float inches;
    public:
        Distance():feet(0),inches(0)
        {

        }
        Distance(int ft,float in):feet(ft),inches(in)
        {

        }
        void showData()
        {
            cout<<"Feet = "<<feet<<endl;
            cout<<"Inches = "<<inches<<endl;
        }
};
int main()
{
    Distance d1(22,55);
    Distance d2(d1); // default copy constructor
    d1.showData();
    d2.showData();
}
