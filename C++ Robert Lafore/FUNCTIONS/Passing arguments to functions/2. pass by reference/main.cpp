// order two arguments passed by reference
#include <iostream>

using namespace std;
void order(int&,int&);
int main()
{
    int n1=99,n2=33,n3=44,n4=33;
    order(n1,n2);
    order(n3,n4);
    cout<<"n1 = "<<n1<<endl;
    cout<<"n2 = "<<n2<<endl;
    cout<<"n3 = "<<n3<<endl;
    cout<<"n4 = "<<n4<<endl;
    return 0;
}

void order(int& a,int& b)
{
    int temp;
    if(a>b){
        temp=a;
        a=b;
        b=temp;
    }

}
