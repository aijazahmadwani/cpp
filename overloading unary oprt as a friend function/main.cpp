/*
Author : Aijaz Ahmad Wani
email : aijazahmad9864@gmail.com
Date : 30-7-2019
*/
// overloading unary operator as a friend function
#include <iostream>

using namespace std;

class test
{
private:
    int a,b;
public:
    void showdata(void)
    {
        cout<<"A = "<<a<<endl;
        cout<<"B = "<<b<<endl;
    }
    void setdata(int x,int y)
    {
        a=x;
        b=y;
    }
    friend test operator - (test);

};
test operator -(test t)
{
    test temp;
    temp.a = -t.a;
    temp.b = -t.b;
    return temp;
}
int main()
{
    test t1,t2;
    t1.setdata(7,2);
    t1.showdata();
    t2 = -t1;
    t2.showdata();

}
