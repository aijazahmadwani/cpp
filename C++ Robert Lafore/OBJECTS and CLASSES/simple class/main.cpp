#include <iostream>
// demonstrates a simple object
using namespace std;
class test
{
    private:
        int data;
    public:
        void setData(int d)
        {
            data=d;
        }
        void showData()
        {
            cout<<data;
        }
};

int main()
{
    test t;
    t.setData(45);
    t.showData();
}
