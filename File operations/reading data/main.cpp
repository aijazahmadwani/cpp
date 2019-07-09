/*Author: AIJAZ AHMAD WANI
email: aijazahmad9864@gmail.com
Date: 8 / 7 / 2019
*/
// reading data
#include <fstream>
#include <iostream>

using namespace std;

class stu
{
    private:
        int id;
        char name[20];
    public:
        void putstu()
        {
            cout<<"ID = "<<id<<"\tName = "<<name<<endl;
        }
};
int main()
{
    stu s;
    ofstream file("stu.dat");

    file.write((char *)&s,sizeof(s));
    ifstream("stu.dat");
    cout<<"ID \t Name \n";
    cout<<"--------------------";
    while(!file.eof())
    {
        s.putstu();
        file.read((char *)&s,sizeof(s));
    }
    file.close();
}
