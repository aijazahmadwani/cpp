//overloading unary operator
#include <iostream>

using namespace std;
class test
{
    private:
        int count;
    public:
        test():count(0){} // constructor
        int get_count()
        {
            return count;
        }
        void operator ++()
        {
            count++;
        }
};
int main()
{
    test t1,t2;
    cout<<"\nt1 = "<<t1.get_count();
    cout<<"\nt2 = "<<t2.get_count();
    ++t1;
    cout<<"\nt1 = "<<t1.get_count();
    ++t2;
    ++t2;
    cout<<"\nt1 = "<<t2.get_count();
}
