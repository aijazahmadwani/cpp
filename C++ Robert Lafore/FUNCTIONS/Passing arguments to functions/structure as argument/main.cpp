// passing structure as argument
#include <iostream>

using namespace std;
struct Distance{
    int feet;
    float inches;
};
void show(Distance);
int main()
{
    Distance d1;
    cout<<"Enter feet: ";
    cin>>d1.feet;
    cout<<"Enter inches: ";
    cin>>d1.inches;
    show(d1);
    return 0;
}
void show(Distance d)
{
    cout<<"Feet = "<<d.feet<<endl;
    cout<<"Inches = "<<d.inches<<endl;

}
