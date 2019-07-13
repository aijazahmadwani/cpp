/*
Author : Aijaz Ahmad Wani
email : aijazahmad9864@gmail.com
Date : 13-7-2019
*/

// storing data in a file
#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

class book
{
    private:
        int bookid;
        char title[40];
        float price;
    public:
        book()
        {
            bookid=0;
            strcpy(title,"no title ");
            price=0;
        }
        void getbookdata()
        {
            cout<<"Enter Book ID : ";
            cin>>bookid;
            cin.ignore();
            cout<<"Enter Book title : ";
            cin.getline(title,40);
            cout<<"Enter Book Price : ";
            cin>>price;

        }
        void showbookdata()
        {
            cout<<"\nBook ID = "<<bookid;
            cout<<"\nBook Title = "<<title;
            cout<<"\nBook Price = "<<price;
        }
        int storebook();

};
int book::storebook()
{
    if(bookid==0&&price==0)
    {
        cout<<"\nBook data not initialized";
        return 0;
    }
    else
    {
        ofstream fout;
        fout.open("file1.dat",ios::app|ios::binary);
        fout.write((char*)this,sizeof(*this));
        fout.close();
        return 1;
    }
}
int main()
{
    book b1,b2;
    b1.getbookdata();
    b1.showbookdata();
    b1.storebook();
    b2.showbookdata();
    b2.storebook();
    return 0;
}
