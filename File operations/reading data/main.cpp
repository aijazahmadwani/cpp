/*Author: AIJAZ AHMAD WANI
email: aijazahmad9864@gmail.com
Date: 8 / 7 / 2019
*/
// reading data from file
#include <fstream>
#include <iostream>

using namespace std;

class stu
{
    private:
        int id =0 ;
        char name[20]="";
    public:
        void putstu()
        {
            cout<<endl<<"ID = "<<id<<"\tName = "<<name<<endl;
        }
};
int main()
{
    stu s;
    ifstream file("student.dat");
    cout<<"ID \t Name \n";
    cout<<"--------------------";
    while(!file.eof())
    {
        s.putstu();
        file.read((char *)&s,sizeof(s));

    }
    file.close();
}
