// array of objects
#include <iostream>
using namespace std;

class Distance
{
    private:
        int feet;
        float inches;
    public:
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
};
int main()
{
    Distance d[5];  // array of objects
    for(int i=0;i<5;i++)
    {
        d[i].getDistance();
    }
    for(int i=0;i<5;i++)
    {
        d[i].showDistance();
    }

}
