
/*
Author : Aijaz Ahmad Wani
email: aijazahmad9864@gmail.com
Date : 13-7-2019*/
#include <iostream>
#include <fstream>
#include <conio.h>

using namespace std;

int main()
{
    ofstream file;
    file.open("first.dat");
    file<<"hello world";
    file.close();
    return 0;
}
