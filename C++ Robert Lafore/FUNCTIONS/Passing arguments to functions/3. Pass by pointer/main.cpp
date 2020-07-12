// order two arguments using pointers
#include <iostream>
void order(int*,int*);
using namespace std;

int main()
{
    int n1=55,n2=3,n3=77,n4=11;
    order(&n1,&n2);
    order(&n3,&n4);
    cout<<"n1 = "<<n1<<endl;
    cout<<"n2 = "<<n2<<endl;
    cout<<"n3 = "<<n3<<endl;
    cout<<"n4 = "<<n4<<endl;
}

void order(int* num1,int* num2)
{
    int temp;
    if(*num1>*num2)
    {
        temp=*num1;
        *num1=*num2;
        *num2=temp;
    }

}
