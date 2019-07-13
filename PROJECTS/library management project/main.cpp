#include <iostream>
#include <conio.h>
void mainmenu(void);
void password(void);
using namespace std;

int main()
{
    password();
    getch();
}

void mainmenu(void)
{
    system("cls");
    int choice;
    cout<<"1. Add Books"<<endl;
    cout<<"2. Delete Books"<<endl;
    cout<<"3. Search Books"<<endl;
    cout<<"4. Issue Books"<<endl;
    cout<<"5. View Book List"<<endl;
    cout<<"6. Update Books Record"<<endl;
    cout<<"7. EXIT / CLOSE "<<endl;
    cout<<"Enter your choice : ";
    cin>>choice;
    switch(choice)
    {
    case 1:
        addbooks();
        break;
    case 2:
        deletebooks();
        break;
    case 3:
        searchbooks();
        break;
    case 4:
        issuebooks();
        break;
    case 5:
        viewbooks();
        break;
    case 6:
        updatebooks();
        break;
    case 7:
        exit(0);
    default:
        cout<<"Wrong choice..........Please enter correct option ";

    }

}

password(void )
{



}
