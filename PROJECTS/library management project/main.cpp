#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <fstream>
void mainmenu(void);
void password(void);
using namespace std;

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
            cout<<bookid<<"\t"<<booktitle<<"\t\t"<<bookauthor<<"\t\t"<<price<<"\t"<<quantity<<endl;
        }
        void storebookdata(void);
        void viewallbooks(void);
        void deletebook(char *);
        void searchbook(char*);
        void updatebook(char*);
};
void book::updatebook(char* update)
{
    fstream f;
    f.open("file.dat",ios::binary,ios::in);
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
                cout<<"ID\tTITLE\t\tAUTHOR\t\tPRICE\tQUANTITY\n";
                showbookdata();
                counter++;

            }
        fin.read((char*)this,sizeof(*this));
        }
        fin.close();
    }
    if(counter==0)
    {
        cout<<search_book<<" not found";
    }
    getch();
}
void book::deletebook(char* del)
{
    ofstream fout;
    ifstream fin;
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
            if(strcmp(booktitle,del))
            {
                fout.write((char*)this,sizeof(*this));
            }
          fin.read((char*)this,sizeof(*this));

        }
        fin.close();
        fout.close();
        cout<<del<<" deleted successfully";
        getch();
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
        exit(0);
    }
    else
    {
        cout<<"ID\tTITLE\t\tAUTHOR\t\tPRICE\tQUANTITY\n";
        fin.read((char*)this,sizeof(*this));
        while(!fin.eof())
        {
            showbookdata();
            fin.read((char*)this,sizeof(*this));
        }
        fin.close();
        getch();
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
        cout<<"Record Successfully saved !\n";
        getch();
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
  //      issuebooks();
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
  //      viewissuedbooks();
        break;
    case 8:
    //    removeissuedbook();
        break;
    case 9:
        exit(0);
    default:
        cout<<"Wrong choice..........Please enter correct option ";

    }

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
