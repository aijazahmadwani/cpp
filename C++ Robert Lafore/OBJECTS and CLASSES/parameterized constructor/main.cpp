#include <iostream>
//Parameterized Constructor -: A constructor that receives arguments/parameters, is called
//parameterized constructor.
using namespace std;
class test
{
    private:
        int a;
        int b;
    public:
        test(int x,int y):a(x),b(y) // parameterized constructor
        {  }
        void showData()
        {
            cout<<"a = "<<a<<endl;
            cout<<"b = "<<b<<endl;
        }
};
int main()
{
    test t(1,2);
    t.showData();
}
