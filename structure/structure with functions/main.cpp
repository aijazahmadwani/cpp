/*
Author : Aijaz Ahmad Wani
email : aijazahmad9864@gmail.com
Date : 24-7-2019
*/
// structure having data members and member functions
#include <iostream>

using namespace std;

struct book
{
    int id;
    char title[40];
    float price;
    void getbook()
    {
        cout<<"Enter ID : ";
        cin>>id;
        cout<<"Enter Title : ";
        cin>>title;
        cout<<"Enter price : ";
        cin>>price;
    }
    void show()
    {
        cout<<"ID = "<<id<<endl;
        cout<<"Title = "<<title<<endl;
        cout<<"Price = "<<price<<endl;
    }
};
int main()
{
    book b;
    b.getbook();
    b.show();
}
