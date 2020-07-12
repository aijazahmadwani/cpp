#include <iostream>
// passing array to functions
using namespace std;
void display(int a[]);
const int size = 5;
int main()
{
    int a[size] = {1,2,3,4,5};
    display(a);
    return 0;
}
void display(int arr[])
{
    for(int i=0;i<size;i++)
        cout<<arr[i]<<endl;
}
