/*
Author : Aijaz Ahmad Wani
email : aijazahmad9864@gmail.com
Date : 13-7-2019
*/

#include <iostream>
#include <fstream>  // for file handling
#include <string.h>
#include <stdio.h>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
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
            cout<<"\n"<<bookid<<"  "<<title
            <<"  "<<price;
        }
        int storebook();
        void viewallbooks();
        void searchbook(char*);
        void deletebook(char *);
        void updatebook(char*);

};
void book::updatebook(char *t)
{
    fstream file;
    file.open("file1.dat",ios::ate|ios::binary|ios::in|ios::out);
    file.seekg(0);  //seekg/g sets the pointer at 0 byte
    file.read((char*)this,sizeof(*this));
    while(!file.eof())
    {
        if(!strcmp(t,title))
        {
            getbookdata();
            file.seekp(file.tellp()-sizeof(*this)); // tells current pointer position...here we subtracted becoz file pointer is one step forward when we try to write
            file.write((char*)this,sizeof(*this));

        }
        file.read((char*)this,sizeof(*this));
    }
    file.close();

}
void book::deletebook(char *t)
{
    ifstream fin;
    ofstream fout;
    fin.open("file1.dat",ios::binary|ios::in);
    if(!fin)
        cout<<"\nFile Not found";
    else
    {
        fout.open("tempfile.dat",ios::binary|ios::out);
        fin.read((char*)this,sizeof(*this));
        while(!fin.eof())
        {
            if(strcmp(title,t))
                fout.write((char*)this,sizeof(*this));
            fin.read((char*)this,sizeof(*this));
        }
        fin.close();
        fout.close();
        remove("file1.dat");    //to delete file // stdio.h
        rename("tempfile.dat","file1.dat"); //rename file
    }
}
void book::searchbook(char *t)
{
    int counter=0;
    ifstream fin;
    fin.open("file1.dat",ios::in|ios::binary);

    if(!fin)
    {
        cout<<"\nFile not found";
    }
    else
    {
    fin.read((char*)this,sizeof(*this));

    while(!fin.eof())
        {
            if(!strcmp(t,title)) // passing address of two strings if strings are same it return 0, that's y we put ! here
              {
                   showbookdata();
                    counter++;
              }

                fin.read((char*)this,sizeof(*this));

        }
        if(counter==0)
        {
            cout<<"\n\nRecord not found";
        }

    fin.close();
    }

}
void book::viewallbooks()
{
    ifstream fin;
    fin.open("file1.dat",ios::binary|ios::in);
    if(!fin)
        cout<<"File not found";
    else
    {

        fin.read((char*)this,sizeof(*this));
        while(!fin.eof())
        {
            showbookdata();
            fin.read((char*)this,sizeof(*this));
        }
        fin.close();
    }
}
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
int menu()
{
    int choice;
    cout<<"\nBook Management ";
    cout<<"\n1. Insert Book record";
    cout<<"\n2. view all book records";
    cout<<"\n3. search book record";
    cout<<"\n4. delete a book record";
    cout<<"\n5. update book record";
    cout<<"\n6. exit";
    cout<<"\n\nenter your choice : ";
    cin>>choice;
    return choice;

}
int main()
{

     book b1;
     char title[20];
     while(1)
     {
        system("cls");
         switch(menu())
         {
         case 1:
             b1.getbookdata();
             b1.storebook();
             cout<<"\nRecord inserted";
             break;
         case 2:
             b1.viewallbooks();
             break;
         case 3:
             cout<<"\nEnter title of book to search";
            cin.ignore();
             cin.getline(title,19);
             b1.searchbook(title);
             break;

         case 4:
             cout<<"\nEnter book title to delete record";
             cin.ignore();
             cin.getline(title,19);
             b1.deletebook(title);
             break;
         case 5:
             cout<<"\nEnter book title to update record ";
             cin.ignore();
             cin.getline(title,19);
             b1.updatebook(title);
             break;

         case 6:
             exit(0);
             break;
         default:
            cout<<"Invalid choice .....";


         }
         getch();
     }




    return 0;
}
