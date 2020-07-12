// adding two strings using overloading + operator
#include <iostream>
# include <string.h>

using namespace std;
class test
{
    private:
        char a[100];
    public:
        void get_data()
        {
            cout<<"Enter string: ";
            cin>>a;
        }
        void show_data()
        {
            cout<<a;
        }
        test operator +(test t)
        {
            test temp;
            strcpy(temp.a,a);
            strcat(temp.a," ");
            strcat(temp.a,t.a);
            return temp;
        }

};
int main()
{
    test t1,t2,t3;
    t1.get_data();
    t2.get_data();
    t3=t1+t2;
    t3.show_data();
    return 0;
}
