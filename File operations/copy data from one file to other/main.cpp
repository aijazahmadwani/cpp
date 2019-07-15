/*
Author : Aijaz Ahmad Wani
email : aijazahmad9864@gmail.com
Date : 15-7-2019
*/
// copy data from one file to another
#include <iostream>
#include <fstream>
using namespace std;
void copyfile(char* f1,char* f2);


void copyfile(char* f1,char* f2)
{
    ifstream fin;
    ofstream fout;
    char ch;
    fin.open(f1);
    fout.open(f2);
    ch=fin.get();
    while(!fin.eof())
    {
        fout<<ch;
        ch=fin.get();
    }
    fin.close();
    fout.close();
}

int main()
{
    copyfile("text.txt","abc.txt");
    cout<<"file copies";


}


