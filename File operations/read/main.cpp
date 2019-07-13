/*
Author : Aijaz Ahmad Wani
email : aijazahmad9864@gmail.com
Date : 13-7-2019

*/
#include <iostream>
#include <fstream>
#include  <conio.h>
using namespace std;

int main()
{
    char ch;
    ifstream file;
    file.open("first.txt");
    ch=file.get();
    while(!file.eof())
    {
        cout<<ch;
        ch=file.get();
    }
    return 0;

}
