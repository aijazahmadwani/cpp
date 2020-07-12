#include <iostream>

using namespace std;

int main()
{
    string full_name,nick_name,address;
    cout<<"Enter full name : ";
    getline(cin,full_name);
    cout<<"Enter nickname : ";
    cin>>nick_name;

    cout<<"Enter address on separate lines\n Terminate with '$'";
    getline(cin,address,'$');

    cout<<"Your full name = "<<full_name<<endl;
    cout<<"your nick name = "<<nick_name<<endl;
    cout<<"Your address = "<<address;
}
