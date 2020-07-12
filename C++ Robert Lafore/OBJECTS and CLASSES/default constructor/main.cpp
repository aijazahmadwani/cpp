#include <iostream>
// default constructor: A constructor that accepts no parameters
// is known as default constructor.
using namespace std;
class Counter
{
    private:
        int count;
    public:
        Counter():count(0) // default constructor
        {   }
        void inc_count()
        {
            count++;
        }
        void get_count()
        {
            cout<<count<<endl;
        }


};
int main()
{
   Counter c1,c2;
   c1.inc_count();
   c1.get_count();
   c2.get_count();
}
