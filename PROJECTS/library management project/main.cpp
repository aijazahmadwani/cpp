/*
Author : Aijaz Ahmad Wani
email : aijazahmad9864@gmail.com
Date : 20-7-2019
*/
// library management project
// password = system
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <fstream>
void mainmenu(void);
void password(void);
using namespace std;
class student
{
    public:
        int student_id;
    public:
        void getstu(void)
        {
            cout<<"\nEnter student ID ";
            cin>>student_id;
        }
        void showstu(void)
        {
            cout<<"\t\t"<<student_id<<endl;
        }

};
student s;
class book
{
    private:
        int bookid;
        char bookauthor[40];
        char booktitle[40];
        float price;
        int quantity;
    public:
        book()  // constructor
        {
            bookid = 0;
            price = 0;
            quantity = 0;
            strcpy(bookauthor,"no title");
            strcpy(booktitle,"no title");
        }
        void getbookdata()
        {
            cout<<"Enter BOOK ID : ";
            cin>>bookid;
            cin.ignore();
            cout<<"TITLE : ";
            cin.getline(booktitle,39);
           // cin.ignore();
            cout<<"AUTHOR : ";
            cin.getline(bookauthor,39);
            cout<<"PRICE : ";
            cin>>price;
            cout<<"QUANTITY : ";
            cin>>quantity;
        }
        void showbookdata()
        {
            cout<<bookid<<"\t"<<booktitle<<"\t\t"<<bookauthor<<"\t\t"<<price<<"\t"<<quantity;
        }
        void storebookdata(void);
        void viewallbooks(void);
        void deletebook(char *);
        void searchbook(char*);
        void updatebook(char*);
        void issuebook(char*);
        void viewissuedbooks(void);
        void removeissuedbook(char*);
};
void book::removeissuedbook(char* issue)
{
    ifstream fin;
    ofstream fout;
    int counter = 0;
    fin.open("issue.dat",ios::binary|ios::in);
    if(!fin)
    {
        cout<<"File not found\n";

    }
    else
    {

    fout.open("issuetemp.dat",ios::binary|ios::app);

    fin.read((char*)this,sizeof(*this));
    fin.read((char*)&s,sizeof(s));
    while(!fin.eof())
    {
        if(!strcmp(booktitle,issue))
        {
            counter++;
        }
        if(strcmp(booktitle,issue))
        {
            fout.write((char*)this,sizeof(*this));
            fout.write((char*)&s,sizeof(s));
        }
        fin.read((char*)this,sizeof(*this));
        fin.read((char*)&s,sizeof(s));

    }
    fin.close();
    fout.close();
    remove("issue.dat");
    rename("issuetemp.dat","issue.dat");
    if(counter == 0)
    {
        cout<<"Book not found!\n";
    }
    else
    {
        cout<<endl<<issue<<" removed successfully\n";
    }

    }

}
void book::viewissuedbooks(void)
{
    ifstream fin;
    int counter = 0;
    fin.open("issue.dat",ios::binary|ios::in);
    if(!fin)
    {
        cout<<"File not found\n";
    }
    else
    {
        fin.read((char*)this,sizeof(*this));
        fin.read((char*)&s,sizeof(s));
        if(fin.eof()==1)
        {
            cout<<"NO DATA found!\n";
        }
        cout<<"\nID\tTITLE\t\tAUTHOR\t\tPRICE\tQUANTITY\tIssued to (Student_ID)\n";
        while(!fin.eof())
        {
            showbookdata();
            s.showstu();
            fin.read((char*)this,sizeof(*this));
            fin.read((char*)&s,sizeof(s));


        }
    }
    fin.close();
}
void book::issuebook(char* issue)
{
    ifstream fin;
    ofstream fout;
    int counter=0;
    char studentname[30];
    fin.open("file.dat",ios::in|ios::binary);
    if(!fin)
    {
        cout<<"File not found\n";
    }
    else
    {


        fin.read((char*)this,sizeof(*this));
        while(!fin.eof())
        {
            if(!strcmp(issue,booktitle))
            {
                cout<<"Book found! \n";
                cout<<"\nID\tTITLE\t\tAUTHOR\t\tPRICE\tQUANTITY\n";
                showbookdata();
                counter++;
                //student s;
                s.getstu();
                fout.open("issue.dat",ios::binary|ios::app);
                fout.write((char*)this,sizeof(*this));
                fout.write((char*)&s,sizeof(s));

                cout<<"\nBook issued successfully to "<<s.student_id;

            }
            fin.read((char*)this,sizeof(*this));
        }
    }
    if(counter==0)
    {
        cout<<"No record found\n";
    }
    fin.close();
    fout.close();
}
void book::updatebook(char* update)
{
    fstream f;
    f.open("file.dat",ios::binary|ios::ate|ios::in|ios::out);
    f.seekp(0);
    f.read((char*)this,sizeof(*this));
    while(!f.eof())
    {
        if(!strcmp(update,booktitle))
        {
             getbookdata();
             f.seekp(f.tellp()-sizeof(*this));
             f.write((char*)this,sizeof(*this));
        }
        f.read((char*)this,sizeof(*this));
    }
    f.close();
}
void book::searchbook(char* search_book)
{
    ifstream fin;
    int counter=0;
    fin.open("file.dat",ios::binary|ios::in);
    if(!fin)
    {
        cout<<"File not found\n";
    }
    else
    {
        fin.read((char*)this,sizeof(*this));
        while(!fin.eof())
        {
            if(!strcmp(booktitle,search_book))
            {
                cout<<"Book Found!\n";
                cout<<"\nID\tTITLE\t\tAUTHOR\t\tPRICE\tQUANTITY\n\n";
                showbookdata();
                counter++;

            }
        fin.read((char*)this,sizeof(*this));
        }
        fin.close();
    }
    if(counter==0)
    {
        cout<<endl<<search_book<<" not found";
    }
}
void book::deletebook(char* del)
{
    ofstream fout;
    ifstream fin;
    int counter = 0;
    fin.open("file.dat",ios::binary|ios::in);
    if(!fin)
    {
        cout<<"File not found\n";
    }
    else
    {
        fout.open("temp.dat",ios::binary|ios::out);
        fin.read((char*)this,sizeof(*this));
        while(!fin.eof())
        {
             if(!strcmp(booktitle,del))
             {
                 counter++;
             }
            if(strcmp(booktitle,del))
            {
                fout.write((char*)this,sizeof(*this));
            }
          fin.read((char*)this,sizeof(*this));

        }
        fin.close();
        fout.close();
        if(counter == 0)
        {
            cout<<"Book not found\n\n";
        }
        else
        {
            cout<<endl<<del<<" deleted successfully\n\n";
        }


    }
    remove("file.dat");
    rename("temp.dat","file.dat");
}
void book::viewallbooks(void)
{
    ifstream fin;
    fin.open("file.dat",ios::binary|ios::in);
    if(!fin)
    {
        cout<<"No record found\n";

    }
    else
    {
        cout<<"\nID\tTITLE\t\tAUTHOR\t\tPRICE\tQUANTITY\n\n";
        fin.read((char*)this,sizeof(*this));
        while(!fin.eof())
        {
            showbookdata();
            cout<<endl;
            fin.read((char*)this,sizeof(*this));
        }
        fin.close();

    }
}
void book :: storebookdata(void)
{
    if(bookid==0&&price==0)
    {
        cout<<"Book data not initialized\n";
        exit(0);
    }
    else
    {
        ofstream fout;
        fout.open("file.dat",ios::binary|ios::app);
        fout.write((char*)this,sizeof(*this));
        fout.close();
        cout<<"\n\nRecord Successfully saved !\n";

    }

}
int main()
{
    password();
    getch();
}

void mainmenu(void)
{
    while(1){
    book b;
    char title[40];
    system("cls");
    int choice;
    cout<<"1. Add Books"<<endl;
    cout<<"2. Delete Books"<<endl;
    cout<<"3. Search Book"<<endl;
    cout<<"4. Update Book Record"<<endl;
    cout<<"5. View Book List"<<endl;
    cout<<"6. Issue Books"<<endl;
    cout<<"7. View issued Books"<<endl;
    cout<<"8. Remove issued Book"<<endl;
    cout<<"9. EXIT / CLOSE "<<endl;
    cout<<"Enter your choice : ";
    cin>>choice;
    switch(choice)
    {
    case 1:
        b.getbookdata();
        b.storebookdata();
        break;
    case 2:
        b.viewallbooks();
        cout<<"Enter Book Title to delete record : ";
        cin.ignore();
        cin.getline(title,40);
        b.deletebook(title);
        break;
    case 3:
        cout<<"Enter Book title to search : ";
        cin.ignore();
        cin.getline(title,40);
        b.searchbook(title);
        break;
    case 6:
        b.viewallbooks();
        cout<<"\n\nEnter Book title you want  to issue : ";
        cin.ignore();
        cin.getline(title,40);
        b.issuebook(title);
        break;
    case 5:
        b.viewallbooks();
        break;
    case 4:
        cout<<"Enter Book title which you want to update : ";
        cin.ignore();
        cin.getline(title,40);
        b.updatebook(title);
        break;
    case 7:
        b.viewissuedbooks();

        break;
    case 8:
        b.viewissuedbooks();
        cout<<"Enter Book title you want to remove : ";
        cin.ignore();
        cin.getline(title,40);
        b.removeissuedbook(title);
        break;
    case 9:
        exit(0);
    default:
        cout<<"Wrong choice..........Please enter correct option ";

    }
    getch();

    }
        getch();

}

void password(void)
{
    string pw;
    string a = "system";
    cout<<"******************************************************************************************\n\n";
    cout<<"\t\t\tSPS LIBRARY SRINAGAR\n\n";
    cout<<"******************************************************************************************\n\n";
    cout<<"Enter Password : ";
    cin>>pw;
    if(pw==a)
    {
        cout<<"Password matched ";

        cout<<"\n\nWelcome to SPS LIBRARY SRINAGAR\n\n";

        cout<<"Press Enter to continue \n";
        getch();
        mainmenu();
    }
    else
    {
        cout<<"Wrong password";
        exit(0);
    }


}
