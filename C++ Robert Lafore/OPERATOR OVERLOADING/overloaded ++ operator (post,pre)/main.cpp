// overloaded ++ operator in both prefix and postfix
#include <iostream>

using namespace std;
class test
{
    private:
        int count;
    public:
        test():count(0)
        {}
        int get_count()
        {
            return count;
        }
        void operator ++() // for prefix
        {
            ++count;
        }
        void operator ++(int) // postfix (here int isn't really an argument
         {                        //,it is a signal to compiler
             count++;           // to create postfix version )
         }

};
int main()
{
    test t1,t2;
    cout<<"\nt1 = "<<t1.get_count();
    cout<<"\nt2 = "<<t2.get_count();
    t1++;
    t1++;
    cout<<"\nt1 = "<<t1.get_count();

    ++t2;
    cout<<"\nt2 = "<<t2.get_count();


    return 0;
}
