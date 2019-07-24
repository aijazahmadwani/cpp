/*
Author : Aijaz Ahmad Wani
email : aijazahmad9864@gmail.com
Date : 24-7-2019
*/
// access specifiers in structure
#include <iostream>
using namespace std;
struct book
{
    private :
        int id;
        char name[20];
        float price;
    public:
        void getbookdata()
        {
            cout<<"Enter ID, Book title and price : ";
            cin>>id>>name>>price;
        }
        void showbook()
        {
            cout<<"ID = "<<id<<endl;
            cout<<"Title = "<<name<<endl;
            cout<<"Price = "<<price<<endl;
        }

};
using namespace std;

int main()
{
    book b;
    b.getbookdata();
    b.showbook();
}
