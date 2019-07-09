/*Author: AIJAZ AHMAD WANI
email: aijazahmad9864@gmail.com
Date: 8 / 7 / 2019
*/
// writing data in a file
#include <iostream>
#include <fstream>
using namespace std;

class stu
{
    private:
        int id;
        char name[20];
    public:
        void getdata()
        {
            cout<<"Enter student id :";
            cin>>id;
            cout<<"Enter Name : ";
            cin>>name;
        }

};

int main()
{
    stu s;
    ofstream file;
    file.open("student.dat");

    char op;
    do
    {
        s.getdata();
        file.write((char *)&s,sizeof(s));
        cout<<"One row created\n";
        cout<<"Add another student (Y/N) ";
        cin>>op;

    }while(op=='Y'||op=='y');
    file.close();
}
