
/*
Author : Aijaz Ahmad Wani
email : aijazahmad9864@gmail.com
Date : 12-07-2019
*/
// retreive particular data from a file
#include <iostream>
#include <fstream>

using namespace std;

class stu
{
    private:
        int id;
        char name[20];
    public:
        void enq();
};
void stu :: enq()
{
    stu s;
    ifstream file;
    file.open("student.dat");
    int idno,found=0;
    cout<<"Enter stu id : ";
    cin>>idno;
    file.read((char*)&s,sizeof(s));
    while(!file.eof())
    {
        if(s.id==idno)
        {

            cout<<endl<<"................."<<endl;
            cout<<"ID     Name";
            cout<<endl<<s.id<<"\t"<<s.name;
            found=1;
            break;

        }
        file.read((char*)&s,sizeof(s));

    }
    file.close();
    if(found==0)
    {

        cout<<"Student record NOT found"<<endl;

    }
}
int main()
{
    stu s;
    s.enq();

}
