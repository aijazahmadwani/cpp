#include <iostream>
using namespace std;


class student
{
private:
    string name;
    string course;
public:
    student(string n,string c)
    {
        name=n;
        course=c;
    }
    void showstudent()
    {
            cout<<"Name = "<<name<<endl;
            cout<<"Course = "<<course<<endl;
    }
};

class marks : public student
{
private:
    int phy,che,math;

public:
    marks(string name,string course,int p,int c,int m):student(name,course)
    {
        math = m;
        phy = p;
        che = c;
    }

    void showmarks()
    {
        cout<<"Math = "<<math<<endl;
        cout<<"Physics = "<<phy<<endl;
        cout<<"Chemistry = "<<che<<endl;
    }
};
int main()
{
    marks m("AIJAZ","IMCA",100,90,99);
    m.showstudent();
    m.showmarks();
}
